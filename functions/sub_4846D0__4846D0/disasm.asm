0x4846D0: push    esi
0x4846D1: mov     esi, [ecx]
0x4846D3: test    esi, esi
0x4846D5: jz      short loc_4846ED
0x4846D7: mov     ecx, [esi]
0x4846D9: test    ecx, ecx
0x4846DB: jz      short loc_4846ED
0x4846DD: call    sub_41DEF0
0x4846E2: test    al, al
0x4846E4: jnz     short loc_4846F1
0x4846E6: mov     esi, [esi+4]
0x4846E9: test    esi, esi
0x4846EB: jnz     short loc_4846D7
0x4846ED: xor     al, al
0x4846EF: pop     esi
0x4846F0: retn
0x4846F1: mov     al, 1
0x4846F3: pop     esi
0x4846F4: retn
