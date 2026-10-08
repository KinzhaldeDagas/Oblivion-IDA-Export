0x59DCA0: cmp     [esp+tileID], 64h ; 'd'; Verified +0x38 bound tile is topic highlight from paired enter/leave callbacks; this refines earlier generic tile_id5 interpretation.
0x59DCA5: jl      short loc_59DCBD
0x59DCA7: fld1
0x59DCA9: push    ecx
0x59DCAA: mov     ecx, [ecx+38h]; this
0x59DCAD: fstp    [esp+4+a2]; value
0x59DCB0: push    0FA1h; propertyCode
0x59DCB5: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59DCBA: retn    8
0x59DCBD: mov     ecx, [esp+tile]; this
0x59DCC1: test    ecx, ecx
0x59DCC3: jz      short locret_59DCD5
0x59DCC5: fldz
0x59DCC7: push    ecx
0x59DCC8: fstp    [esp+4+a2]; value
0x59DCCB: push    0FDDh; propertyCode
0x59DCD0: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59DCD5: retn    8
