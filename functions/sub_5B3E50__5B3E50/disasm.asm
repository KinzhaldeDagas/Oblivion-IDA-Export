0x5B3E50: push    400h
0x5B3E55: call    Menu_GetOpenMenuTile
0x5B3E5A: add     esp, 4
0x5B3E5D: test    eax, eax
0x5B3E5F: jz      short locret_5B3E8A
0x5B3E61: push    0; int
0x5B3E63: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x5B3E68: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B3E6D: push    0; int
0x5B3E6F: mov     ecx, eax
0x5B3E71: call    Tile_GetParentMenu
0x5B3E76: push    eax; void *
0x5B3E77: call    OblivionDynamicCast
0x5B3E7C: add     esp, 14h
0x5B3E7F: test    eax, eax
0x5B3E81: jz      short locret_5B3E8A
0x5B3E83: mov     dword ptr [eax+58h], 3
0x5B3E8A: retn
