0x59FE70: push    esi
0x59FE71: push    411h
0x59FE76: mov     esi, ecx
0x59FE78: call    Menu_GetOpenMenuTile
0x59FE7D: add     esp, 4
0x59FE80: test    eax, eax
0x59FE82: jz      short loc_59FE94
0x59FE84: mov     ecx, eax
0x59FE86: call    Tile_GetParentMenu
0x59FE8B: test    eax, eax
0x59FE8D: jz      short loc_59FEB3
0x59FE8F: mov     [esi+78h], eax
0x59FE92: pop     esi
0x59FE93: retn
0x59FE94: push    412h
0x59FE99: call    Menu_GetOpenMenuTile
0x59FE9E: add     esp, 4
0x59FEA1: test    eax, eax
0x59FEA3: jz      short loc_59FEB3
0x59FEA5: mov     ecx, eax
0x59FEA7: call    Tile_GetParentMenu
0x59FEAC: test    eax, eax
0x59FEAE: jz      short loc_59FEB3
0x59FEB0: mov     [esi+7Ch], eax
0x59FEB3: pop     esi
0x59FEB4: retn
