0x5DDA50: push    esi
0x5DDA51: push    3FBh
0x5DDA56: call    Menu_GetOpenMenuTile
0x5DDA5B: mov     esi, eax
0x5DDA5D: add     esp, 4
0x5DDA60: test    esi, esi
0x5DDA62: jz      short loc_5DDA92
0x5DDA64: push    edi; a3
0x5DDA65: mov     ecx, esi
0x5DDA67: call    Tile_GetParentMenu
0x5DDA6C: mov     edi, eax
0x5DDA6E: test    edi, edi
0x5DDA70: jz      short loc_5DDA91
0x5DDA72: fld     dword ptr ds:0A379B4h
0x5DDA78: push    ecx
0x5DDA79: fstp    [esp+0Ch+a2]; a3
0x5DDA7C: push    1772h; a2
0x5DDA81: mov     ecx, esi; this
0x5DDA83: call    Tile_SetFloat
0x5DDA88: mov     ecx, edi; int
0x5DDA8A: pop     edi
0x5DDA8B: pop     esi
0x5DDA8C: jmp     sub_584740
0x5DDA91: pop     edi
0x5DDA92: pop     esi
0x5DDA93: retn
