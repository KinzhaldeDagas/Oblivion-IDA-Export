0x5BD550: push    esi
0x5BD551: mov     esi, ecx
0x5BD553: mov     ecx, [esi+30h]
0x5BD556: push    0FB5h
0x5BD55B: call    Tile_GetFloat
0x5BD560: call    Double_To_SInt32
0x5BD565: cmp     ds:0B3B410h, eax
0x5BD56B: jz      short loc_5BD57A
0x5BD56D: mov     ecx, esi
0x5BD56F: mov     ds:0B3B410h, eax
0x5BD574: pop     esi
0x5BD575: jmp     sub_5BCF20
0x5BD57A: pop     esi
0x5BD57B: retn
