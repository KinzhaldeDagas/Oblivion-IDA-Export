#!/usr/bin/env python3
"""Export an open IDA database into the repository's browsable JSON layout.

This client talks to the IDA MCP HTTP endpoint exposed by ida_multi_mcp. It does
not open, close, save, or otherwise manage the IDA process/database. Function
exports are checkpointed one batch at a time so interrupted runs can resume.
Only Python's standard library is required.
"""

from __future__ import annotations

import argparse
import ast
import datetime as dt
import hashlib
import http.client
import json
import os
import re
import sys
import time
from pathlib import Path
from typing import Any, Iterable
from urllib.parse import urlsplit

VERSION = "1.0.0"
JSONL_CHUNK_SIZE = 25_000


def now() -> str:
    return dt.datetime.now(dt.timezone.utc).isoformat()


def json_write(path: Path, value: Any) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    payload = json.dumps(value, ensure_ascii=False, indent=2, sort_keys=True) + "\n"
    tmp = path.with_suffix(path.suffix + ".tmp")
    tmp.write_text(payload, encoding="utf-8")
    tmp.replace(path)


def safe_name(value: str, fallback: str = "unnamed") -> str:
    value = re.sub(r"[^A-Za-z0-9_.$@+-]+", "_", value).strip("._")
    return value[:180] or fallback


def parse_json(value: Any) -> Any:
    if isinstance(value, (dict, list)):
        return value
    if isinstance(value, str):
        try:
            return json.loads(value)
        except json.JSONDecodeError:
            return value
    return value


class IdaMcp:
    def __init__(self, endpoint: str, timeout: int) -> None:
        parsed = urlsplit(endpoint)
        if parsed.scheme not in ("http", "https") or not parsed.hostname:
            raise ValueError("--endpoint must be an http(s) URL")
        self.host = parsed.hostname
        self.port = parsed.port or (443 if parsed.scheme == "https" else 80)
        self.path = parsed.path or "/mcp"
        self.https = parsed.scheme == "https"
        self.timeout = timeout
        self.request_id = 0

    def call(self, tool: str, arguments: dict[str, Any]) -> Any:
        self.request_id += 1
        body = json.dumps({
            "jsonrpc": "2.0", "method": "tools/call",
            "params": {"name": tool, "arguments": arguments},
            "id": self.request_id,
        }).encode("utf-8")
        conn_type = http.client.HTTPSConnection if self.https else http.client.HTTPConnection
        conn = conn_type(self.host, self.port, timeout=self.timeout)
        try:
            conn.request("POST", self.path, body=body, headers={
                "Content-Type": "application/json",
                "Accept": "application/json, text/event-stream",
            })
            response = conn.getresponse()
            raw = response.read().decode("utf-8", errors="replace")
            if response.status != 200:
                raise RuntimeError(f"IDA MCP HTTP {response.status}: {raw[:1000]}")
        finally:
            conn.close()
        envelope = json.loads(raw)
        if "error" in envelope:
            raise RuntimeError(f"IDA MCP error: {envelope['error']}")
        result = envelope.get("result", {})
        if result.get("isError"):
            blocks = result.get("content", [])
            detail = "\n".join(x.get("text", "") for x in blocks)
            raise RuntimeError(f"IDA tool {tool} failed: {detail[:2000]}")
        if "structuredContent" in result:
            return result["structuredContent"]
        return result

    def py_eval(self, expression: str) -> Any:
        result = self.call("py_eval", {"code": expression})
        if isinstance(result, dict) and "result" in result:
            if result.get("stderr"):
                raise RuntimeError(f"IDA py_eval failed: {result['stderr'][-1000:]}")
            result = result["result"]
        if isinstance(result, str):
            try:
                return ast.literal_eval(result)
            except (ValueError, SyntaxError):
                try:
                    return json.loads(result)
                except json.JSONDecodeError:
                    return result
        return result


