0x578ED0: fild    [esp+arg_4]
0x578ED4: mov     eax, [esp+propertyCode]
0x578ED8: push    ecx
0x578ED9: fstp    [esp+4+a2]; value
0x578EDC: push    eax; propertyCode
0x578EDD: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x578EE2: retn    8
