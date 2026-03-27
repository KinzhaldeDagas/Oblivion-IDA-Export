0x5A3BB0: cmp     [esp+arg_0], 0Ah
0x5A3BB5: jnz     short locret_5A3BCE
0x5A3BB7: fld     dword ptr ds:0A40098h
0x5A3BBD: push    ecx
0x5A3BBE: mov     ecx, [ecx+48h]; this
0x5A3BC1: fstp    [esp+4+a2]; a3
0x5A3BC4: push    0FA7h; a2
0x5A3BC9: call    Tile_SetFloat
0x5A3BCE: retn    8
