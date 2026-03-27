0x5A8FD0: push    esi; a3
0x5A8FD1: push    3F2h
0x5A8FD6: call    Menu_GetOpenMenuTile
0x5A8FDB: mov     esi, eax
0x5A8FDD: add     esp, 4
0x5A8FE0: test    esi, esi
0x5A8FE2: jz      short loc_5A9001
0x5A8FE4: mov     ecx, esi
0x5A8FE6: call    Tile_GetParentMenu
0x5A8FEB: test    eax, eax
0x5A8FED: jz      short loc_5A9001
0x5A8FEF: fld1
0x5A8FF1: push    ecx
0x5A8FF2: fstp    [esp+8+a2]; a3
0x5A8FF5: mov     ecx, esi; this
0x5A8FF7: push    0FA1h; a2
0x5A8FFC: call    Tile_SetFloat
0x5A9001: pop     esi
0x5A9002: retn
