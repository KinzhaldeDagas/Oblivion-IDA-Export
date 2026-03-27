0x5BD830: push    esi
0x5BD831: push    3F7h
0x5BD836: call    Menu_GetOpenMenuTile
0x5BD83B: mov     esi, eax
0x5BD83D: add     esp, 4
0x5BD840: test    esi, esi
0x5BD842: jz      short loc_5BD872
0x5BD844: push    edi; a3
0x5BD845: mov     ecx, esi
0x5BD847: call    Tile_GetParentMenu
0x5BD84C: mov     edi, eax
0x5BD84E: test    edi, edi
0x5BD850: jz      short loc_5BD871
0x5BD852: fld     dword ptr ds:0A379B4h
0x5BD858: push    ecx
0x5BD859: fstp    [esp+0Ch+a2]; a3
0x5BD85C: push    1772h; a2
0x5BD861: mov     ecx, esi; this
0x5BD863: call    Tile_SetFloat
0x5BD868: mov     ecx, edi; int
0x5BD86A: pop     edi
0x5BD86B: pop     esi
0x5BD86C: jmp     sub_584740
0x5BD871: pop     edi
0x5BD872: pop     esi
0x5BD873: retn
