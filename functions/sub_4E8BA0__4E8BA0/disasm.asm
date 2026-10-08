0x4E8BA0: mov     eax, [esp+out_group_header]; Verified local ROAD grouping. Given the owning WRLD's top-level group type 0, emits a child GRUP type 1 whose label is the owning TESWorldSpace FormID. TESRoad owner pointer is at +0x2C.
0x4E8BA4: test    eax, eax
0x4E8BA6: jz      short locret_4E8BED
0x4E8BA8: mov     edx, [esp+current_group_header]
0x4E8BAC: test    edx, edx
0x4E8BAE: mov     dword ptr [eax], 0
0x4E8BB4: jz      short locret_4E8BED
0x4E8BB6: cmp     dword ptr [edx+0Ch], 0
0x4E8BBA: jnz     short locret_4E8BED
0x4E8BBC: mov     edx, [edx+8]
0x4E8BBF: cmp     edx, ds:0B06084h
0x4E8BC5: jnz     short locret_4E8BED
0x4E8BC7: mov     edx, ds:0B05E20h
0x4E8BCD: mov     [eax], edx
0x4E8BCF: mov     dword ptr [eax+0Ch], 1; Canonical ROAD parent emitted here: groupType=1, label=owning WRLD FormID.
0x4E8BD6: mov     ecx, [ecx+2Ch]
0x4E8BD9: mov     edx, [ecx+0Ch]
0x4E8BDC: mov     [eax+8], edx
0x4E8BDF: mov     dword ptr [eax+4], 0
0x4E8BE6: mov     dword ptr [eax+10h], 0
0x4E8BED: retn    8
