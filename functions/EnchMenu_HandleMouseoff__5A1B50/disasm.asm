0x5A1B50: fld1
0x5A1B52: push    ecx
0x5A1B53: mov     ecx, [ecx+5Ch]; this
0x5A1B56: fstp    [esp+4+a2]; value
0x5A1B59: push    0FA1h; propertyCode
0x5A1B5E: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5A1B63: retn    8
