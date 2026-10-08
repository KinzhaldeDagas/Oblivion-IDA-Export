#!/usr/bin/env python3
"""Validate the published snapshot's contracts, optionally against live IDA.

Checks current populations, preserved schemas, numeric xrefs, byte hashes,
graph endpoint closure, catalog/JSONL agreement, and confidence provenance.
This does not certify the semantics of unassessed analyst annotations.
"""
import argparse
import hashlib
import json
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

from ida_repo_exporter import IdaMcp, json_write, now
from sync_database_annotations import read_json, stream_read


def require(condition, detail):
    if not condition:
        raise RuntimeError(detail)


def digest(rows):
    result=hashlib.sha256()
    for row in rows:
        result.update(json.dumps(row,sort_keys=True,ensure_ascii=False,separators=(',',':')).encode('utf-8'))
        result.update(b'\n')
    return result.hexdigest()


def prefetched(items,reader):
    with ThreadPoolExecutor(max_workers=8) as pool:
        for offset in range(0,len(items),64):
            yield from pool.map(reader,items[offset:offset+64])


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--repository',type=Path,default=Path.cwd())
    parser.add_argument('--source',action='store_true')
    parser.add_argument('--resume-types',action='store_true',help='Reuse successful live function and named-item checks from this session')
    parser.add_argument('--resume-source',action='store_true',help='Reuse this session completed completed local catalog/graph checks and run live-source checks')
    parser.add_argument('--function-contract-cache',type=Path,help='Resume with previously successful function contracts from this unchanged working session')
    parser.add_argument('--endpoint',default='http://127.0.0.1:56185/mcp')
    args=parser.parse_args(); repo=args.repository.resolve(); out=repo/'Findings/OctoberPass/database_delta'
    inventory=read_json(out/'inventory_manifest.json'); manifest=read_json(out/'manifest.json')
    functions=read_json(repo/'functions_index_by_ea.json'); byname=read_json(repo/'functions_index_by_name.json')
    require(len(functions)==inventory['counts']['functions'],'Function population differs from inventory')
    require({x['start_ea']:x for x in functions}=={x['start_ea']:x for x in byname},'Function indexes disagree')
    focused={int(path.stem,16) for path in (out.parent/'functions').glob('*.json')}
    if args.resume_source:
        require(args.source,'--resume-source requires --source')
        metadata={int(r['start_ea'],16):r for r in stream_read(repo/'_jsonl/functions')}
        named_meta={int(r['ea'],16):r for r in stream_read(repo/'_jsonl/named_items')}
        local_meta={r['ordinal']:r for r in stream_read(repo/'_jsonl/local_types')}
        named_index={int(r['ea'],16):r for r in read_json(repo/'data/named_items/_index.json')}
        address_names=list(stream_read(out/'address_names'))
        named_refs={}
        call_count=sum(r['callees_count'] for r in metadata.values());data_count=sum(r['data_refs_count'] for r in metadata.values());gaps=None
        print('Resuming live-source checks after completed local catalog/graph validation',flush=True)
    else:
        metadata={}; gaps=[]; call_count=data_count=0
        required={'callees_count','callers_count','comment_regular','comment_repeatable','data_refs_count','display_name','end_ea','flags','has_pseudocode','name','segment','sha256','size','start_ea','type','xrefs_from_count','xrefs_to_count'}
        def load_function(idx):
            directory=repo/'functions'/idx['folder']
            docs={stem:read_json(directory/(stem+'.json')) for stem in ['function','instructions','callers','callees','data_refs','xrefs_from','xrefs_to']}
            text_present=(directory/'pseudocode.c').exists() and (directory/'disasm.asm').exists()
            return idx,directory,docs,text_present
        if args.function_contract_cache:
            cached=read_json(args.function_contract_cache)
            require(cached['functions']==len(functions),'Cached function population drift')
            metadata={int(row['start_ea'],16):row for row in cached['metadata']}
            require(set(metadata)=={int(row['start_ea'],16) for row in functions},'Cached function identities drift')
            call_count=sum(row['callees_count'] for row in metadata.values())
            data_count=sum(row['data_refs_count'] for row in metadata.values())
            gaps=None
            print('Reusing completed function contracts from the unchanged working session',flush=True)
        else:
            for i,(idx,directory,docs,text_present) in enumerate(prefetched(functions,load_function),1):
                row=docs['function']; ea=int(row['start_ea'],16)
                require(required<=row.keys(),f'Missing legacy function fields at {row["start_ea"]}')
                require(idx['name']==row['name'] and idx['sha256']==row['sha256'],f'Index drift at {row["start_ea"]}')
                require(row['size']==int(row['end_ea'],16)-ea,f'Primary range size mismatch at {row["start_ea"]}')
                require(row['bytes_read_complete'],f'Incomplete source bytes at {row["start_ea"]}')
                require(row['evidence_confidence'] in ['Verified','Probable','Candidate','Unknown'],'Invalid confidence')
                require(ea in focused or row['evidence_confidence']=='Unknown',f'Bulk interpretation promoted at {row["start_ea"]}')
                require('source_annotation_confidence' in row,'Missing confidence provenance')
                chunks=[(int(a,16),int(b,16)) for a,b in row['chunks']]
                require(sum(b-a for a,b in chunks)==row['total_chunk_size'],'Chunk size mismatch')
                instructions=docs['instructions']; heads={x['ea'] for x in instructions}
                for item in instructions:
                    head=int(item['ea'],16)
                    require(any(a<=head and head+item['size']<=b for a,b in chunks),f'Instruction outside chunks: {item["ea"]}')
                if sum(x['size'] for x in instructions)!=row['total_chunk_size']:
                    gaps.append(row['start_ea'])
                for stem,count_key in [('callers','callers_count'),('callees','callees_count'),('data_refs','data_refs_count'),('xrefs_from','xrefs_from_count'),('xrefs_to','xrefs_to_count')]:
                    records=docs[stem]
                    require(len(records)==row[count_key],f'{stem} count mismatch at {row["start_ea"]}')
                    if stem.startswith('xrefs'):
                        require(all(isinstance(x['type'],int) for x in records),'Non-numeric xref type')
                    if stem=='xrefs_from': require(all(x['from_ea'] in heads for x in records),'Xref source missing from instructions')
                    if stem in ['callees','data_refs']: require(all(x['site_ea'] in heads for x in records),'Reference source missing from instructions')
                call_count+=row['callees_count']; data_count+=row['data_refs_count']; metadata[ea]=row
                require(text_present,'Missing function text')
                if i%5000==0: print(f'Function contracts {i}/{len(functions)}',flush=True)
        stream=list(stream_read(repo/'_jsonl/functions'))
        require(len(stream)==len(functions),'Function JSONL population mismatch')
        for row in stream:
            expected=metadata[int(row['start_ea'],16)]
            require(all(row[k]==v for k,v in expected.items()),'Function JSONL metadata drift')
        named=read_json(repo/'data/named_items/_index.json'); named_meta={}
        named_index={int(x['ea'],16):x for x in named}
        require(len(named)==inventory['counts']['named_items'],'Named population mismatch')
        def load_named(idx):
            directory=repo/'data/named_items'/idx['folder']
            return idx,read_json(directory/'item.json'),read_json(directory/'xrefs_to.json')
        named_refs={}
        for idx,row,refs in prefetched(named,load_named):
            ea=int(row['ea'],16)
            require(all(idx[k]==row[k] for k in ['ea','name','kind','size']),'Named index drift')
            require(len(refs)==row['xrefs_to_count'],'Named xref count mismatch')
            named_refs[ea]=sorted((int(x['from_ea'],16),int(x['to_ea'],16),x['type']) for x in refs)
            named_meta[ea]=row
        named_stream=list(stream_read(repo/'_jsonl/named_items'))
        require(len(named_stream)==len(named_meta),'Named JSONL population mismatch')
        for row in named_stream: require(all(row[k]==v for k,v in named_meta[int(row['ea'],16)].items()),'Named JSONL drift')
        local_index=read_json(repo/'types/local_types/_index.json'); local_meta={}
        address_names=list(stream_read(out/'address_names'))
        require({int(x['ea'],16) for x in address_names if x['position']=='outside_function'}==set(named_meta),'Address-name archive does not cover the named-item catalog')
        require(len(local_index)==inventory['counts']['local_types'],'Local-type population mismatch')
        for idx,row in prefetched(local_index,lambda idx:(idx,read_json(repo/'types/local_types'/idx['folder']/'type.json'))):
            require(row['ordinal']==idx['ordinal'] and row['name']==idx['name'],'Type index drift')
            require(row['annotation_confidence']=='Unknown','Unassessed type interpretation promoted')
            local_meta[row['ordinal']]=row
        for category,filename in [('local_types','type.json'),('typedefs','type.json'),('structs','struct.json'),('enums','enum.json'),('function_prototypes','type.json')]:
            idx=read_json(repo/'types'/category/'_index.json'); records=[]
            def load_catalog(item):
                directory=repo/'types'/category/item['folder']
                row=local_meta[item['ordinal']] if category=='local_types' else read_json(directory/filename)
                return item,row,(directory/'decl.c').read_text(encoding='utf-8')
            for item,row,declaration in prefetched(idx,load_catalog):
                require(row['name']==item['name'],'Type catalog name drift')
                normalized=lambda text:'\n'.join(line.rstrip() for line in text.splitlines()).strip().rstrip(';').strip()
                require(normalized(declaration)==normalized(row['definition']),'Type declaration differs from metadata definition')
                records.append(row)
            require(digest(records)==digest(stream_read(repo/'_jsonl'/category)),f'{category} JSONL differs from catalog')
        graph=read_json(repo/'graphs/symbol_graph.json'); node_ids={x['id'] for x in graph['nodes']}
        require(graph['stats']['node_count']==len(graph['nodes']) and graph['stats']['edge_count']==len(graph['edges']),'Symbol graph stats drift')
        require({x['id'] for x in graph['nodes'] if x['kind']=='function'}=={'func:'+x['start_ea'] for x in functions},'Graph function population drift')
        require(len(node_ids)==len(graph['nodes']),'Duplicate graph nodes')
        require(all(e['source'] in node_ids and e['target'] in node_ids for e in graph['edges']),'Dangling symbol graph edge')
        require(digest(graph['nodes'])==digest(stream_read(repo/'_jsonl/graph_symbol_nodes')),'Graph node stream mismatch')
        require(digest(graph['edges'])==digest(stream_read(repo/'_jsonl/graph_symbol_edges')),'Graph edge stream mismatch')
        calls=read_json(repo/'graphs/callgraph.json'); dataflow=read_json(repo/'graphs/dataflow_edges.json')
        require(len(calls['edges'])==call_count and len(dataflow['edges'])==data_count,'Graph counts differ from per-function references')
        require(digest(calls['edges'])==digest(stream_read(repo/'_jsonl/graph_call_edges')),'Call stream mismatch')
        require(digest(dataflow['edges'])==digest(stream_read(repo/'_jsonl/graph_dataflow_edges')),'Dataflow stream mismatch')
        for edge in calls['edges']:
            require(edge['target'] in node_ids and edge['source'] in node_ids,'Dangling call edge')
    source_checks={}
    if args.source:
        ida=IdaMcp(args.endpoint,300)
        identity=ida.py_eval('(ida_nalt.get_root_filename(),ida_funcs.get_func_qty(),ida_typeinf.get_ordinal_count(ida_typeinf.get_idati()),ida_nalt.retrieve_input_file_sha256().hex())')
        require(identity[0].lower()=='oblivion.exe' and identity[1]==len(metadata),'Live function population mismatch')
        require(identity[3]==manifest['stages']['metadata']['program']['input_sha256'],'Input identity mismatch')
        if not args.resume_types:
            addresses=sorted(metadata)
            for offset in range(0,len(addresses),128):
                raw=ida.py_eval("[(a,ida_funcs.get_func(a).start_ea,ida_funcs.get_func(a).end_ea,idc.get_func_name(a),idc.get_type(a) or '',ida_funcs.get_func(a).flags,[(ca,cb,(ida_bytes.get_bytes(ca,cb-ca) or b'').hex()) for ca,cb in idautils.Chunks(a)],ida_funcs.get_func_cmt(ida_funcs.get_func(a),False) or '',ida_funcs.get_func_cmt(ida_funcs.get_func(a),True) or '',idc.get_cmt(a,0) or '',idc.get_cmt(a,1) or '') for a in "+repr(addresses[offset:offset+128])+"]")
                for ea,start,end,name,typ,flags,chunks,fc,fr,ac,ar in raw:
                    row=metadata[ea]
                    require(ea==start and int(row['end_ea'],16)==end and row['name']==name and row['type']==typ and row['flags']==flags,f'Live function metadata drift at {hex(ea)}')
                    primary=next(bytes.fromhex(raw) for a,b,raw in chunks if a==ea)
                    require(hashlib.sha256(primary).hexdigest()==row['sha256'],f'Live primary hash drift at {hex(ea)}')
                    require(hashlib.sha256(b''.join(bytes.fromhex(raw) for a,b,raw in chunks)).hexdigest()==row['chunks_sha256'],f'Live chunk hash drift at {hex(ea)}')
                    require([[f'0x{a:X}',f'0x{b:X}'] for a,b,raw in chunks]==row['chunks'],f'Live chunk map drift at {hex(ea)}')
                    require(row['comment_regular']=='\n\n'.join(dict.fromkeys(x for x in [fc,ac] if x)) and row['comment_repeatable']=='\n\n'.join(dict.fromkeys(x for x in [fr,ar] if x)),f'Live function comment drift at {hex(ea)}')
                if offset%5120==0: print(f'Live function/hash checks {min(offset+128,len(addresses))}/{len(addresses)}',flush=True)
            addresses=sorted(named_meta)
            for offset in range(0,len(addresses),200):
                raw=ida.py_eval("[(a,idc.get_name(a) or '',idc.get_item_size(a),idc.get_type(a) or '',idc.get_cmt(a,0) or '',idc.get_cmt(a,1) or '',bool(ida_bytes.is_code(ida_bytes.get_full_flags(a))),[(x.frm,x.to,x.type) for x in idautils.XrefsTo(a,0)]) for a in "+repr(addresses[offset:offset+200])+"]")
                for ea,name,size,typ,cmt,rep,is_code,refs in raw:
                    row=named_meta[ea]
                    require(row['name']==name and row['size']==size and row['type']==typ and row['comments']=={'regular':cmt,'repeatable':rep},f'Live named-item drift at {hex(ea)}')
                    require(row['kind']==('code' if is_code else 'data'),'Named item classification drift')
                    require((named_refs[ea] if ea in named_refs else sorted((int(x['from_ea'],16),int(x['to_ea'],16),x['type']) for x in read_json(repo/'data/named_items'/named_index[ea]['folder']/'xrefs_to.json')))==sorted(refs),f'Live named xref drift at {hex(ea)}')
        ordinals=set()
        for offset in range(1,identity[2]+1,128):
            raw=ida.py_eval("[(o,t.get_type_name() or '',t.dstr(),t.get_size(),[(m.name,m.offset,m.size,m.type.dstr(),m.cmt) for u in [ida_typeinf.udt_type_data_t()] if t.get_udt_details(u) for m in u],[(e.name,e.value,e.cmt) for en in [ida_typeinf.enum_type_data_t()] if t.get_enum_details(en) for e in en]) for o in range("+str(offset)+","+str(min(offset+128,identity[2]+1))+") for t in [ida_typeinf.tinfo_t()] if t.get_numbered_type(ida_typeinf.get_idati(),o)]")
            for ordinal,name,decl,size,members,enums in raw:
                ordinals.add(ordinal); row=local_meta[ordinal]
                require(row['name']==name and row['decl']==decl and row['size']==(size if size<2**32 else None),'Live type metadata drift')
                if row['kind']=='enum':
                    require([(m['name'],m['value'],m['comment']) for m in row['members']]==enums,'Live enum member drift')
                else:
                    require([(m['name'],m['offset_bits'],m['size_bits'],m['type'],m['comment']) for m in row['members']]==members,'Live type member drift')
        require(ordinals==set(local_meta),'Live local-type population mismatch')
        name_qty=ida.py_eval('ida_name.get_nlist_size()')
        require(name_qty==len(address_names),'Live address-name population mismatch')
        for offset in range(0,name_qty,512):
            raw=ida.py_eval("[(ida_name.get_nlist_ea(i),ida_name.get_nlist_name(i)) for i in range("+str(offset)+","+str(min(offset+512,name_qty))+")]")
            expected=[(int(x['ea'],16),x['name']) for x in address_names[offset:offset+512]]
            require(raw==expected,'Live address-name archive drift')
        source_checks={'functions_and_primary_hashes':len(metadata),'named_items_and_exact_xrefs':len(named_meta),'defined_local_types':len(local_meta),'input_sha256':identity[3]}
    summary={'validated_at':now(),'functions':len(metadata),'named_items':len(named_meta),'local_types':len(local_meta),'call_edges':call_count,'dataflow_edges':data_count,
             'graph_endpoints_closed':True,'catalogs_and_jsonl_consistent':True,'confidence_provenance_checked':True,'instruction_coverage_gap_functions':gaps,'function_contracts_reused':bool(args.function_contract_cache or args.resume_source),'local_contracts_reused':args.resume_source,'source_function_and_named_checks_reused':args.resume_types,'coverage_gap_note':'Gap list was not retained by the prior successful contract stage' if args.function_contract_cache or args.resume_source else None,
             'source_checks':source_checks,'scope':'Export integrity and live source agreement; unassessed semantic interpretations remain Unknown.'}
    json_write(out/'validation.json',summary)
    print(json.dumps(summary,indent=2))


if __name__=='__main__':
    main()
