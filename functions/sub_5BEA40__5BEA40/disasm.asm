0x5BEA40: push    esi; a3
0x5BEA41: mov     esi, ecx
0x5BEA43: mov     ecx, [esi+0C0h]
0x5BEA49: push    0FAFh
0x5BEA4E: call    Tile_GetFloat
0x5BEA53: fcomp   dword ptr ds:0A379B4h
0x5BEA59: fnstsw  ax
0x5BEA5B: test    ah, 44h
0x5BEA5E: jp      short loc_5BEA89
0x5BEA60: push    8; int
0x5BEA62: call    sub_57DE50
0x5BEA67: add     esp, 4
0x5BEA6A: push    1
0x5BEA6C: mov     ecx, esi
0x5BEA6E: call    sub_5BE5C0
0x5BEA73: fld1
0x5BEA75: push    ecx
0x5BEA76: fstp    [esp+8+a2]; a3
0x5BEA79: mov     ecx, [esi+0C0h]; this
0x5BEA7F: push    0FAFh; a2
0x5BEA84: call    Tile_SetFloat
0x5BEA89: pop     esi
0x5BEA8A: retn
