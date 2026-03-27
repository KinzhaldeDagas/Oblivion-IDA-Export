0x5A8B60: push    ecx
0x5A8B61: mov     ecx, ds:0B33B00h
0x5A8B67: push    4; Size
0x5A8B69: lea     eax, [esp+8+Dst]
0x5A8B6D: push    eax; Dst
0x5A8B6E: call    SaveLoad_LoadData
0x5A8B73: mov     eax, ds:0B3B358h
0x5A8B78: xor     ecx, ecx
0x5A8B7A: cmp     eax, ecx
0x5A8B7C: jz      short loc_5A8B8C
0x5A8B7E: cmp     ds:0B14E90h, cl
0x5A8B84: jnz     short loc_5A8B8C
0x5A8B86: fld     [esp+4+Dst]
0x5A8B89: fstp    dword ptr [eax+58h]
0x5A8B8C: mov     ds:0B3B364h, ecx
0x5A8B92: pop     ecx
0x5A8B93: retn
