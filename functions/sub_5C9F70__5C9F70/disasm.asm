0x5C9F70: push    40Ch
0x5C9F75: call    Menu_GetOpenMenuTile
0x5C9F7A: add     esp, 4
0x5C9F7D: test    eax, eax
0x5C9F7F: jz      short locret_5C9FB8
0x5C9F81: push    0; int
0x5C9F83: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x5C9F88: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C9F8D: push    0; int
0x5C9F8F: mov     ecx, eax
0x5C9F91: call    Tile_GetParentMenu
0x5C9F96: push    eax; void *
0x5C9F97: call    OblivionDynamicCast
0x5C9F9C: add     esp, 14h
0x5C9F9F: test    eax, eax
0x5C9FA1: jz      short locret_5C9FB8
0x5C9FA3: call    sub_578D70
0x5C9FA8: cmp     al, 2
0x5C9FAA: jnz     short loc_5C9FB1
0x5C9FAC: jmp     sub_5C9C70
0x5C9FB1: mov     byte ptr ds:0B3B4C9h, 0
0x5C9FB8: retn
