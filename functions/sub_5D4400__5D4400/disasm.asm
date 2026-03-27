0x5D4400: fld1
0x5D4402: push    ecx
0x5D4403: mov     ecx, [ecx+40h]; this
0x5D4406: fstp    [esp+4+a2]; a3
0x5D4409: push    0FA1h; a2
0x5D440E: call    Tile_SetFloat
0x5D4413: retn    8