def content_object(result: Any) -> Any:
    """Normalize tools whose JSON payload is wrapped in a text content block."""
    if isinstance(result, dict) and result.get("content"):
        for block in result["content"]:
            if block.get("type") == "text":
                return parse_json(block.get("text", ""))
    return result


def pages(ida: IdaMcp, tool: str, query_name: str, page_size: int,
          **extra: Any) -> list[dict[str, Any]]:
    out: list[dict[str, Any]] = []
    offset = 0
    while True:
        query = {"count": page_size, "offset": offset, **extra}
        result = ida.call(tool, {query_name: query})
        result = content_object(result)
        if isinstance(result, list):
            result = result[0] if result else {}
        rows = result.get("data", []) if isinstance(result, dict) else []
        out.extend(rows)
        if len(rows) < page_size:
            break
        offset = int(result.get("next_offset", offset + len(rows)))
    return out


def instruction_rows(ida: IdaMcp, addresses: list[int]) -> dict[int, list[dict[str, Any]]]:
    result: dict[int, list[dict[str, Any]]] = {}
    # Keep eval expressions compact; IDA's main thread is single threaded.
    for start in range(0, len(addresses), 30):
        chunk = addresses[start:start + 30]
        encoded = repr(chunk)
        expression = (
            "[(int(f), [(int(h), int(idc.get_item_size(h)), "
            "str(idc.print_insn_mnem(h)), [(int(x.frm), int(x.to), int(x.type)) "
            "for x in idautils.XrefsFrom(h, 0)]) for h in idautils.FuncItems(f)]) "
            f"for f in {encoded}]"
        )
        data = ida.py_eval(expression)
        for ea, items in data or []:
            result[int(ea)] = [
                {"ea": hex(head), "size": size, "mnemonic": mnemonic,
                 "xrefs": [{"from": hex(frm), "to": hex(to), "type": typ, "to_name": ""}
                           for frm, to, typ in refs]}
                for head, size, mnemonic, refs in items
            ]
    return result


