0x5AE080: push    ecx
0x5AE081: push    esi
0x5AE082: push    edi; a3
0x5AE083: push    40Eh
0x5AE088: call    Menu_GetOpenMenuTile
0x5AE08D: mov     edi, eax
0x5AE08F: add     esp, 4
0x5AE092: test    edi, edi
0x5AE094: jz      loc_5AE137
0x5AE09A: mov     ecx, edi
0x5AE09C: call    Tile_GetParentMenu
0x5AE0A1: mov     esi, eax
0x5AE0A3: test    esi, esi
0x5AE0A5: jz      loc_5AE137
0x5AE0AB: mov     eax, [esi+40h]
0x5AE0AE: push    0; int
0x5AE0B0: push    offset ??_R0?AVTileImage@@@8; struct TypeDescriptor *
0x5AE0B5: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AE0BA: push    0; int
0x5AE0BC: push    eax; void *
0x5AE0BD: call    OblivionDynamicCast
0x5AE0C2: add     esp, 14h
0x5AE0C5: test    eax, eax
0x5AE0C7: jz      short loc_5AE0DD
0x5AE0C9: push    ecx
0x5AE0CA: mov     ecx, esp
0x5AE0CC: mov     dword ptr [ecx], 0
0x5AE0D2: mov     ecx, eax
0x5AE0D4: mov     [esp+10h+var_4], esp
0x5AE0D8: call    sub_591A80
0x5AE0DD: fld     dword ptr ds:0A379B4h
0x5AE0E3: push    ecx
0x5AE0E4: fstp    [esp+10h+a2]; a3
0x5AE0E7: push    1772h; a2
0x5AE0EC: mov     ecx, edi; this
0x5AE0EE: call    Tile_SetFloat
0x5AE0F3: mov     ecx, esi; int
0x5AE0F5: call    sub_584740
0x5AE0FA: push    3F5h
0x5AE0FF: call    Menu_GetOpenMenuTile
0x5AE104: add     esp, 4
0x5AE107: test    eax, eax
0x5AE109: jz      short loc_5AE137
0x5AE10B: push    0; int
0x5AE10D: push    offset ??_R0?AVPauseMenu@@@8; struct TypeDescriptor *
0x5AE112: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5AE117: push    0; int
0x5AE119: mov     ecx, eax
0x5AE11B: call    Tile_GetParentMenu
0x5AE120: push    eax; void *
0x5AE121: call    OblivionDynamicCast
0x5AE126: add     esp, 14h
0x5AE129: test    eax, eax
0x5AE12B: jz      short loc_5AE137
0x5AE12D: pop     edi
0x5AE12E: pop     esi
0x5AE12F: add     esp, 4
0x5AE132: jmp     sub_5BDA20
0x5AE137: pop     edi
0x5AE138: pop     esi
0x5AE139: pop     ecx
0x5AE13A: retn
