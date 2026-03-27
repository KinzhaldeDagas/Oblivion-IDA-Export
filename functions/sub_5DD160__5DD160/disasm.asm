0x5DD160: push    esi
0x5DD161: push    edi
0x5DD162: mov     edi, ecx
0x5DD164: lea     esi, [edi+34h]
0x5DD167: mov     ecx, esi
0x5DD169: call    sub_57D2F0
0x5DD16E: test    al, al
0x5DD170: jz      short loc_5DD19A
0x5DD172: mov     eax, [esp+8+arg_0]
0x5DD176: push    eax
0x5DD177: mov     ecx, esi
0x5DD179: call    sub_57FF50
0x5DD17E: mov     ecx, esi
0x5DD180: call    sub_580120
0x5DD185: mov     ecx, [edi+28h]
0x5DD188: push    eax
0x5DD189: push    0FDEh
0x5DD18E: call    Tile_SetString
0x5DD193: pop     edi
0x5DD194: mov     al, 1
0x5DD196: pop     esi
0x5DD197: retn    4
0x5DD19A: pop     edi
0x5DD19B: xor     al, al
0x5DD19D: pop     esi
0x5DD19E: retn    4