def write_jsonl(root: Path, stream: str, rows: Iterable[dict[str, Any]]) -> int:
    directory = root / "_jsonl" / stream
    directory.mkdir(parents=True, exist_ok=True)
    count = 0
    chunk: list[str] = []
    chunk_no = 0
    for row in rows:
        chunk.append(json.dumps(row, ensure_ascii=False, separators=(",", ":")))
        count += 1
        if len(chunk) == JSONL_CHUNK_SIZE:
            (directory / f"{chunk_no:06d}.jsonl").write_text("\n".join(chunk) + "\n", encoding="utf-8")
            chunk.clear()
            chunk_no += 1
    if chunk or chunk_no == 0:
        (directory / f"{chunk_no:06d}.jsonl").write_text("\n".join(chunk) + ("\n" if chunk else ""), encoding="utf-8")
        chunk_no += 1
    # Stale chunks can survive a smaller resumed export; remove only numbered
    # JSONL files belonging to this stream and beyond the new output count.
    for stale in directory.glob("[0-9][0-9][0-9][0-9][0-9][0-9].jsonl"):
        try:
            if int(stale.stem) >= chunk_no:
                stale.unlink()
        except ValueError:
            pass
    return chunk_no


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--endpoint", default="http://127.0.0.1:56185/mcp")
    parser.add_argument("--output", type=Path, default=Path.cwd())
    parser.add_argument("--expected-binary", default="Oblivion.exe")
    parser.add_argument("--batch-size", type=int, default=12)
    parser.add_argument("--limit-functions", type=int, default=0,
                        help="export only the first N functions (smoke-check mode)")
    parser.add_argument("--timeout", type=int, default=300)
    parser.add_argument("--resume", action="store_true",
                        help="skip existing function folders with a matching name and size")
    parser.add_argument("--overwrite", action="store_true",
                        help="allow replacing an existing export manifest and output files")
    args = parser.parse_args()
    if not 1 <= args.batch_size <= 50:
        parser.error("--batch-size must be between 1 and 50")
    root = args.output.resolve()
    if (root / "manifest.json").exists() and not args.overwrite:
        parser.error("output already contains manifest.json; choose a fresh --output folder or pass --overwrite")
    root.mkdir(parents=True, exist_ok=True)
    ida = IdaMcp(args.endpoint, args.timeout)

    identity = ida.py_eval("(ida_nalt.get_root_filename(), ida_nalt.get_input_file_path(), ida_ida.inf_get_min_ea(), ida_ida.inf_get_max_ea(), ida_ida.inf_get_baseaddr(), ida_ida.inf_is_32bit_exactly(), ida_ida.inf_is_64bit(), ida_kernwin.get_kernel_version())")
    if not isinstance(identity, (tuple, list)) or len(identity) < 2:
        raise RuntimeError(f"Could not inspect active IDA database: {identity!r}")
    root_filename, input_path = str(identity[0]), str(identity[1])
    if args.expected_binary.lower() not in Path(input_path).name.lower() and args.expected_binary.lower() not in root_filename.lower():
        raise RuntimeError(f"Connected database is {root_filename!r} ({input_path!r}), expected {args.expected_binary!r}; no output written")
    print(f"Connected to {root_filename} at {input_path}; output: {root}", flush=True)

    funcs = pages(ida, "list_funcs", "queries", 500)
    if args.limit_functions:
        funcs = funcs[:args.limit_functions]
    funcs.sort(key=lambda f: int(str(f.get("addr", "0")), 16))
    prior_index_path = root / "functions_index_by_ea.json"
    try:
        prior_index = {row["start_ea"]: row for row in json.loads(prior_index_path.read_text(encoding="utf-8"))}
    except (OSError, ValueError, TypeError):
        prior_index = {}

    function_rows: list[dict[str, Any]] = []
    function_lookup: dict[int, dict[str, Any]] = {}
    for f in funcs:
        ea = int(str(f["addr"]), 16)
        size = int(str(f.get("size", "0")), 0)
        name = str(f.get("name") or f"sub_{ea:X}")
        end = ea + size
        folder = prior_index.get(hex(ea), {}).get("folder") or f"{safe_name(name)}__{ea:X}"
        row = {"start_ea": hex(ea), "end_ea": hex(end), "name": name,
               "display_name": name, "size": size, "folder": folder}
        function_rows.append(row)
        function_lookup[ea] = row

    total = len(function_rows)
    call_edges: list[dict[str, Any]] = []
    dataflow_edges: list[dict[str, Any]] = []
    prototypes: dict[str, dict[str, Any]] = {}
    for offset in range(0, total, args.batch_size):
        candidates = function_rows[offset:offset + args.batch_size]
        batch = []
        for row in candidates:
            existing = root / "functions" / row["folder"] / "function.json"
            if args.resume and existing.exists():
                try:
                    saved = json.loads(existing.read_text(encoding="utf-8"))
                    if saved.get("name") == row["name"] and saved.get("size") == row["size"]:
                        prototype = str(saved.get("type", "")).strip()
                        if prototype:
                            prototypes.setdefault(prototype, {"prototype": prototype})
                        for filename, edges, kind in (("callees.json", call_edges, "call"),
                                                      ("data_refs.json", dataflow_edges, "data_ref")):
                            edge_path = existing.parent / filename
                            try:
                                for ref in json.loads(edge_path.read_text(encoding="utf-8")):
                                    edges.append({"source": row["start_ea"], "target": ref["target_ea"],
                                                  "site_ea": ref["site_ea"], "kind": kind})
                            except (OSError, ValueError, KeyError):
                                pass
                        continue
                except (OSError, ValueError):
                    pass
            batch.append(row)
        if not batch:
            continue
        addresses = [row["start_ea"] for row in batch]
        meta_by_ea = instruction_rows(ida, [int(x, 16) for x in addresses])
        exported = ida.call("export_funcs", {"addrs": addresses, "format": "json"})
        exported = content_object(exported)
        exports = exported.get("functions", []) if isinstance(exported, dict) else []
        by_addr = {int(str(item.get("addr", "0")), 16): item for item in exports}
        for row in batch:
            ea = int(row["start_ea"], 16)
            item = by_addr.get(ea, {})
            folder = root / "functions" / row["folder"]
            inst = meta_by_ea.get(ea, [])
            incoming = item.get("xrefs", {}).get("to", [])
            outgoing = item.get("xrefs", {}).get("from", [])
            asm_lines = {}
            for line in str(item.get("asm", "")).splitlines():
                match = re.match(r"\s*([0-9A-Fa-f]+)\s+(.*)$", line)
                if match:
                    asm_lines[hex(int(match.group(1), 16))] = match.group(2)
            instructions = [{"ea": x["ea"], "line": asm_lines.get(x["ea"], x["mnemonic"]),
                             "mnemonic": x["mnemonic"], "size": x["size"]}
                            for x in inst]
            raw_xrefs = [{"from_ea": ref["from"], "to_ea": ref["to"],
                          "to_name": function_lookup.get(int(ref["to"], 16), {}).get("name", ""),
                          "type": ref["type"]}
                         for x in inst for ref in x["xrefs"]]
            caller_rows = [{"from_ea": str(x.get("addr", "")), "from_name": "",
                            "to_ea": row["start_ea"], "type": 17}
                           for x in incoming if x.get("type") == "code"]
            fn_json = {
                "name": row["name"], "display_name": row["display_name"],
                "start_ea": row["start_ea"], "end_ea": row["end_ea"],
                "size": row["size"], "type": item.get("prototype", ""),
                "comment_regular": "", "comment_repeatable": "",
                "xrefs_to_count": len(caller_rows), "xrefs_from_count": len(raw_xrefs),
                "callees_count": 0, "callers_count": len(caller_rows),
                "data_refs_count": sum(1 for ref in raw_xrefs if ref["type"] not in (16, 17, 18, 19, 20, 21)),
                "has_pseudocode": bool(item.get("code")),
            }
            json_write(folder / "function.json", fn_json)
            prototype = str(item.get("prototype", "")).strip()
            if prototype:
                prototypes.setdefault(prototype, {"prototype": prototype})
            (folder / "disasm.asm").write_text(str(item.get("asm", "")), encoding="utf-8")
            if item.get("code"):
                (folder / "pseudocode.c").write_text(str(item["code"]), encoding="utf-8")
            callee_rows = [{"site_ea": x["ea"], "target_ea": xref["to"],
                            "target_name": function_lookup[int(xref["to"], 16)]["name"],
                            "xref_type": xref["type"]}
                           for x in inst for xref in x["xrefs"]
                           if xref["type"] in (16, 17) and int(xref["to"], 16) in function_lookup]
            data_rows = [{"site_ea": x["ea"], "target_ea": xref["to"],
                          "target_name": function_lookup.get(int(xref["to"], 16), {}).get("name", ""),
                          "xref_type": xref["type"]}
                         for x in inst for xref in x["xrefs"] if xref["type"] not in (16, 17, 18, 19, 20, 21)]
            fn_json["callees_count"] = len(callee_rows)
            json_write(folder / "function.json", fn_json)
            json_write(folder / "instructions.json", instructions)
            call_edges.extend({"source": row["start_ea"], "target": ref["target_ea"],
                               "site_ea": ref["site_ea"], "kind": "call"}
                              for ref in callee_rows)
            dataflow_edges.extend({"source": row["start_ea"], "target": ref["target_ea"],
                                   "site_ea": ref["site_ea"], "kind": "data_ref"}
                                  for ref in data_rows)
            json_write(folder / "callers.json", caller_rows)
            json_write(folder / "callees.json", callee_rows)
            json_write(folder / "data_refs.json", data_rows)
            json_write(folder / "xrefs_to.json", caller_rows)
            json_write(folder / "xrefs_from.json", raw_xrefs)
        done = min(offset + len(batch), total)
        print(f"Functions {done:,}/{total:,}", flush=True)

    if not args.limit_functions:
        json_write(prior_index_path, [{"start_ea": row["start_ea"], "end_ea": row["end_ea"],
                                      "display_name": row["display_name"], "folder": row["folder"]}
                                     for row in function_rows])
        by_name: dict[str, list[dict[str, Any]]] = {}
        for row in function_rows:
            by_name.setdefault(row["name"], []).append({"start_ea": row["start_ea"], "folder": row["folder"]})
        json_write(root / "functions_index_by_name.json", by_name)

        # Program identity and segment inventory are read in one short IDAPython
        # expression, then written by this external client.
        program = ida.py_eval("{'root_filename': ida_nalt.get_root_filename(), 'input_file_path': ida_nalt.get_input_file_path(), 'min_ea': hex(ida_ida.inf_get_min_ea()), 'max_ea': hex(ida_ida.inf_get_max_ea()), 'imagebase': hex(ida_ida.inf_get_baseaddr()), 'bitness_32': bool(ida_ida.inf_is_32bit_exactly()), 'bitness_64': bool(ida_ida.inf_is_64bit()), 'processor': ida_ida.inf_get_procname(), 'kernel_version': ida_kernwin.get_kernel_version()}")
        json_write(root / "metadata" / "program.json", program)
        segments = ida.py_eval("[(ida_segment.get_segm_name(s), hex(s.start_ea), hex(s.end_ea), ida_segment.get_segm_class(s), s.perm) for s in idautils.Segments() for s in [ida_segment.getseg(s)] if s]")
        json_write(root / "metadata" / "segments.json", [{"name": n, "start_ea": a, "end_ea": b, "class": c, "permissions": p} for n, a, b, c, p in (segments or [])])

        # Export named globals without reading or exporting the underlying game
        # bytes. This preserves the source repository's privacy-conscious format.
        globals_ = pages(ida, "list_globals", "queries", 500)
        named_rows = []
        for g in globals_:
            addr = str(g.get("addr", "0x0"))
            ea = int(addr, 16)
            name = str(g.get("name") or f"unk_{ea:X}")
            item = {"name": name, "display_name": name, "ea": f"0x{ea:X}",
                    "size": g.get("size"), "type": g.get("type", ""),
                    "comment": g.get("comment", "")}
            folder = f"{safe_name(name)}__{ea:X}"
            directory = root / "data" / "named_items" / folder
            json_write(directory / "item.json", item)
            json_write(directory / "xrefs_to.json", [])
            named_rows.append(item)
        write_jsonl(root, "named_items", named_rows)

        imports = []
        for offset in range(0, 100_000, 500):
            result = content_object(ida.call("imports", {"offset": offset, "count": 500}))
            rows = result.get("imports", result.get("data", [])) if isinstance(result, dict) else []
            if not rows:
                break
            imports.extend(rows)
            if len(rows) < 500:
                break
        json_write(root / "metadata" / "imports.json", imports)

        # Local types are retrieved from IDA's existing type library. Structure
        # detail is preserved as C declarations so custom types remain portable.
        type_rows = ida.py_eval("[(o, ida_typeinf.idc_get_local_type(o, 0) or '') for o in range(1, ida_typeinf.get_ordinal_count(ida_typeinf.get_idati()) + 1)]")
        local_types = []
        typedefs = []
        structs = []
        for ordinal, declaration in type_rows or []:
            declaration = str(declaration).strip()
            if not declaration:
                continue
            name_match = re.search(r"(?:struct|union|enum)\s+([A-Za-z_][\w]*)|([A-Za-z_][\w]*)\s*;\s*$", declaration)
            name = next((x for x in name_match.groups() if x), f"type_{ordinal}") if name_match else f"type_{ordinal}"
            record = {"name": name, "ordinal": ordinal, "declaration": declaration}
            local_types.append(record)
            if re.match(r"^(typedef|using)\b", declaration):
                typedefs.append(record)
                folder = f"{safe_name(name)}__{ordinal}"
                (root / "types" / "typedefs" / folder).mkdir(parents=True, exist_ok=True)
                (root / "types" / "typedefs" / folder / "decl.c").write_text(declaration + "\n", encoding="utf-8")
                json_write(root / "types" / "typedefs" / folder / "type.json", record)
            elif re.match(r"^(struct|union)\b", declaration):
                structs.append(record)
                folder = f"{safe_name(name)}__{ordinal}"
                (root / "types" / "structs" / folder).mkdir(parents=True, exist_ok=True)
                (root / "types" / "structs" / folder / "decl.c").write_text(declaration + "\n", encoding="utf-8")
                json_write(root / "types" / "structs" / folder / "struct.json", record)
        write_jsonl(root, "local_types", local_types)
        write_jsonl(root, "typedefs", typedefs)
        write_jsonl(root, "structs", structs)

        graph_nodes = [{"id": row["start_ea"], "name": row["name"], "kind": "function"} for row in function_rows]
        known_functions = {row["start_ea"] for row in function_rows}
        call_edges = [edge for edge in call_edges
                      if hex(int(edge["target"], 16)) in known_functions]
        for edge in call_edges:
            edge["target"] = hex(int(edge["target"], 16))
        write_jsonl(root, "graph_symbol_nodes", graph_nodes)
        write_jsonl(root, "graph_call_edges", call_edges)
        write_jsonl(root, "graph_dataflow_edges", dataflow_edges)
        json_write(root / "graphs" / "symbol_graph.json", {"nodes": graph_nodes, "edges": call_edges + dataflow_edges})
        json_write(root / "graphs" / "callgraph.json", {"nodes": graph_nodes, "edges": call_edges})
        json_write(root / "graphs" / "dataflow.json", {"nodes": graph_nodes, "edges": dataflow_edges})
        for ordinal, (prototype, record) in enumerate(sorted(prototypes.items()), 1):
            record["ordinal"] = ordinal
            folder = f"prototype_{ordinal:04d}"
            directory = root / "types" / "function_prototypes" / folder
            directory.mkdir(parents=True, exist_ok=True)
            (directory / "decl.c").write_text(prototype + ";\n", encoding="utf-8")
            json_write(directory / "type.json", record)
        write_jsonl(root, "function_prototypes", list(prototypes.values()))
        overview = ("# Oblivion IDA Export\n\n"
                    f"Generated from `{root_filename}` at `{input_path}` on {now()}.\n\n"
                    f"Functions exported: {len(function_rows):,}. Named items: {len(named_rows):,}. "
                    f"Local types: {len(local_types):,}.\n")
        (root / "markdown" / "overview.md").parent.mkdir(parents=True, exist_ok=True)
        (root / "markdown" / "overview.md").write_text(overview, encoding="utf-8")
        manifest = {
            "created_at": now(), "completed_at": now(),
            "exporter": {"name": "ida_repo_exporter_9x", "version": VERSION},
            "database": {"program": program},
            "config": {"selected_profile": "massive", "export_pseudocode": True,
                       "emit_chunked_jsonl": True, "jsonl_chunk_size": JSONL_CHUNK_SIZE,
                       "export_bytes_bin": False, "export_bytes_json": False,
                       "wait_for_autoanalysis": False, "resume_enabled": True,
                       "output_root": str(root)},
            "outputs": {"root": str(root)},
            "stages": {"functions": {"status": "completed", "completed_at": now(), "stats": {"functions": len(function_rows)}},
                       "named_items": {"status": "completed", "completed_at": now(), "stats": {"named_items": len(named_rows)}},
                       "types": {"status": "completed", "completed_at": now(), "stats": {"local_types": len(local_types), "typedefs": len(typedefs), "structs": len(structs)}}},
        }
        json_write(root / "manifest.json", manifest)
    print(f"Export complete: {total:,} functions", flush=True)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except KeyboardInterrupt:
        print("Interrupted; completed function batches remain on disk and can be resumed.", file=sys.stderr)
        raise SystemExit(130)
    except Exception as exc:
        print(f"export failed: {exc}", file=sys.stderr)
        raise SystemExit(1)
