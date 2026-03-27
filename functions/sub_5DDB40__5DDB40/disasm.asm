0x5DDB40: cmp     [esp+arg_0], 3
0x5DDB45: jnz     short locret_5DDB5E
0x5DDB47: fld     dword ptr ds:0A40098h
0x5DDB4D: push    ecx
0x5DDB4E: mov     ecx, [ecx+30h]; this
0x5DDB51: fstp    [esp+4+a2]; a3
0x5DDB54: push    0FA7h; a2
0x5DDB59: call    Tile_SetFloat
0x5DDB5E: retn    8
