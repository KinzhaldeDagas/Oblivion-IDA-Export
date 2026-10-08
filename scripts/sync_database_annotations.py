#!/usr/bin/env python3
"""Audit and publish live IDA annotation deltas on OctoberPass.

Read-only IDA extraction in bounded batches. Interpretation confidence is never
inferred from a symbol name or a matching external symbol. Raw unlabelled
annotations remain Unknown. The audit inventories the entire current function,
named-item, and local-type populations before selecting canonical refreshes.
"""
from __future__ import annotations

import argparse
import io
import json
import re
import subprocess
from pathlib import Path

from ida_repo_exporter import IdaMcp, ensure_writable, text_write, json_write, now, pages, safe_name
from export_analysis_pass import confidence, export_data, data_details, export_function, function_details, hx, source_text


def read_json(path, default=None):
    return json.loads(path.read_text(encoding="utf-8")) if path.exists() else default


def stream_write(root, name, records, chunk_size=1000):
    directory = root / name
    directory.mkdir(parents=True, exist_ok=True)
    for offset in range(0,len(records),chunk_size):
        path = directory / f"{offset//chunk_size:06d}.jsonl"
        text_write(path,"".join(json.dumps(r,ensure_ascii=False,sort_keys=True)+"\n" for r in records[offset:offset+chunk_size]))
    count=max(1,(len(records)+chunk_size-1)//chunk_size)
    if not records:
        text_write(directory/'000000.jsonl','')
    for path in directory.glob('[0-9][0-9][0-9][0-9][0-9][0-9].jsonl'):
        if int(path.stem)>=count:
            ensure_writable(path)
            path.unlink()


def stream_read(directory):
    for path in sorted(directory.glob("*.jsonl")):
        for line in path.read_text(encoding="utf-8").splitlines():
            if line:
                yield json.loads(line)


def compact_json_write(path,value):
    path.parent.mkdir(parents=True,exist_ok=True)
    temporary=path.with_suffix(path.suffix+'.tmp')
    text_write(temporary,json.dumps(value,ensure_ascii=False,sort_keys=True,separators=(',',':'))+'\n')
    ensure_writable(path)
    temporary.replace(path)


def function_inventory(ida, addresses):
    # FuncItems includes tails; comments are preserved independently of
    # decompiler display and therefore retain complete multiline annotations.
    expression = (
        "[(a,idc.get_func_name(a),idc.get_type(a) or '',ida_funcs.get_func(a).end_ea, "
        "ida_funcs.get_func(a).flags,ida_funcs.get_func_cmt(ida_funcs.get_func(a),False) or '', "
        "ida_funcs.get_func_cmt(ida_funcs.get_func(a),True) or '',idc.get_cmt(a,0) or '',idc.get_cmt(a,1) or '', "
        "[(h,idc.get_cmt(h,0) or '',idc.get_cmt(h,1) or '') for h in idautils.FuncItems(a) "
        "if idc.get_cmt(h,0) or idc.get_cmt(h,1)], "
        "[(bool(ida_hexrays.restore_user_lvar_settings(v,a)),v.stkoff_delta,v.ulv_flags, "
        "[(l.name,l.type.dstr(),l.cmt,l.size,l.flags,l.ll.defea,l.ll.get_stkoff(), "
        "l.ll.get_reg1() if l.ll.is_reg_var() else None) for l in v.lvvec]) "
        "for v in [ida_hexrays.lvar_uservec_t()]]) for a in " + repr(addresses) + "]"
    )
    rows = ida.py_eval(expression)
    cmts = ida.py_eval(
        "[(a,[(k.ea,k.itp,str(v)) for k,v in c.items()],ida_hexrays.user_cmts_t.__swig_destroy__(c)) "
        "for a in " + repr(addresses) + " for c in [ida_hexrays.restore_user_cmts(a)] if c]"
    )
    ctree = {a:items for a,items,_ in cmts}
    for a,name,typ,end,flags,fc,fr,ac,ar,comments,settings in rows:
        restored,delta,uvflags,lvars = settings[0]
        combined = "\n".join([fc,fr,ac,ar])
        yield {"ea":hx(a),"name":name,"type":typ,"end_ea":hx(end),"flags":flags,
               "function_comment_regular":fc,"function_comment_repeatable":fr,
               "address_comment_regular":ac,"address_comment_repeatable":ar,
               "instruction_comments":[{"ea":hx(h),"regular":c,"repeatable":r,"confidence":confidence(c+"\n"+r)} for h,c,r in comments],
               "ctree_comments":[{"ea":hx(h),"placement":itp,"comment":c,"confidence":confidence(c)} for h,itp,c in ctree.get(a,[])],
               "saved_lvars":{"present":restored,"stack_offset_delta":delta,"flags":uvflags,"variables":[
                   {"name":n,"type":t,"comment":c,"size":s,"flags":f,"definition_ea":hx(e),"stack_offset":stk,"register":reg}
                   for n,t,c,s,f,e,stk,reg in lvars]},
               "evidence_confidence":confidence(combined)}


def audit(ida,repo,out,resume=False):
    if not resume and next((out/'.checkpoints').glob('*/*.json'),None) is not None:
        raise RuntimeError('A checkpointed snapshot already exists. Finish its phases, or archive/remove its ignored .checkpoints directory before starting a new source audit.')
    started = now()
    if not resume:
        json_write(out/'audit_context.json',{'created_at':started,'baseline_commit':subprocess.check_output(['git','rev-parse','HEAD'],cwd=repo,text=True).strip()})
    index = {int(r["start_ea"],16):r for r in read_json(repo/"functions_index_by_ea.json",[])}
    live = pages(ida,"list_funcs","queries",500)
    addresses = sorted(int(r["addr"],16) for r in live)
    all_functions, work = [], []
    positions=range(0,len(addresses),48)
    if resume:
        all_functions=list(stream_read(out/'functions'))
        work=read_json(out/'function_worklist.json')
        if len(all_functions)!=len(addresses) or {int(x['ea'],16) for x in all_functions}!=set(addresses):
            raise RuntimeError('Saved function inventory is incomplete or no longer matches live function starts')
        positions=[]
        print(f'Reusing complete {len(all_functions)}-function annotation inventory',flush=True)
    for offset in positions:
        batch = list(function_inventory(ida,addresses[offset:offset+48]))
        for row in batch:
            ea = int(row["ea"],16); prior_index = index.get(ea)
            directory = repo/"functions"/prior_index["folder"] if prior_index else None
            previous = read_json(directory/"function.json",{}) if directory else {}
            reasons = [k for k in ["name","type","end_ea","flags"] if row[k]!=previous.get(k)]
            prior_comments = previous.get("comment_regular","")+"\n"+previous.get("comment_repeatable","")
            if any(row[k] and row[k] not in prior_comments for k in ["function_comment_regular","function_comment_repeatable","address_comment_regular","address_comment_repeatable"]):
                reasons.append("function_or_address_comment")
            substantial = [c for x in row["instruction_comments"] for c in [x["regular"],x["repeatable"]] if len(c)>=40]
            substantial += [x["comment"] for x in row["ctree_comments"] if x["comment"]]
            lvars = row["saved_lvars"]["variables"]
            if substantial or lvars:
                pseudo_path = directory/"pseudocode.c" if directory else None
                pseudo = pseudo_path.read_text(encoding="utf-8") if pseudo_path and pseudo_path.exists() else ""
                if any(c not in pseudo for c in substantial):
                    reasons.append("instruction_or_ctree_comment")
                if any((v["name"] and v["name"] not in pseudo) or (v["comment"] and v["comment"] not in pseudo) for v in lvars):
                    reasons.append("saved_local_annotation")
            if not previous:
                reasons.append("new_function_start")
            if reasons:
                work.append({"ea":row["ea"],"name":row["name"],"reasons":reasons,"confidence":row["evidence_confidence"],"previous":previous})
            all_functions.append(row)
        if offset%480==0 or offset+48>=len(addresses):
            print(f"Function inventory {min(offset+48,len(addresses))}/{len(addresses)}; refresh candidates {len(work)}",flush=True)
    stream_write(out,"functions",all_functions)
    json_write(out/"function_worklist.json",work)
    live_starts=set(addresses)
    retired = [r for ea,r in index.items() if ea not in live_starts]
    json_write(out/"historical_function_starts.json",retired)

    old_named = {}
    for path in (repo/"data/named_items").glob("*/item.json"):
        row=read_json(path)
        old_named[int(row["ea"],16)]={"record":row,"folder":path.parent.name}
    globals_ = pages(ida,"list_globals","queries",500)
    global_addresses=sorted({int(x["addr"],16) for x in globals_})
    data_rows, data_work = [], []
    for offset in range(0,len(global_addresses),200):
        chunk=global_addresses[offset:offset+200]
        raw=ida.py_eval("[(a,idc.get_name(a) or '',idc.get_item_size(a),idc.get_segm_name(a),idc.get_type(a) or '',idc.get_cmt(a,0) or '',idc.get_cmt(a,1) or '',bool(ida_bytes.is_code(ida_bytes.get_full_flags(a)))) for a in "+repr(chunk)+"]")
        for a,n,s,seg,t,c,r,is_code in raw:
            row={"ea":hx(a),"name":n,"size":s,"segment":seg,"type":t,"comments":{"regular":c,"repeatable":r},"kind":"code" if is_code else "data","evidence_confidence":confidence(c+"\n"+r)}
            data_rows.append(row); prior=old_named.get(a,{})
            if any(row[k]!=prior.get("record",{}).get(k) for k in ["name","size","segment","type","comments"]):
                data_work.append({"ea":row["ea"],"name":n,"previous":prior.get("record",{}),"folder":prior.get("folder"),"confidence":row["evidence_confidence"]})
        if offset%2000==0:
            print(f"Named-item inventory {min(offset+200,len(global_addresses))}/{len(global_addresses)}; refresh candidates {len(data_work)}",flush=True)
    stream_write(out,"named_items",data_rows,5000)
    json_write(out/"data_worklist.json",data_work)

    limit=ida.py_eval("ida_typeinf.get_ordinal_count(ida_typeinf.get_idati())")
    types=[]
    for offset in range(1,limit+1,100):
        chunk=list(range(offset,min(offset+100,limit+1)))
        raw=ida.py_eval(
            "[(o,t.get_type_name() or '',t.dstr(),t.get_size(), "
            "ida_typeinf.print_tinfo('',0,0,ida_typeinf.PRTYPE_MULTI|ida_typeinf.PRTYPE_TYPE|ida_typeinf.PRTYPE_DEF,t,t.get_type_name() or '', ''), "
            "[(m.name,m.offset,m.size,m.type.dstr(),m.cmt) for u in [ida_typeinf.udt_type_data_t()] if t.get_udt_details(u) for m in u], "
            "[(e.name,e.value,e.cmt) for en in [ida_typeinf.enum_type_data_t()] if t.get_enum_details(en) for e in en]) "
            "for o in "+repr(chunk)+" for t in [ida_typeinf.tinfo_t()] if t.get_numbered_type(ida_typeinf.get_idati(),o)]")
        for o,n,decl,size,full,members,enums in raw:
            types.append({"ordinal":o,"name":n,"decl":decl,"size":size if size<2**32 else None,"definition":full,
                          "members":[{"name":n,"offset_bits":b,"size_bits":s,"type":t,"comment":c} for n,b,s,t,c in members],
                          "enumerators":[{"name":n,"value":v,"comment":c} for n,v,c in enums],"annotation_confidence":"Unknown"})
        if offset%1000==1:
            print(f"Local-type inventory through ordinal {min(offset+99,limit)}/{limit}",flush=True)
    stream_write(out,"local_types",types,1000)
    finalize_inventory(repo,out,started)


def finalize_inventory(repo,out,started=None):
    all_functions=list(stream_read(out/'functions'))
    work=read_json(out/'function_worklist.json')
    data_rows=list(stream_read(out/'named_items'))
    data_work=read_json(out/'data_worklist.json')
    types=list(stream_read(out/'local_types'))
    retired=read_json(out/'historical_function_starts.json')
    old_types={}
    for path in (repo/"types/local_types").glob("*/type.json"):
        row=read_json(path); old_types[row["name"]]=row
    type_changes=[]
    for row in types:
        prior=old_types.get(row["name"])
        normalized=lambda xs:[(x.get('name'),x.get('offset_bits'),x.get('size_bits'),x.get('type'),x.get('value')) for x in xs]
        current_members=row['enumerators'] if prior and prior.get('kind')=='enum' else row['members']
        if prior is None or prior.get("decl")!=row["decl"] or normalized(prior.get("members",[]))!=normalized(current_members) or any(m["comment"] for m in row["members"]):
            type_changes.append({"ordinal":row["ordinal"],"name":row["name"],"new_name":prior is None,"annotation_confidence":"Unknown"})
    json_write(out/"type_changes.json",type_changes)
    context=read_json(out/'audit_context.json',{})
    manifest={"created_at":started or context.get('created_at') or now(),"completed_at":now(),"baseline_commit":context.get('baseline_commit') or subprocess.check_output(['git','rev-parse','HEAD'],cwd=repo,text=True).strip(),"database":"Oblivion.exe","scope":"Whole live annotation inventory; labelled comments retain their source confidence. Unlabelled symbol/type/member interpretations are Unknown.",
              "counts":{"functions":len(all_functions),"function_refresh_candidates":len(work),"historical_function_starts":len(retired),"named_items":len(data_rows),"named_item_refresh_candidates":len(data_work),"local_types":len(types),"type_change_candidates":len(type_changes),"instruction_comment_records":sum(len(x['instruction_comments']) for x in all_functions),"ctree_comment_records":sum(len(x['ctree_comments']) for x in all_functions),"saved_local_variables":sum(len(x['saved_lvars']['variables']) for x in all_functions)}}
    json_write(out/"inventory_manifest.json",manifest)
    print(json.dumps(manifest["counts"]),flush=True)


def export_functions(ida,repo,out,complete=False):
    delta=read_json(out/"function_worklist.json")
    by_ea={int(x['ea'],16):x for x in delta}
    population=list(stream_read(out/'functions'))
    live={int(x['ea'],16) for x in population}
    work=[by_ea.get(int(x['ea'],16),{'ea':x['ea'],'name':x['name'],'reasons':['complete_snapshot_refresh']}) for x in population] if complete else delta
    index={int(x["start_ea"],16):x for x in read_json(repo/"functions_index_by_ea.json")}
    checkpoint=out/'.checkpoints/functions'
    existing=[read_json(path) for path in checkpoint.glob('*.json')]
    changes={int(x["ea"],16):x for x in existing}
    focused={int(path.stem,16) for path in (out.parent/'functions').glob('*.json')}
    for ea,change in changes.items():
        meta=change['after']
        index[ea]={k:meta[k] for k in ['start_ea','end_ea','name','display_name','size','sha256','has_pseudocode']}
        index[ea]['folder']=change['folder']
    detail_cache, export_cache = {}, {}
    for i,target in enumerate(work,1):
        ea=int(target["ea"],16)
        if ea in changes:
            continue
        if ea not in detail_cache:
            block=[int(x['ea'],16) for x in work[i-1:i+7] if int(x['ea'],16) not in changes]
            exported=ida.call('export_funcs',{'addrs':[hx(a) for a in block],'format':'json'})['functions']
            export_cache={int(row['addr'],16):row for row in exported}
            # Decompilation can refine types/flags; capture metadata afterward.
            detail_cache={row[0]:row for row in function_details(ida,block,include_instruction_comments=False)}
        idx,meta,change,edges=export_function(ida,ea,repo,out,index.get(ea),write_evidence=False,detail=detail_cache.pop(ea),exported=export_cache.pop(ea))
        meta['source_annotation_confidence']=meta['evidence_confidence']
        if ea not in focused:
            meta['evidence_confidence']='Unknown'
        meta['confidence_scope']='Bulk synchronization preserves source annotations; it does not independently verify their semantic claims. Established focused conclusions are documented in Findings/OctoberPass/README.md.'
        json_write(repo/'functions'/idx['folder']/'function.json',meta)
        if 'previous' in target:
            change["before"]=target["previous"]
        change["audit_reasons"]=target["reasons"]
        index[ea]=idx; changes[ea]=change
        json_write(checkpoint/f'{ea:X}.json',change)
        if i%25==0 or i==len(work):
            print(f"Function refresh {i}/{len(work)} {meta['name']}",flush=True)
    stream_write(out/'changes','functions',[changes[x] for x in sorted(changes)],1000)
    index={ea:row for ea,row in index.items() if ea in live}
    json_write(repo/"functions_index_by_ea.json",[index[x] for x in sorted(index)])
    json_write(repo/"functions_index_by_name.json",sorted(index.values(),key=lambda x:(x.get('name',x.get('display_name','')),int(x['start_ea'],16))))
    records={int(x['start_ea'],16):x for x in stream_read(repo/'_jsonl/functions') if int(x['start_ea'],16) in live}
    for ea,change in changes.items():
        records.setdefault(ea,{}).update(change['after']); records[ea]['folder']=change['folder']
    stream_write(repo/'_jsonl','functions',[records[x] for x in sorted(records)],25000)
    json_write(out/'function_export_complete.json',{'completed_at':now(),'functions':len(changes),'expected':len(work),'complete_population':complete})


def export_named_items(ida,repo,out,complete=False):
    delta=read_json(out/'data_worklist.json')
    inventory={int(x['ea'],16):x for x in stream_read(out/'named_items')}
    index_path=repo/'data/named_items/_index.json'
    old_index={int(x['ea'],16):x for x in read_json(index_path,[])}
    baseline_records={int(x['ea'],16):x for x in stream_read(repo/'_jsonl/named_items')}
    delta_by_ea={int(x['ea'],16):x for x in delta}
    work=[]
    for ea,row in sorted(inventory.items()):
        if not complete and ea not in delta_by_ea: continue
        target=delta_by_ea.get(ea)
        if target is None:
            folder=old_index.get(ea,{}).get('folder')
            prior=baseline_records.get(ea,{})
            target={'ea':hx(ea),'name':row['name'],'previous':prior,'folder':folder}
        work.append(target)
    checkpoint=out/'.checkpoints/data'
    saved=[read_json(path) for path in checkpoint.glob('*.json')]
    changes={int(x['ea'],16):x for x in saved}
    focused={int(path.name,16) for path in (out.parent/'data').iterdir() if path.is_dir()}
    details_cache={}
    for i,target in enumerate(work,1):
        ea=int(target['ea'],16)
        if ea in changes: continue
        if ea not in details_cache:
            block=[int(x['ea'],16) for x in work[i-1:i+15] if int(x['ea'],16) not in changes]
            details_cache={row[0]:row for row in data_details(ida,block)}
        record,xrefs,_=export_data(ida,{'ea':target['ea']},detail=details_cache.pop(ea))
        record['kind']=inventory[ea]['kind']
        record['source_annotation_confidence']=record['evidence_confidence']
        if ea not in focused:
            record['evidence_confidence']='Unknown'
        record['confidence_scope']='Raw live IDA annotation; bulk synchronization does not independently verify semantic names or comments.'
        if record['name']==target['previous'].get('name'):
            record['display_name']=target['previous'].get('display_name',record['name'])
        folder=target['folder'] or f"{safe_name(record['name'])[:120]}__{ea:X}"
        directory=repo/'data/named_items'/folder
        json_write(directory/'item.json',record); json_write(directory/'xrefs_to.json',xrefs)
        changes[ea]={'ea':hx(ea),'folder':folder,'before':target['previous'],'after':record}
        json_write(checkpoint/f'{ea:X}.json',changes[ea])
        if i%100==0 or i==len(work):
            print(f'Named-item refresh {i}/{len(work)}',flush=True)
    stream_write(out/'changes','named_items',[changes[x] for x in sorted(changes)],1000)
    updates={int(x['ea'],16):x['after'] for x in changes.values()}; rows=[]; seen=set()
    for row in stream_read(repo/'_jsonl/named_items'):
        ea=int(row['ea'],16)
        if ea not in inventory: continue
        if ea in updates: row.update(updates[ea]); seen.add(ea)
        rows.append(row)
    rows += [updates[ea] for ea in sorted(set(updates)-seen)]
    stream_write(repo/'_jsonl','named_items',rows,25000)
    json_write(out/'historical_named_items.json',[row for ea,row in old_index.items() if ea not in inventory])
    index={ea:row for ea,row in old_index.items() if ea in inventory}
    for ea,change in changes.items():
        row=change['after']; index[ea]={k:row[k] for k in ['display_name','ea','kind','name','size']}
        index[ea]['folder']=change['folder']
    json_write(index_path,[index[ea] for ea in sorted(index)])
    json_write(out/'data_export_complete.json',{'completed_at':now(),'named_items':len(changes),'expected':len(work),'complete_population':complete})


def normalize_archive_confidence(out):
    for category in ['functions','named_items']:
        for path in (out/category).glob('*.jsonl'):
            records=[]
            for line in path.read_text(encoding='utf-8').splitlines():
                row=json.loads(line)
                row.setdefault('source_annotation_confidence',row.get('evidence_confidence','Unknown'))
                row['evidence_confidence']='Unknown'
                for key in ['instruction_comments','ctree_comments']:
                    for annotation in row.get(key,[]):
                        annotation.setdefault('source_annotation_confidence',annotation.pop('confidence','Unknown'))
                        annotation['evidence_confidence']='Unknown'
                records.append(row)
            path.write_text(''.join(json.dumps(r,ensure_ascii=False,sort_keys=True)+'\n' for r in records),encoding='utf-8')
    for filename in ['function_worklist.json','data_worklist.json']:
        records=read_json(out/filename)
        for row in records:
            row.setdefault('source_annotation_confidence',row.get('confidence','Unknown'))
            row['confidence']='Unknown'
        json_write(out/filename,records)
    manifest=read_json(out/'inventory_manifest.json')
    manifest['confidence_scope']='Whole-database raw annotation archive. Source confidence labels are retained separately; new semantic assessment is Unknown unless supported by the focused report. No naming similarity is promoted.'
    json_write(out/'inventory_manifest.json',manifest)


def audit_frames(ida,repo,out):
    addresses=[int(x['ea'],16) for x in stream_read(out/'functions')]
    index={int(x['start_ea'],16):x for x in read_json(repo/'functions_index_by_ea.json')}
    work={int(x['ea'],16):x for x in read_json(out/'function_worklist.json')}
    frames=[]; additions=0
    for offset in range(0,len(addresses),128):
        raw=ida.py_eval(
            "[(a,ida_frame.get_func_frame(t,ida_funcs.get_func(a)),t.get_size(), "
            "[(m.name,m.offset,m.size,m.type.dstr(),m.cmt) for u in [ida_typeinf.udt_type_data_t()] if t.get_udt_details(u) for m in u], "
            "[(k.defea,k.get_stkoff(),k.get_reg1() if k.is_reg_var() else None,v.defea,v.get_stkoff(),v.get_reg1() if v.is_reg_var() else None, "
            "state.__setitem__(0,ida_hexrays.lvar_mapping_next(state[0]))) "
            "for lv in [ida_hexrays.lvar_uservec_t()] if ida_hexrays.restore_user_lvar_settings(lv,a) "
            "for state in [[ida_hexrays.lvar_mapping_begin(lv.lmaps)]] for step in range(lv.lmaps.size()) "
            "for k in [ida_hexrays.lvar_mapping_first(state[0])] for v in [ida_hexrays.lvar_mapping_second(state[0])]]) "
            "for a in "+repr(addresses[offset:offset+128])+" for t in [ida_typeinf.tinfo_t()]]")
        for ea,present,size,members,mappings in raw:
            row={'ea':hx(ea),'frame_present':present,'size':size if size<2**32 else None,
                 'members':[{'name':n,'offset_bits':o,'size_bits':s,'type':t,'comment':c} for n,o,s,t,c in members],
                 'local_variable_mappings':[x[:-1] for x in mappings],'annotation_confidence':'Unknown'}
            frames.append(row)
            if ea not in work and present:
                prior_index=index.get(ea)
                directory=repo/'functions'/prior_index['folder'] if prior_index else None
                path=directory/'pseudocode.c' if directory else None
                text=path.read_text(encoding='utf-8') if path and path.exists() else ''
                custom=[m for m in row['members'] if not re.match(r'^(var_|arg_|__|field_)',m['name'])]
                if any(m['name'] and m['name'] not in text or m['comment'] and m['comment'] not in text for m in custom):
                    previous=read_json(directory/'function.json',{}) if directory else {}
                    work[ea]={'ea':hx(ea),'name':ida.py_eval('idc.get_func_name('+str(ea)+')'),
                              'reasons':['stack_frame_annotation'],'confidence':'Unknown','previous':previous}
                    additions+=1
        if offset%1280==0 or offset+128>=len(addresses):
            print(f'Stack-frame inventory {min(offset+128,len(addresses))}/{len(addresses)}; additional refresh candidates {additions}',flush=True)
    stream_write(out,'stack_frames',frames,1000)
    json_write(out/'function_worklist.json',[work[x] for x in sorted(work)])
    manifest=read_json(out/'inventory_manifest.json')
    manifest['counts']['stack_frame_records']=len(frames)
    manifest['counts']['stack_frames_present']=sum(x['frame_present'] for x in frames)
    manifest['counts']['function_refresh_candidates']=len(work)
    manifest['counts']['local_variable_mappings']=sum(len(x['local_variable_mappings']) for x in frames)
    json_write(out/'inventory_manifest.json',manifest)


def export_types(ida,repo,out,selected_ordinals=None):
    all_types=list(stream_read(out/'local_types'))
    types=all_types if selected_ordinals is None else [r for r in all_types if r['ordinal'] in selected_ordinals]
    properties={}
    propnames=['is_array','is_decl_typedef','is_enum','is_func','is_ptr','is_scalar','is_struct','is_union','is_void']
    for offset in range(0,len(types),128):
        ordinals=[r['ordinal'] for r in types[offset:offset+128]]
        expression="[(o,t.get_tid(),["+','.join('bool(t.'+n+'())' for n in propnames)+"]) for o in "+repr(ordinals)+" for t in [ida_typeinf.tinfo_t()] if t.get_numbered_type(ida_typeinf.get_idati(),o)]"
        for ordinal,tid,flags in ida.py_eval(expression):
            properties[ordinal]={'tid':tid if tid<2**64-1 else None,'properties':dict(zip(propnames,flags))}
    categories=['local_types','typedefs','structs','enums','function_prototypes']
    old={cat:{r['name']:r for r in read_json(repo/'types'/cat/'_index.json',[])} for cat in categories}
    indexes={cat:[] for cat in categories}; streams={cat:[] for cat in categories}
    if selected_ordinals is not None:
        for cat in categories:
            streams[cat]=[r for r in stream_read(repo/'_jsonl'/cat) if r['ordinal'] not in selected_ordinals]
            retained={r['name'] for r in streams[cat]}
            indexes[cat]=[r for r in old[cat].values() if r['name'] in retained]
    for i,row in enumerate(types,1):
        name=row['name']; ordinal=row['ordinal']; props=properties[ordinal]['properties']; tid=properties[ordinal]['tid']
        kind=next((label for flag,label in [('is_enum','enum'),('is_union','union'),('is_struct','struct'),('is_func','function'),('is_ptr','pointer'),('is_array','array'),('is_void','void'),('is_scalar','scalar')] if props[flag]),'other')
        members=[{'name':m['name'],'offset_bits':m['offset_bits'],'offset_bytes':m['offset_bits']/8 if m['offset_bits']%8 else m['offset_bits']//8,
                  'size_bits':m['size_bits'],'type':m['type'],'comment':m['comment'],'annotation_confidence':'Unknown'} for m in row['members']]
        if props['is_enum']:
            members=[{'name':m['name'],'value':m['value'],'comment':m['comment'],'annotation_confidence':'Unknown'} for m in row['enumerators']]
        record={'name':name,'ordinal':ordinal,'decl':row['decl'],'definition':row['definition'],'kind':kind,'properties':props,
                'members':members,'size':row['size'],'annotation_confidence':'Unknown','analysis_pass':'OctoberPass',
                'confidence_scope':'Live IDA type annotations; field semantics require the evidence assessed in the findings report.'}
        active=['local_types','typedefs']
        if props['is_func']: active.append('function_prototypes')
        if (props['is_struct'] or props['is_union']) and row['size'] is not None: active.append('structs')
        if props['is_enum']: active.append('enums')
        for cat in active:
            prior=old[cat].get(name,{})
            identifier=tid if cat in ['structs','enums'] and tid is not None else ordinal
            folder=prior.get('folder') or f'{safe_name(name)[:120]}__{identifier}'
            directory=repo/'types'/cat/folder
            current=dict(record)
            if cat in ['structs','enums']:
                current.update({'id':tid,'backend':'ida_typeinf','is_union':props['is_union']})
                if cat=='structs':
                    current['members']=[{'name':m['name'],'offset':m['offset_bits']/8 if m['offset_bits']%8 else m['offset_bits']//8,
                                         'offset_hex':hx(m['offset_bits']//8),'size':m['size_bits']/8 if m['size_bits']%8 else m['size_bits']//8,
                                         'type':m['type'],'comment':m['comment'],'annotation_confidence':'Unknown'} for m in row['members']]
            filename='struct.json' if cat=='structs' else 'enum.json' if cat=='enums' else 'type.json'
            json_write(directory/filename,current)
            decl=row['definition'].rstrip()
            text_write(directory/'decl.c',source_text(decl+(';' if not decl.endswith(';') else '')))
            idx={'name':name,'folder':folder}
            if cat in ['structs','enums']: idx.update({'id':tid,'size':row['size']})
            else: idx['ordinal']=ordinal
            if cat=='local_types': idx['kind']=kind
            indexes[cat].append(idx); streams[cat].append(current)
        row.update(properties[ordinal])
        if i%1000==0: print(f'Type catalogs {i}/{len(types)}',flush=True)
    stream_write(out,'local_types',all_types,1000)
    current_names={cat:{x['name'] for x in indexes[cat]} for cat in categories}
    history={cat:[r for name,r in old[cat].items() if name not in current_names[cat]] for cat in categories}
    json_write(out/'historical_type_entries.json',history)
    for cat in categories:
        json_write(repo/'types'/cat/'_index.json',indexes[cat])
        stream_write(repo/'_jsonl',cat,streams[cat],25000)
    json_write(out/'type_export_complete.json',{'completed_at':now(),'counts':{cat:len(indexes[cat]) for cat in categories}})


def rebuild_graphs(repo,out):
    funcs=read_json(repo/'functions_index_by_ea.json')
    data=read_json(repo/'data/named_items/_index.json')
    fnodes=[{'id':'func:'+x['start_ea'],'ea':x['start_ea'],'name':x['name'],'display_name':x['display_name'],'folder':x['folder']} for x in funcs]
    nodes={x['id']:{**x,'kind':'function'} for x in fnodes}
    for row in data:
        nodes['data:'+row['ea']]={'id':'data:'+row['ea'],'ea':row['ea'],'name':row['name'],'display_name':row['display_name'],'folder':row['folder'],'kind':'named_code' if row['kind']=='code' else 'named_data'}
    call_edges=[]; data_edges=[]; symbol_edges=[]
    for i,row in enumerate(funcs,1):
        directory=repo/'functions'/row['folder']; source='func:'+row['start_ea']
        for ref in read_json(directory/'callees.json',[]):
            target='func:'+ref['target_ea']
            if target not in nodes: raise RuntimeError(f'Call target missing from current function catalog: {target}')
            edge={'source':source,'target':target,'site_ea':ref['site_ea'],'xref_type':ref['xref_type']}
            call_edges.append(edge); symbol_edges.append({**edge,'kind':'calls'})
        for ref in read_json(directory/'data_refs.json',[]):
            target='data:'+ref['target_ea']
            if target not in nodes:
                nodes[target]={'id':target,'ea':ref['target_ea'],'name':ref['target_name'],'display_name':ref['target_name'],'kind':'data','annotation_confidence':'Unknown'}
            symbol_edges.append({'source':source,'target':target,'site_ea':ref['site_ea'],'xref_type':ref['xref_type'],'kind':'references_data'})
            data_edges.append({'source_ea':row['start_ea'],'source_kind':'function','source_name':row['name'],
                               'target_ea':ref['target_ea'],'target_kind':nodes[target]['kind'],'target_name':ref['target_name'],
                               'site_ea':ref['site_ea'],'xref_type':ref['xref_type'],'relation':'reads_or_writes_named_data' if nodes[target]['kind']=='named_data' else 'references_code' if nodes[target]['kind']=='named_code' else 'references_data'})
        if i%5000==0: print(f'Graph reconstruction {i}/{len(funcs)}',flush=True)
    old=read_json(repo/'graphs/callgraph.json')
    json_write(out/'graph_history.json',{'baseline_stats':old['stats'],'baseline_self_edges':sum(e['source']==e['target'] for e in old['edges']),
                                      'current_self_edges':sum(e['source']==e['target'] for e in call_edges),
                                      'scope':'Current edges derive from refreshed exact call targets, not source-site function ownership.'})
    compact_json_write(repo/'graphs/callgraph.json',{'nodes':fnodes,'edges':call_edges,'stats':{'node_count':len(fnodes),'edge_count':len(call_edges)}})
    compact_json_write(repo/'graphs/dataflow_edges.json',{'edges':data_edges,'stats':{'edge_count':len(data_edges)}})
    stats={'node_count':len(nodes),'edge_count':len(symbol_edges),'function_nodes':len(funcs),'named_item_nodes':len(data),
           'named_data_nodes':sum(x['kind']!='code' for x in data),'named_code_nodes':sum(x['kind']=='code' for x in data),
           'uncatalogued_data_nodes':len(nodes)-len(funcs)-len(data)}
    compact_json_write(repo/'graphs/symbol_graph.json',{'nodes':list(nodes.values()),'edges':symbol_edges,'stats':stats})
    for name,records in [('graph_call_edges',call_edges),('graph_dataflow_edges',data_edges),('graph_symbol_nodes',list(nodes.values())),('graph_symbol_edges',symbol_edges)]:
        stream_write(repo/'_jsonl',name,records,25000)
    json_write(out/'graph_export_complete.json',{'completed_at':now(),'counts':stats,'call_edges':len(call_edges),'dataflow_edges':len(data_edges)})


def export_metadata(ida,repo,out):
    program=read_json(repo/'metadata/program.json',{})
    observed=ida.py_eval("{'root_filename':ida_nalt.get_root_filename(),'input_file_path':ida_nalt.get_input_file_path(),'database_path':idc.get_idb_path(),'min_ea':hex(ida_ida.inf_get_min_ea()),'max_ea':hex(ida_ida.inf_get_max_ea()),'imagebase':hex(ida_nalt.get_imagebase()),'bitness_32':bool(ida_ida.inf_is_32bit_exactly()),'bitness_64':bool(ida_ida.inf_is_64bit()),'processor':ida_ida.inf_get_procname(),'kernel_version':ida_kernwin.get_kernel_version(),'filetype':ida_ida.inf_get_filetype(),'is_dll':bool(ida_ida.inf_is_dll()),'input_sha256':ida_nalt.retrieve_input_file_sha256().hex()}")
    program.update(observed); program.update({'enum_backend':'ida_typeinf','struct_backend':'ida_typeinf'})
    segments=ida.py_eval("[(s.start_ea,s.end_ea,ida_segment.get_segm_name(s),s.bitness,s.perm,s.type) for a in idautils.Segments() for s in [ida_segment.getseg(a)] if s]")
    segments=[{'start_ea':hx(a),'end_ea':hx(b),'name':n,'bitness':bits,'perm':perm,'type':typ,'size':b-a} for a,b,n,bits,perm,typ in segments]
    entries=ida.py_eval('list(idautils.Entries())')
    entries=[{'ea':hx(ea),'ordinal':ordinal,'name':name,'display_name':name} for index,ordinal,ea,name in entries]
    imported=ida.py_eval("[(ida_nalt.get_import_module_name(i) or '<unnamed>',items) for i in range(ida_nalt.get_import_module_qty()) for items in [[]] for ignored in [ida_nalt.enum_import_names(i,lambda ea,name,ordinal: (items.append((ea,name,ordinal)) or True))]]")
    imports=[{'ea':hx(ea),'module':module,'name':name or '#'+str(ordinal),'display_name':name or '#'+str(ordinal),'ordinal':ordinal} for module,items in imported for ea,name,ordinal in items]
    qty=ida.py_eval('ida_strlist.get_strlist_qty()')
    if not qty: raise RuntimeError('Current IDA string cache is empty; refusing to replace the catalog with an empty snapshot')
    strings=[]
    for offset in range(0,qty,500):
        raw=ida.py_eval("[(s.ea,s.length,s.type,(value or b'').decode('utf-8','backslashreplace'),value is not None) for i in range("+str(offset)+","+str(min(offset+500,qty))+") for s in [ida_strlist.string_info_t()] if ida_strlist.get_strlist_item(s,i) for value in [ida_bytes.get_strlit_contents(s.ea,s.length,s.type)]]")
        strings += [{'ea':hx(a),'length':length,'type':typ,'value':value,'content_available':available} for a,length,typ,value,available in raw]
    if len(strings)!=qty: raise RuntimeError('String inventory did not cover every current list entry')
    for name,records in [('program',program),('segments',segments),('imports',imports),('entrypoints',entries),('strings',strings)]:
        json_write(repo/'metadata'/(name+'.json'),records)
        stream_write(repo/'_jsonl','metadata_'+name,[records] if name=='program' else records,25000)
    counts={'segments':len(segments),'imports':len(imports),'entrypoints':len(entries),'strings':len(strings)}
    json_write(out/'metadata_export_complete.json',{'completed_at':now(),'counts':counts,'program':program})


def export_address_names(ida,repo,out):
    qty=ida.py_eval('ida_name.get_nlist_size()')
    records=[]
    for offset in range(0,qty,512):
        raw=ida.py_eval("[(a,ida_name.get_nlist_name(i),f.start_ea if f else None) for i in range("+str(offset)+","+str(min(offset+512,qty))+") for a in [ida_name.get_nlist_ea(i)] for f in [ida_funcs.get_func(a)]]")
        for ea,name,owner in raw:
            records.append({'ea':hx(ea),'name':name,'function_ea':hx(owner) if owner is not None else None,
                            'position':'outside_function' if owner is None else 'function_start' if owner==ea else 'inside_function',
                            'annotation_confidence':'Unknown'})
    stream_write(out,'address_names',records,5000)
    counts={kind:sum(x['position']==kind for x in records) for kind in ['function_start','inside_function','outside_function']}
    counts['total']=len(records)
    require_count=len(read_json(repo/'data/named_items/_index.json'))
    if counts['outside_function']!=require_count: raise RuntimeError('Address-name population disagrees with the current named-item catalog')
    json_write(out/'address_names_export_complete.json',{'completed_at':now(),'counts':counts})
    inventory=read_json(out/'inventory_manifest.json'); inventory['counts']['address_names']=len(records)
    inventory['counts']['interior_code_labels']=counts['inside_function']; json_write(out/'inventory_manifest.json',inventory)


def pin_history(repo,out):
    inventory=read_json(out/'inventory_manifest.json')
    baseline=inventory.get('baseline_commit') or subprocess.check_output(['git','rev-parse','HEAD'],cwd=repo,text=True).strip()
    inventory['baseline_commit']=baseline; json_write(out/'inventory_manifest.json',inventory)
    tree=subprocess.check_output(['git','ls-tree','-r','-z',baseline],cwd=repo)
    blobs={}
    for entry in tree.split(b'\0'):
        if not entry: continue
        header,path=entry.split(b'\t',1)
        if path.endswith((b'/function.json',b'/item.json')):
            blobs[path.decode('utf-8')]=header.split()[2].decode('ascii')
    del tree
    for category,prefix,filename in [('functions','functions','function.json'),('named_items','data/named_items','item.json')]:
        records=list(stream_read(out/'changes'/category))
        requests=[blobs.get(prefix+'/'+row['folder']+'/'+filename,'0'*40) for row in records]
        result=subprocess.run(['git','cat-file','--batch'],cwd=repo,input=('\n'.join(requests)+'\n').encode('utf-8'),capture_output=True)
        if result.returncode: raise RuntimeError(result.stderr.decode('utf-8',errors='replace'))
        stream=io.BytesIO(result.stdout)
        for row in records:
            header=stream.readline().decode('utf-8').rstrip('\n')
            if header.endswith(' missing'):
                row['before']={}
            else:
                fields=header.split(); size=int(fields[-1])
                row['before']=json.loads(stream.read(size)); assert stream.read(1)==b'\n'
            row['baseline_commit']=baseline
        stream_write(out/'changes',category,records,1000)
    json_write(out/'history_complete.json',{'baseline_commit':baseline,'completed_at':now()})


def finalize_snapshot(repo,out):
    inventory=read_json(out/'inventory_manifest.json')
    stages={name:read_json(out/(name+'_export_complete.json')) for name in ['function','data','type','graph','metadata']}
    if any(value is None for value in stages.values()): raise RuntimeError('Some snapshot export stages are incomplete')
    if read_json(out/'address_names_export_complete.json') is None or read_json(out/'history_complete.json') is None:
        raise RuntimeError('Address-name coverage and pinned history must be completed before finishing')
    if not stages['function']['complete_population'] or not stages['data']['complete_population']:
        raise RuntimeError('Full population refresh required before completing the snapshot')
    if stages['function']['functions']!=inventory['counts']['functions'] or stages['data']['named_items']!=inventory['counts']['named_items']:
        raise RuntimeError('Snapshot counts disagree with the audited populations')
    manifest={'pass':'OctoberPass','scope':'Complete current structured function, named-item, type, graph, and metadata snapshot, plus full raw annotation inventories.',
              'completed_at':now(),'inventory':inventory['counts'],'stages':stages,
              'confidence_policy':'Source labels are archived separately; bulk semantic interpretations remain Unknown. The focused report supplies established Oblivion-side conclusions.',
              'historical_records':'Obsolete index entries are archived here; historical directories remain available but are absent from current catalogs.'}
    json_write(out/'manifest.json',manifest)
    root=read_json(repo/'manifest.json'); root.setdefault('previous_exporter',root.get('exporter'))
    root['exporter']={'name':'ida_octoberpass_annotation_sync','version':'1.0.0'}
    root['completed_at']=root['updated_at']=manifest['completed_at']; root['status']='completed'
    root['database']['program']=stages['metadata']['program']; root['database']['input_sha256']=stages['metadata']['program']['input_sha256']
    root['database']['fingerprint_scope']='Legacy exporter identity retained; current input bytes identified separately by input_sha256.'
    root['config'].update({'output_root':str(repo),'reset_requested':False,'resume_enabled':True,'selected_profile':'OctoberPass_complete_snapshot','wait_for_autoanalysis':False})
    root.setdefault('outputs',{})['root']=str(repo)
    stream_counts={directory.name:len(list(directory.glob('*.jsonl'))) for directory in (repo/'_jsonl').iterdir() if directory.is_dir()}
    root['outputs']['jsonl']={'enabled':True,'chunk_size':25000,'stream_chunk_counts':stream_counts}
    stats={**stages['type']['counts'],'functions':stages['function']['functions'],'named_items':stages['data']['named_items']}
    for name,stage_stats in [('functions',{'functions':stats['functions']}),('named_items',{'named_items':stats['named_items']}),('metadata',stages['metadata']['counts']),('graphs',stages['graph']['counts']),('finalize',stats)]+[(name,{name:count}) for name,count in stages['type']['counts'].items()]:
        root.setdefault('stages',{})[name]={'started_at':inventory['created_at'],'completed_at':manifest['completed_at'],'status':'completed','stats':stage_stats}
    root['analysis_passes']=[{'name':'OctoberPass','manifest':'Findings/OctoberPass/database_delta/manifest.json','focused_manifest':'Findings/OctoberPass/manifest.json','completed_at':manifest['completed_at']}]
    overview=("# Oblivion IDA Export — OctoberPass\n\n"
              f"Current snapshot completed {manifest['completed_at']}.\n\n"
              f"Functions: {stats['functions']:,}. Named items: {stats['named_items']:,}. Local types: {stats['local_types']:,}.\n\n"
              "[Focused verified findings](../Findings/OctoberPass/README.md) cover decals, temporary effects, shader passes, serialization, and task creation.\n\n"
              "[Complete snapshot and annotation inventory](../Findings/OctoberPass/database_delta/README.md) covers the current function, type, data, graph, and metadata populations. Source labels are preserved separately from confidence in a semantic interpretation. Bulk unassessed interpretations remain Unknown.\n")
    text_write(repo/'markdown/overview.md',overview)
    root['stages']['markdown']={'started_at':inventory['created_at'],'completed_at':manifest['completed_at'],'status':'completed','stats':{'root_overview':1,'pass_reports':2}}
    json_write(repo/'manifest.json',root)


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--repository',type=Path,default=Path.cwd())
    parser.add_argument('--endpoint',default='http://127.0.0.1:56185/mcp')
    parser.add_argument('--phase',choices=['audit','finalize','frames','confidence','functions','data','types','names','graphs','metadata','history','finish'],default='audit')
    parser.add_argument('--resume-audit',action='store_true',help='reuse a complete saved function inventory and continue globals/types')
    parser.add_argument('--complete-population',action='store_true',help='refresh all current functions or named items, including propagated annotations')
    args=parser.parse_args(); repo=args.repository.resolve(); out=repo/'Findings/OctoberPass/database_delta'
    ida=IdaMcp(args.endpoint,300)
    identity=ida.py_eval('(ida_nalt.get_root_filename(),ida_nalt.get_input_file_path())')
    if identity[0].lower()!='oblivion.exe': raise RuntimeError(f'Wrong live database: {identity}')
    if args.phase=='audit': audit(ida,repo,out,args.resume_audit)
    elif args.phase=='finalize': finalize_inventory(repo,out)
    elif args.phase=='frames': audit_frames(ida,repo,out)
    elif args.phase=='confidence': normalize_archive_confidence(out)
    elif args.phase=='functions': export_functions(ida,repo,out,args.complete_population)
    elif args.phase=='types': export_types(ida,repo,out)
    elif args.phase=='graphs': rebuild_graphs(repo,out)
    elif args.phase=='metadata': export_metadata(ida,repo,out)
    elif args.phase=='names': export_address_names(ida,repo,out)
    elif args.phase=='history': pin_history(repo,out)
    elif args.phase=='finish': finalize_snapshot(repo,out)
    else: export_named_items(ida,repo,out,args.complete_population)


if __name__=='__main__':
    main()
