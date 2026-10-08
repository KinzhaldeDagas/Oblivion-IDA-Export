0x68DB8B: mov     eax, [ebp+30h]
0x68DB8E: cmp     eax, edi
0x68DB90: mov     [esp+source], edi
0x68DB94: jz      short loc_68DB9D
0x68DB96: mov     edx, [eax+0Ch]
0x68DB99: mov     [esp+source], edx
0x68DB9D: mov     ecx, ds:0B33B00h; self
0x68DBA3: push    4; byteCount
0x68DBA5: lea     eax, [esp+4+source]
0x68DBA9: push    eax; source
0x68DBAA: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
