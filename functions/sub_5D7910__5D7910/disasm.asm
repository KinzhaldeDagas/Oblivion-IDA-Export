0x5D7910: fld1
0x5D7912: push    ecx
0x5D7913: mov     ecx, [ecx+34h]; this
0x5D7916: fstp    [esp+4+a2]; a3
0x5D7919: push    0FA1h; a2
0x5D791E: call    Tile_SetFloat
0x5D7923: mov     eax, [esp+arg_0]
0x5D7927: cmp     eax, 0Eh
0x5D792A: jz      short loc_5D7931
0x5D792C: cmp     eax, 0Fh
0x5D792F: jnz     short locret_5D7949
0x5D7931: fld     dword ptr ds:0A40098h
0x5D7937: push    ecx
0x5D7938: mov     ecx, [esp+4+arg_4]; this
0x5D793C: fstp    [esp+4+a2]; a3
0x5D793F: push    0FA7h; a2
0x5D7944: call    Tile_SetFloat
0x5D7949: retn    8
