0x5DDB20: cmp     [esp+arg_0], 3
0x5DDB25: jnz     short locret_5DDB3A
0x5DDB27: fldz
0x5DDB29: push    ecx
0x5DDB2A: mov     ecx, [ecx+30h]; this
0x5DDB2D: fstp    [esp+4+a2]; value
0x5DDB30: push    0FA7h; propertyCode
0x5DDB35: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5DDB3A: retn    8
