0x4847C0: push    esi
0x4847C1: mov     esi, [ecx]
0x4847C3: test    esi, esi
0x4847C5: jz      short loc_4847DD
0x4847C7: mov     ecx, [esi]
0x4847C9: test    ecx, ecx
0x4847CB: jz      short loc_4847DD
0x4847CD: call    ExtraDataList_IsExtraDefaultForContainer_all
0x4847D2: test    al, al
0x4847D4: jnz     short loc_4847E1
0x4847D6: mov     esi, [esi+4]
0x4847D9: test    esi, esi
0x4847DB: jnz     short loc_4847C7
0x4847DD: xor     al, al
0x4847DF: pop     esi
0x4847E0: retn
0x4847E1: mov     al, 1
0x4847E3: pop     esi
0x4847E4: retn
