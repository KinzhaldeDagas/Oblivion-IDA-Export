0x5A9010: push    esi
0x5A9011: push    3F2h
0x5A9016: call    Menu_GetOpenMenuTile
0x5A901B: mov     esi, eax
0x5A901D: add     esp, 4
0x5A9020: test    esi, esi
0x5A9022: jz      short loc_5A9052
0x5A9024: push    edi; a3
0x5A9025: mov     ecx, esi
0x5A9027: call    Tile_GetParentMenu
0x5A902C: mov     edi, eax
0x5A902E: test    edi, edi
0x5A9030: jz      short loc_5A9051
0x5A9032: fld     dword ptr ds:0A379B4h
0x5A9038: push    ecx
0x5A9039: fstp    [esp+0Ch+a2]; value
0x5A903C: push    0FA1h; propertyCode
0x5A9041: mov     ecx, esi; this
0x5A9043: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5A9048: mov     ecx, edi; int
0x5A904A: pop     edi
0x5A904B: pop     esi
0x5A904C: jmp     Menu__StartFadeIn; Oblivion ClassMenu step refresh: derives the active step value from tile traits 0xFDB/0xFDC, updates menu state, sets state 8, and refreshes the interface manager.
0x5A9051: pop     edi
0x5A9052: pop     esi
0x5A9053: retn
