0x68DB3D: mov     ecx, [ebp+24h]
0x68DB40: xor     edi, edi
0x68DB42: cmp     ecx, edi
0x68DB44: mov     [esp+source], edi
0x68DB48: jz      short loc_68DB53
0x68DB4A: call    MagicCaster_GetFormID
0x68DB4F: mov     [esp+source], eax
0x68DB53: mov     ecx, ds:0B33B00h; self
0x68DB59: push    4; byteCount
0x68DB5B: lea     eax, [esp+4+source]
0x68DB5F: push    eax; source
0x68DB60: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
