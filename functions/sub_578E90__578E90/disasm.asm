0x578E90: push    3EFh
0x578E95: call    Menu_GetOpenMenuTile
0x578E9A: add     esp, 4
0x578E9D: test    eax, eax
0x578E9F: jz      short locret_578ECF
0x578EA1: push    0; int
0x578EA3: push    offset ??_R0?AVLoadingMenu@@@8; struct TypeDescriptor *
0x578EA8: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x578EAD: push    0; int
0x578EAF: mov     ecx, eax
0x578EB1: call    Tile_GetParentMenu
0x578EB6: push    eax; void *
0x578EB7: call    OblivionDynamicCast
0x578EBC: add     esp, 14h
0x578EBF: test    eax, eax
0x578EC1: jz      short locret_578ECF
0x578EC3: mov     ecx, [esp+arg_0]
0x578EC7: push    ecx
0x578EC8: mov     ecx, eax
0x578ECA: call    sub_5AD380
0x578ECF: retn
