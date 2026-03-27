0x5A5FD0: push    esi; a3
0x5A5FD1: push    3ECh
0x5A5FD6: call    Menu_GetOpenMenuTile
0x5A5FDB: mov     esi, eax
0x5A5FDD: add     esp, 4
0x5A5FE0: test    esi, esi
0x5A5FE2: jz      short loc_5A603C
0x5A5FE4: call    sub_579FC0
0x5A5FE9: test    al, al
0x5A5FEB: jnz     short loc_5A603C
0x5A5FED: push    0
0x5A5FEF: push    1
0x5A5FF1: call    sub_57C420
0x5A5FF6: add     esp, 8
0x5A5FF9: push    0FB2h
0x5A5FFE: mov     ecx, esi
0x5A6000: call    Tile_GetFloat
0x5A6005: push    ecx
0x5A6006: fstp    [esp+8+a2]; a3
0x5A6009: push    0FB3h; a2
0x5A600E: mov     ecx, esi; this
0x5A6010: call    Tile_SetFloat
0x5A6015: fld     dword ptr ds:0A46B10h
0x5A601B: push    ecx
0x5A601C: fstp    [esp+8+a2]; a3
0x5A601F: push    0FB2h; a2
0x5A6024: mov     ecx, esi; this
0x5A6026: call    Tile_SetFloat
0x5A602B: mov     ecx, esi
0x5A602D: call    Tile_GetParentMenu
0x5A6032: push    0Eh; int
0x5A6034: call    sub_57DE50
0x5A6039: add     esp, 4
0x5A603C: pop     esi
0x5A603D: retn
