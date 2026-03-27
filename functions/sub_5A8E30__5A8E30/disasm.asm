0x5A8E30: push    3F2h
0x5A8E35: call    Menu_GetOpenMenuTile
0x5A8E3A: add     esp, 4
0x5A8E3D: test    eax, eax
0x5A8E3F: jz      short loc_5A8E4B
0x5A8E41: mov     edx, [eax]
0x5A8E43: mov     ecx, eax
0x5A8E45: mov     eax, [edx]
0x5A8E47: push    1
0x5A8E49: call    eax
0x5A8E4B: push    esi
0x5A8E4C: push    edi; a3
0x5A8E4D: push    1; arg1
0x5A8E4F: push    0; canCreate
0x5A8E51: call    InterfaceManager_GetSingleton
0x5A8E56: mov     eax, [eax+68h]
0x5A8E59: add     esp, 8
0x5A8E5C: push    offset aDataMenusMai_2; "Data\\Menus\\Main\\hud_subtitle_menu.xm"...
0x5A8E61: mov     ecx, eax; TileWindow *
0x5A8E63: call    Menu_LoadXML
0x5A8E68: mov     edi, eax
0x5A8E6A: mov     ecx, edi
0x5A8E6C: call    Tile_GetParentMenu
0x5A8E71: mov     esi, eax
0x5A8E73: test    esi, esi
0x5A8E75: jz      loc_5A8F21
0x5A8E7B: mov     edx, [esi]
0x5A8E7D: mov     eax, [edx+34h]
0x5A8E80: mov     ecx, esi
0x5A8E82: call    eax
0x5A8E84: cmp     eax, 3F2h
0x5A8E89: jnz     loc_5A8F11
0x5A8E8F: push    0; int
0x5A8E91: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5A8E96: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A8E9B: push    0; int
0x5A8E9D: push    edi; void *
0x5A8E9E: call    OblivionDynamicCast
0x5A8EA3: add     esp, 14h
0x5A8EA6: push    eax
0x5A8EA7: mov     ecx, esi
0x5A8EA9: call    Menu_SetTileMenu
0x5A8EAE: cmp     dword ptr [esi+28h], 0
0x5A8EB2: jnz     short loc_5A8EC1
0x5A8EB4: push    offset aHudSubtitleMen; "HUD-Subtitle Menu Creation Failed... Ar"...
0x5A8EB9: call    sub_404EC0
0x5A8EBE: add     esp, 4
0x5A8EC1: mov     ecx, [esi+28h]
0x5A8EC4: push    0FACh
0x5A8EC9: call    Tile_GetFloat
0x5A8ECE: push    ecx
0x5A8ECF: mov     ecx, [esi+28h]; this
0x5A8ED2: fstp    [esp+0Ch+a3]; a3
0x5A8ED5: push    0FB7h; a2
0x5A8EDA: call    Tile_SetFloat
0x5A8EDF: mov     ecx, [esi+28h]
0x5A8EE2: push    offset word_A36430
0x5A8EE7: push    0FDEh
0x5A8EEC: call    Tile_SetString
0x5A8EF1: mov     ecx, [esi+34h]
0x5A8EF4: push    offset word_A36430
0x5A8EF9: push    0FDEh
0x5A8EFE: call    Tile_SetString
0x5A8F03: push    0; char
0x5A8F05: mov     ecx, esi; int
0x5A8F07: call    EnableMenu
0x5A8F0C: mov     eax, edi
0x5A8F0E: pop     edi
0x5A8F0F: pop     esi
0x5A8F10: retn
0x5A8F11: cmp     dword ptr [esi+4], 0
0x5A8F15: jz      short loc_5A8F21
0x5A8F17: mov     edx, [esi]
0x5A8F19: mov     eax, [edx]
0x5A8F1B: push    1
0x5A8F1D: mov     ecx, esi
0x5A8F1F: call    eax
0x5A8F21: pop     edi
0x5A8F22: xor     eax, eax
0x5A8F24: pop     esi
0x5A8F25: retn
