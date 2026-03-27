0x5DD120: push    esi
0x5DD121: push    edi
0x5DD122: mov     edi, ecx
0x5DD124: lea     esi, [edi+34h]
0x5DD127: mov     ecx, esi
0x5DD129: call    sub_57D2F0
0x5DD12E: test    al, al
0x5DD130: jz      short loc_5DD14E
0x5DD132: mov     ecx, esi
0x5DD134: call    sub_57DDE0
0x5DD139: mov     ecx, esi
0x5DD13B: call    sub_580120
0x5DD140: mov     ecx, [edi+28h]
0x5DD143: push    eax
0x5DD144: push    0FDEh
0x5DD149: call    Tile_SetString
0x5DD14E: pop     edi
0x5DD14F: pop     esi
0x5DD150: retn
