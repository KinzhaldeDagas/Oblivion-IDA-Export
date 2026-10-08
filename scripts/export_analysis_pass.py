#!/usr/bin/env python3
"""Refresh a selected analysis pass from an open IDA MCP session.

Preserves the legacy function schema and historical folder paths. Detailed type,
global, vtable, and relationship evidence is additive under Findings/<pass>/.
Uses read-only IDA APIs; it never saves, closes, or opens an IDA database.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import subprocess
from pathlib import Path

from ida_repo_exporter import IdaMcp, json_write, now, safe_name


def hx(ea):
    return f"0x{int(ea):X}"


def source_text(value):
    return "\n".join(line.rstrip() for line in value.splitlines()).rstrip() + "\n"


def confidence(comment):
    match = re.search(r"\[(Verified|Probable|Candidate|Unknown)\]", comment)
    return match.group(1) if match else "Unknown"


def select_functions(ida, patterns):
    found = {}
    for pattern in patterns:
        offset = 0
        while True:
            result = ida.call("list_funcs", {"queries": {"filter": pattern, "count": 200, "offset": offset}})
            if isinstance(result, dict) and "result" in result:
                result = result["result"]
            page = result[0]
            for row in page["data"]:
                found[int(row["addr"], 16)] = row
            nxt = page.get("next_offset")
            if nxt is None or not page["data"]:
                break
            if int(nxt) <= offset:
                raise RuntimeError("IDA function pagination did not advance")
            offset = int(nxt)
    return sorted(found)


def function_detail(ida, ea):
    # One function per call bounds work on IDA's UI thread. Tail chunks are
    # traversed by FuncItems; tail hashes cover actual bytes in chunk order.
    return ida.py_eval(
        "[(f.start_ea, f.end_ea, f.flags, idc.get_func_name(f.start_ea), "
        "idc.get_type(f.start_ea) or '', ida_funcs.get_func_cmt(f,False) or '', "
        "ida_funcs.get_func_cmt(f,True) or '', idc.get_cmt(f.start_ea,0) or '', "
        "idc.get_cmt(f.start_ea,1) or '', idc.get_segm_name(f.start_ea), "
        "[(h, idc.get_item_size(h), idc.print_insn_mnem(h), "
        "ida_lines.tag_remove(idc.generate_disasm_line(h,0) or ''), "
        "(ida_bytes.get_bytes(h,idc.get_item_size(h)) or b'').hex(), "
        "idc.get_cmt(h,0) or '', idc.get_cmt(h,1) or '', "
        "[(x.frm,x.to,x.type,idc.get_name(x.to) or '', "
        "ida_funcs.get_func(x.to).start_ea if ida_funcs.get_func(x.to) else None) "
        "for x in idautils.XrefsFrom(h,0)]) for h in idautils.FuncItems(f.start_ea)], "
        "[(x.frm,x.to,x.type,idc.get_name(x.frm) or '', "
        "ida_funcs.get_func(x.frm).start_ea if ida_funcs.get_func(x.frm) else None, "
        "idc.get_func_name(x.frm) or '') for x in idautils.XrefsTo(f.start_ea,0)], "
        "[(a,b,(ida_bytes.get_bytes(a,b-a) or b'').hex()) for a,b in idautils.Chunks(f.start_ea)]) "
        "for f in [ida_funcs.get_func(" + str(ea) + ")] if f]"
    )[0]


def export_function(ida, ea, repo, pass_root, index_row, reuse_pseudocode=False):
    detail = function_detail(ida, ea)
    (start, end, flags, name, prototype, func_cmt, func_rep, cmt, rep,
     segment, instructions, incoming, chunks) = detail
    folder = index_row.get("folder") if index_row else f"{safe_name(name)}__{ea:X}"
    directory = repo / "functions" / folder
    previous = json.loads((directory / "function.json").read_text(encoding="utf-8")) if (directory / "function.json").exists() else {}
    if reuse_pseudocode and (directory / "pseudocode.c").exists():
        exported = {"code": (directory / "pseudocode.c").read_text(encoding="utf-8")}
    else:
        result = ida.call("export_funcs", {"addrs": [hx(ea)], "format": "json"})
        exported = result["functions"][0]
        if "error" in exported:
            raise RuntimeError(f"Could not export {hx(ea)}: {exported['error']}")
    outgoing = []
    callees, callers, data_refs = [], [], []
    instruction_records, instruction_comments = [], []
    byte_stream = b''.join(bytes.fromhex(raw) for a,b,raw in chunks)
    for head, size, mnemonic, line, raw, regular, repeatable, refs in instructions:
        instruction_records.append({"ea": hx(head), "size": size, "mnemonic": mnemonic, "line": line})
        if regular or repeatable:
            instruction_comments.append({"ea": hx(head), "regular": regular, "repeatable": repeatable,
                                         "confidence": confidence(regular + "\n" + repeatable)})
        for frm, to, typ, target_name, owner in refs:
            outgoing.append({"from_ea": hx(frm), "to_ea": hx(to), "to_name": target_name, "type": typ})
            if typ in (16, 17) and owner is not None:
                callees.append({"site_ea": hx(frm), "target_ea": hx(owner), "target_name": target_name, "xref_type": typ})
            elif typ != 21 and owner is None:
                data_refs.append({"site_ea": hx(frm), "target_ea": hx(to), "target_name": target_name, "xref_type": typ})
    incoming_records = []
    for frm, to, typ, source_name, owner, owner_name in incoming:
        incoming_records.append({"from_ea": hx(frm), "from_name": source_name, "to_ea": hx(to), "type": typ})
        if owner is not None:
            callers.append({"call_site_ea": hx(frm), "function_ea": hx(owner), "name": owner_name, "display_name": owner_name})
    combined_comments = "\n".join([func_cmt, func_rep, cmt, rep])
    metadata = {
        "start_ea": hx(start), "end_ea": hx(end), "name": name,
        "display_name": previous.get("display_name",name) if previous.get("name") == name else name,
        "size": end-start, "segment": segment, "flags": flags,
        "type": prototype,
        "sha256": hashlib.sha256(next(bytes.fromhex(raw) for a,b,raw in chunks if a==start)).hexdigest(),
        "total_chunk_size": sum(b-a for a,b,raw in chunks),
        "chunks_sha256": hashlib.sha256(byte_stream).hexdigest(),
        "comment_regular": "\n\n".join(dict.fromkeys(x for x in [func_cmt,cmt] if x)),
        "comment_repeatable": "\n\n".join(dict.fromkeys(x for x in [func_rep,rep] if x)),
        "has_pseudocode": bool(exported.get("code")), "callees_count": len(callees),
        "callers_count": len(callers), "data_refs_count": len(data_refs),
        "xrefs_from_count": len(outgoing), "xrefs_to_count": len(incoming_records),
        "evidence_confidence": confidence(combined_comments), "analysis_pass": "OctoberPass",
    }
    json_write(directory / "function.json", metadata)
    for filename, value in [("instructions.json", instruction_records), ("callees.json", callees),
                            ("callers.json", callers), ("data_refs.json", data_refs),
                            ("xrefs_from.json", outgoing), ("xrefs_to.json", incoming_records)]:
        json_write(directory / filename, value)
    (directory / "disasm.asm").write_text("\n".join(f"{r['ea']}: {r['line']}" for r in instruction_records) + "\n", encoding="utf-8")
    if exported.get("code"):
        (directory / "pseudocode.c").write_text(source_text(exported["code"]), encoding="utf-8")
    else:
        # A prior decompilation must never masquerade as current output.
        (directory / "pseudocode.c").write_text("/* Current IDA decompilation unavailable. See function.json. */\n", encoding="utf-8")
    evidence = {"function": metadata, "folder": folder, "chunks": [[hx(a), hx(b)] for a,b,raw in chunks],
                "function_comment_regular": func_cmt, "function_comment_repeatable": func_rep,
                "address_comment_regular": cmt, "address_comment_repeatable": rep,
                "instruction_comments": instruction_comments}
    json_write(pass_root / "functions" / f"{start:X}.json", evidence)
    changes = {"ea": hx(start), "folder": folder, "before": previous, "after": metadata}
    index = {k: metadata[k] for k in ["start_ea", "end_ea", "name", "display_name", "size", "sha256", "has_pseudocode"]}
    index["folder"] = folder
    edges = [{"source": hx(start), "target": r["to_ea"], "site_ea": r["from_ea"], "xref_type": r["type"],
              "target_name": r["to_name"]} for r in outgoing if r["type"] != 21]
    return index, metadata, changes, edges


def export_type(ida, name):
    data = ida.py_eval(
        "[(t.get_named_type(ida_typeinf.get_idati(),n),t.get_ordinal(),t.get_size(), "
        "ida_typeinf.print_tinfo('',0,0,ida_typeinf.PRTYPE_MULTI|ida_typeinf.PRTYPE_TYPE|ida_typeinf.PRTYPE_DEF,t,n,''), "
        "[(m.name,m.offset,m.size,m.type.dstr()) for u in [ida_typeinf.udt_type_data_t()] "
        "if t.get_udt_details(u) for m in u]) for n in [" + repr(name) + "] for t in [ida_typeinf.tinfo_t()]]"
    )[0]
    ok, ordinal, size, declaration, members = data
    if not ok:
        raise RuntimeError(f"Missing selected type: {name}")
    return {"name": name, "ordinal": ordinal, "size": size if size < 2**32 else None,
            "declaration": declaration, "members": [
                {"name": n, "offset_bits": off, "size_bits": bits, "offset": off//8 if off%8 == 0 else off/8,
                 "size": bits//8 if bits%8 == 0 else bits/8, "type": typ} for n,off,bits,typ in members],
            "annotation_confidence": "Unknown", "confidence_scope": "Field interpretations are assessed individually in README.md; this record is a live IDA type snapshot."}


def export_data(ida, spec):
    ea = int(spec["ea"], 0) if "ea" in spec else ida.py_eval("idc.get_name_ea_simple(" + repr(spec["name"]) + ")")
    if ea in (None, -1, 0xFFFFFFFFFFFFFFFF):
        raise RuntimeError(f"Missing selected data: {spec}")
    data = ida.py_eval(
        "[(a,idc.get_name(a) or '',idc.get_item_size(a),idc.get_segm_name(a),idc.get_type(a) or '', "
        "idc.get_cmt(a,0) or '',idc.get_cmt(a,1) or '', "
        "[(x.frm,x.to,x.type,idc.get_func_name(x.frm) or '') for x in idautils.XrefsTo(a,0)]) for a in [" + str(ea) + "]]"
    )[0]
    _, name, size, segment, typ, cmt, rep, refs = data
    record = {"ea": hx(ea), "name": name, "display_name": name, "kind": "data", "size": size,
              "segment": segment, "type": typ, "comments": {"regular": cmt, "repeatable": rep},
              "xrefs_to_count": len(refs), "bytes_preview_hex": "", "bytes_sha256": "",
              "evidence_confidence": confidence(cmt + "\n" + rep)}
    xrefs = [{"from_ea": hx(a), "to_ea": hx(b), "type": t, "from_name": n} for a,b,t,n in refs]
    slots = []
    if spec.get("slots"):
        slots = ida.py_eval("[(o,hex(ida_bytes.get_dword(" + str(ea) + "+o)),idc.get_func_name(ida_bytes.get_dword(" + str(ea) + "+o)) or '') for o in range(0," + str(spec["slots"] * 4) + ",4)]")
    return record, xrefs, [{"offset": o, "target_ea": hx(int(target,16)), "target_name": name} for o,target,name in slots]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repository", type=Path, default=Path.cwd())
    parser.add_argument("--targets", type=Path, required=True)
    parser.add_argument("--endpoint", default="http://127.0.0.1:56185/mcp")
    parser.add_argument("--reuse-pseudocode", action="store_true",help="reuse this pass's already exported pseudocode when only metadata extraction changed")
    parser.add_argument("--skip-reference", action="store_true",help="retain the already exported Fallout reference bundle")
    args = parser.parse_args()
    repo = args.repository.resolve()
    config = json.loads(args.targets.read_text(encoding="utf-8"))
    pass_root = repo / config["output"]
    if not pass_root.is_relative_to(repo):
        raise RuntimeError("Pass output must stay within the repository")
    ida = IdaMcp(args.endpoint, 300)
    identity = ida.py_eval("(ida_nalt.get_root_filename(),ida_nalt.get_input_file_path(),ida_kernwin.get_kernel_version())")
    if identity[0].lower() != "oblivion.exe":
        raise RuntimeError(f"Wrong live database: {identity}")
    created = now()
    index_path = repo / "functions_index_by_ea.json"
    index_rows = json.loads(index_path.read_text(encoding="utf-8"))
    indexes = {int(r["start_ea"],16): r for r in index_rows}
    selected = select_functions(ida, config["function_patterns"])
    selected = sorted(set(selected + [int(x,0) for x in config.get("function_addresses",[])]))
    changes, edges, metadata = [], [], {}
    print(f"Live {identity[0]}: refreshing {len(selected)} selected functions", flush=True)
    for i, ea in enumerate(selected,1):
        index, meta, change, refs = export_function(ida,ea,repo,pass_root,indexes.get(ea),args.reuse_pseudocode)
        if config.get("baseline_commit"):
            historical = subprocess.run(["git","show",config["baseline_commit"]+":functions/"+index["folder"]+"/function.json"],
                                        cwd=repo,capture_output=True,text=True,encoding="utf-8")
            change["before"] = json.loads(historical.stdout) if historical.returncode == 0 else {}
        indexes[ea] = index
        metadata[ea] = meta
        changes.append(change)
        edges.extend(refs)
        print(f"{i}/{len(selected)} {hx(ea)} {meta['name']}", flush=True)
    json_write(index_path, [indexes[x] for x in sorted(indexes)])
    json_write(repo / "functions_index_by_name.json", sorted(indexes.values(),key=lambda r:(r.get("name",r.get("display_name","")),int(r["start_ea"],16))))
    # Merge only selected function records into the historical JSONL stream.
    for path in sorted((repo / "_jsonl" / "functions").glob("*.jsonl")):
        output = []
        for line in path.read_text(encoding="utf-8").splitlines():
            row = json.loads(line)
            ea = int(row.get("start_ea","0"),16)
            if ea in metadata:
                row.update(metadata[ea])
            output.append(json.dumps(row,ensure_ascii=False,sort_keys=True))
        path.write_text("\n".join(output)+"\n",encoding="utf-8")
    json_write(pass_root / "function_changes.json",changes)
    json_write(pass_root / "relationships.json",edges)
    lines = ["# Function inventory", "", "Names and confidence labels below are current IDA annotations. Unknown labels are unassessed, not verified interpretations.", "",
             "| Address | Current name | Confidence | Prior name |", "| --- | --- | --- | --- |"]
    for change in changes:
        meta = change["after"]
        name = meta["name"].replace('|','\\|')
        old_name = change["before"].get("name","").replace('|','\\|')
        lines.append(f"| [{meta['start_ea']}](../../functions/{change['folder']}/pseudocode.c) | `{name}` | {meta['evidence_confidence']} | `{old_name}` |")
    (pass_root / "function_index.md").write_text("\n".join(lines)+"\n",encoding="utf-8")
    for name in config["types"]:
        record = export_type(ida,name)
        directory = pass_root / "types" / safe_name(name)
        json_write(directory / "type.json",record)
        decl = record["declaration"].rstrip()
        (directory / "decl.c").write_text(decl + (";" if not decl.endswith(";") else "")+"\n",encoding="utf-8")
    for spec in config["data"]:
        record, refs, slots = export_data(ida,spec)
        directory = pass_root / "data" / record["ea"][2:]
        json_write(directory / "item.json",record)
        json_write(directory / "xrefs_to.json",refs)
        if slots:
            json_write(directory / "vtable.json",slots)
    reference = config.get("fallout_reference")
    if reference and args.skip_reference and not (pass_root / "fallout_reference" / "manifest.json").exists():
        raise RuntimeError("--skip-reference requires an existing Fallout reference bundle")
    if reference and not args.skip_reference:
        fallout = IdaMcp(reference["endpoint"],300)
        source = fallout.py_eval("(ida_nalt.get_root_filename(),ida_nalt.get_input_file_path(),ida_ida.inf_get_procname())")
        if source[0].lower() != "fallout.exe":
            raise RuntimeError(f"Wrong reference database: {source}")
        ref_root = pass_root / "fallout_reference"
        for ea in reference["functions"]:
            result = fallout.call("export_funcs",{"addrs":[ea],"format":"json"})["functions"][0]
            directory = ref_root / "functions" / ea[2:].upper()
            json_write(directory / "reference.json",result)
            (directory / "disasm.asm").write_text(source_text(result.get("asm","")),encoding="utf-8")
            (directory / "pseudocode.c").write_text(source_text(result.get("code","")),encoding="utf-8")
        for name in reference["types"]:
            record = export_type(fallout,name)
            directory = ref_root / "types" / safe_name(name)
            json_write(directory / "type.json",record)
            decl = record["declaration"].rstrip()
            (directory / "decl.c").write_text(decl + (";" if not decl.endswith(";") else "")+"\n",encoding="utf-8")
        json_write(ref_root / "manifest.json",{"database":source,"functions":reference["functions"],
                   "types":reference["types"],"homology_confidence":"Candidate",
                   "scope":"Reference evidence only. Similarity does not establish an Oblivion interpretation."})
    manifest = {"pass":"OctoberPass","created_at":created,"completed_at":now(),
                "baseline_commit":config.get("baseline_commit"),
                "database":{"filename":identity[0],"input_path":identity[1],"ida_version":identity[2]},
                "counts":{"functions":len(selected),"types":len(config['types']),"data_items":len(config['data']),"relationships":len(edges)},
                "scope":"Selected decoded subsystem; historical full-database graphs and type catalogs retain their original snapshot.",
                "sha256_source":"Primary function range, preserving legacy size/hash semantics; chunks_sha256 covers all IDA chunks in chunk order",
                "confidence_policy":{"Verified":"Strong Oblivion-side evidence", "Probable":"Multiple independent supporting indicators", "Candidate":"Plausible; confirmation pending", "Unknown":"Insufficient evidence; raw annotation or unresolved interpretation"}}
    json_write(pass_root / "manifest.json",manifest)
    base = json.loads((repo / "manifest.json").read_text(encoding="utf-8"))
    base.setdefault("analysis_passes",[])
    base["analysis_passes"] = [p for p in base["analysis_passes"] if p.get("name") != "OctoberPass"]
    base["analysis_passes"].append({"name":"OctoberPass","manifest":str((pass_root/"manifest.json").relative_to(repo)).replace('\\','/'),"completed_at":manifest["completed_at"]})
    json_write(repo / "manifest.json",base)
    print(json.dumps(manifest["counts"]),flush=True)


if __name__ == "__main__":
    main()
