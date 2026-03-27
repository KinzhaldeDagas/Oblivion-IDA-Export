0x5A1B50: fld1
0x5A1B52: push    ecx
0x5A1B53: mov     ecx, [ecx+5Ch]; this
0x5A1B56: fstp    [esp+4+a2]; a3
0x5A1B59: push    0FA1h; a2
0x5A1B5E: call    Tile_SetFloat
0x5A1B63: retn    8
