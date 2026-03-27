0x59DCA0: cmp     [esp+arg_0], 64h ; 'd'
0x59DCA5: jl      short loc_59DCBD
0x59DCA7: fld1
0x59DCA9: push    ecx
0x59DCAA: mov     ecx, [ecx+38h]; this
0x59DCAD: fstp    [esp+4+a2]; a3
0x59DCB0: push    0FA1h; a2
0x59DCB5: call    Tile_SetFloat
0x59DCBA: retn    8
0x59DCBD: mov     ecx, [esp+arg_4]; this
0x59DCC1: test    ecx, ecx
0x59DCC3: jz      short locret_59DCD5
0x59DCC5: fldz
0x59DCC7: push    ecx
0x59DCC8: fstp    [esp+4+a2]; a3
0x59DCCB: push    0FDDh; a2
0x59DCD0: call    Tile_SetFloat
0x59DCD5: retn    8
