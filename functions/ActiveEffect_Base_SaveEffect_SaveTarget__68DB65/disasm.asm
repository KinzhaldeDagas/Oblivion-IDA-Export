0x68DB65: mov     ecx, [ebp+20h]
0x68DB68: cmp     ecx, edi
0x68DB6A: mov     [esp+source], edi
0x68DB6E: jz      short loc_68DB79
0x68DB70: call    MagicTarget_GetParentFormID
0x68DB75: mov     [esp+source], eax
0x68DB79: push    4; byteCount
0x68DB7B: lea     ecx, [esp+4+source]
0x68DB7F: push    ecx; source
0x68DB80: mov     ecx, ds:0B33B00h; self
0x68DB86: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
