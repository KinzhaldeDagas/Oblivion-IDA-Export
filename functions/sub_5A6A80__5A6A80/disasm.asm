0x5A6A80: push    esi
0x5A6A81: push    3ECh
0x5A6A86: call    Menu_GetOpenMenuTile
0x5A6A8B: mov     esi, eax
0x5A6A8D: add     esp, 4
0x5A6A90: test    esi, esi
0x5A6A92: jz      short loc_5A6AAE
0x5A6A94: mov     ecx, esi
0x5A6A96: call    Tile_GetParentMenu
0x5A6A9B: test    eax, eax
0x5A6A9D: jz      short loc_5A6AAE
0x5A6A9F: mov     ecx, esi
0x5A6AA1: call    Tile_GetParentMenu
0x5A6AA6: mov     ecx, eax
0x5A6AA8: pop     esi
0x5A6AA9: jmp     sub_5A66A0
0x5A6AAE: pop     esi
0x5A6AAF: retn
