0x5C9FC0: push    40Ch
0x5C9FC5: call    Menu_GetOpenMenuTile
0x5C9FCA: add     esp, 4
0x5C9FCD: test    eax, eax
0x5C9FCF: jz      short locret_5CA008
0x5C9FD1: push    0; int
0x5C9FD3: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x5C9FD8: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C9FDD: push    0; int
0x5C9FDF: mov     ecx, eax
0x5C9FE1: call    Tile_GetParentMenu
0x5C9FE6: push    eax; void *
0x5C9FE7: call    OblivionDynamicCast
0x5C9FEC: add     esp, 14h
0x5C9FEF: test    eax, eax
0x5C9FF1: jz      short locret_5CA008
0x5C9FF3: call    sub_578D70
0x5C9FF8: cmp     al, 2
0x5C9FFA: jnz     short loc_5CA001
0x5C9FFC: jmp     sub_5C9CD0
0x5CA001: mov     byte ptr ds:0B3B4C8h, 0
0x5CA008: retn
