0x5DD0D0: push    esi
0x5DD0D1: push    41Bh
0x5DD0D6: call    Menu_GetOpenMenuTile
0x5DD0DB: mov     esi, eax
0x5DD0DD: add     esp, 4
0x5DD0E0: test    esi, esi
0x5DD0E2: jz      short loc_5DD112
0x5DD0E4: push    edi; a3
0x5DD0E5: mov     ecx, esi
0x5DD0E7: call    Tile_GetParentMenu
0x5DD0EC: mov     edi, eax
0x5DD0EE: test    edi, edi
0x5DD0F0: jz      short loc_5DD111
0x5DD0F2: fld     dword ptr ds:0A379B4h
0x5DD0F8: push    ecx
0x5DD0F9: fstp    [esp+0Ch+a2]; a3
0x5DD0FC: push    1772h; a2
0x5DD101: mov     ecx, esi; this
0x5DD103: call    Tile_SetFloat
0x5DD108: mov     ecx, edi; int
0x5DD10A: pop     edi
0x5DD10B: pop     esi
0x5DD10C: jmp     sub_584740
0x5DD111: pop     edi
0x5DD112: pop     esi
0x5DD113: retn
