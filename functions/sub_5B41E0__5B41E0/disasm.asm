0x5B41E0: push    esi; a3
0x5B41E1: push    400h
0x5B41E6: call    Menu_GetOpenMenuTile
0x5B41EB: mov     esi, eax
0x5B41ED: add     esp, 4
0x5B41F0: test    esi, esi
0x5B41F2: jz      short loc_5B4224
0x5B41F4: mov     ecx, esi
0x5B41F6: call    Tile_GetParentMenu
0x5B41FB: test    eax, eax
0x5B41FD: jz      short loc_5B4224
0x5B41FF: fld     dword ptr ds:0A379B4h
0x5B4205: push    ecx
0x5B4206: fstp    [esp+8+a2]; a3
0x5B4209: push    1772h; a2
0x5B420E: mov     ecx, esi; this
0x5B4210: call    Tile_SetFloat
0x5B4215: mov     ecx, esi
0x5B4217: call    Tile_GetParentMenu
0x5B421C: mov     ecx, eax; int
0x5B421E: pop     esi
0x5B421F: jmp     sub_584740
0x5B4224: pop     esi
0x5B4225: retn
