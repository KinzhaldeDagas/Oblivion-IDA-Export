0x5934D0: fld1
0x5934D2: push    ecx
0x5934D3: mov     ecx, [ecx+54h]; this
0x5934D6: fstp    [esp+4+a2]; value
0x5934D9: push    0FA1h; propertyCode
0x5934DE: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5934E3: retn    8
