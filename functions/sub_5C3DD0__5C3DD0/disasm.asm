0x5C3DD0: push    esi
0x5C3DD1: mov     esi, ecx
0x5C3DD3: mov     ecx, [esi+8ECh]
0x5C3DD9: call    sub_57D2F0
0x5C3DDE: test    al, al
0x5C3DE0: jz      short loc_5C3DFF
0x5C3DE2: mov     eax, [esp+4+arg_0]
0x5C3DE6: mov     ecx, [esi+8ECh]
0x5C3DEC: push    eax
0x5C3DED: call    sub_57FF50
0x5C3DF2: mov     ecx, esi
0x5C3DF4: call    sub_5C30C0
0x5C3DF9: mov     al, 1
0x5C3DFB: pop     esi
0x5C3DFC: retn    4
0x5C3DFF: xor     al, al
0x5C3E01: pop     esi
0x5C3E02: retn    4
