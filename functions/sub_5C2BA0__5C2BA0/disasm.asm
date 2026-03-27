0x5C2BA0: push    40Ch
0x5C2BA5: call    Menu_GetOpenMenuTile
0x5C2BAA: add     esp, 4
0x5C2BAD: test    eax, eax
0x5C2BAF: jz      short locret_5C2BE1
0x5C2BB1: push    0; int
0x5C2BB3: push    offset ??_R0?AVRaceSexMenu@@@8; struct TypeDescriptor *
0x5C2BB8: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C2BBD: push    0; int
0x5C2BBF: mov     ecx, eax
0x5C2BC1: call    Tile_GetParentMenu
0x5C2BC6: push    eax; void *
0x5C2BC7: call    OblivionDynamicCast
0x5C2BCC: add     esp, 14h
0x5C2BCF: test    eax, eax
0x5C2BD1: jz      short locret_5C2BE1
0x5C2BD3: call    sub_578D70
0x5C2BD8: cmp     al, 2
0x5C2BDA: jnz     short locret_5C2BE1
0x5C2BDC: jmp     sub_5C28F0
0x5C2BE1: retn
