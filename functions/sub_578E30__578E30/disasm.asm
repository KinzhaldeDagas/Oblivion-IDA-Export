0x578E30: push    3EFh
0x578E35: call    Menu_GetOpenMenuTile
0x578E3A: add     esp, 4
0x578E3D: test    eax, eax
0x578E3F: jz      short locret_578E8B
0x578E41: push    esi
0x578E42: push    0; int
0x578E44: push    offset ??_R0?AVLoadingMenu@@@8; struct TypeDescriptor *
0x578E49: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x578E4E: push    0; int
0x578E50: mov     ecx, eax
0x578E52: call    Tile_GetParentMenu
0x578E57: push    eax; void *
0x578E58: call    OblivionDynamicCast
0x578E5D: mov     esi, eax
0x578E5F: add     esp, 14h
0x578E62: test    esi, esi
0x578E64: jz      short loc_578E8A
0x578E66: push    0
0x578E68: push    3EFh
0x578E6D: push    1; arg1
0x578E6F: push    0; canCreate
0x578E71: call    InterfaceManager_GetSingleton
0x578E76: add     esp, 8
0x578E79: mov     ecx, eax
0x578E7B: call    sub_57CFE0
0x578E80: mov     eax, [esi]
0x578E82: mov     edx, [eax]
0x578E84: push    1
0x578E86: mov     ecx, esi
0x578E88: call    edx
0x578E8A: pop     esi
0x578E8B: retn
