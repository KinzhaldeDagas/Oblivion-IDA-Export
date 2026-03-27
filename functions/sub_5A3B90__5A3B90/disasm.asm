0x5A3B90: cmp     [esp+arg_0], 0Ah
0x5A3B95: jnz     short locret_5A3BAA
0x5A3B97: fldz
0x5A3B99: push    ecx
0x5A3B9A: mov     ecx, [ecx+48h]; this
0x5A3B9D: fstp    [esp+4+a2]; a3
0x5A3BA0: push    0FA7h; a2
0x5A3BA5: call    Tile_SetFloat
0x5A3BAA: retn    8
