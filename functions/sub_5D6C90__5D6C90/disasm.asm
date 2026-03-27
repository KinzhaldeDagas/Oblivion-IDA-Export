0x5D6C90: mov     eax, [esp+arg_0]
0x5D6C94: cmp     eax, 6
0x5D6C97: jnz     short loc_5D6CAF
0x5D6C99: fldz
0x5D6C9B: push    ecx
0x5D6C9C: mov     ecx, [ecx+34h]; this
0x5D6C9F: fstp    [esp+4+a2]; a3
0x5D6CA2: push    0FA7h; a2
0x5D6CA7: call    Tile_SetFloat
0x5D6CAC: retn    8
0x5D6CAF: cmp     eax, 5
0x5D6CB2: jnz     short locret_5D6CC7
0x5D6CB4: fldz
0x5D6CB6: push    ecx
0x5D6CB7: mov     ecx, [ecx+30h]; this
0x5D6CBA: fstp    [esp+4+a2]; a3
0x5D6CBD: push    0FA7h; a2
0x5D6CC2: call    Tile_SetFloat
0x5D6CC7: retn    8
