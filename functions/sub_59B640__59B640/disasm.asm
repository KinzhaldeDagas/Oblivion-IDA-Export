0x59B640: mov     ecx, [esp+arg_0]
0x59B644: test    ecx, ecx
0x59B646: jz      short locret_59B66A
0x59B648: cmp     byte ptr [esp+arg_4], 0
0x59B64D: mov     eax, ds:0B38DA0h
0x59B652: jnz     short loc_59B659
0x59B654: mov     eax, ds:0B38DA8h
0x59B659: mov     [esp+arg_4], eax
0x59B65D: mov     [esp+arg_0], 0FDEh
0x59B665: jmp     Tile_SetString
0x59B66A: retn    8
