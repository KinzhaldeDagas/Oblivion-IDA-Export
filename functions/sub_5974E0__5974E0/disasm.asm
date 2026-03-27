0x5974E0: push    406h
0x5974E5: call    Menu_GetOpenMenuTile
0x5974EA: add     esp, 4
0x5974ED: test    eax, eax
0x5974EF: jz      short locret_59753A
0x5974F1: push    esi
0x5974F2: push    0; int
0x5974F4: push    offset ??_R0?AVClassMenu@@@8; struct TypeDescriptor *
0x5974F9: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5974FE: push    0; int
0x597500: mov     ecx, eax
0x597502: call    Tile_GetParentMenu
0x597507: push    eax; void *
0x597508: call    OblivionDynamicCast
0x59750D: mov     esi, eax
0x59750F: add     esp, 14h
0x597512: test    esi, esi
0x597514: jz      short loc_597539
0x597516: call    sub_578D70
0x59751B: cmp     al, 1
0x59751D: jnz     short loc_597526
0x59751F: mov     ecx, esi
0x597521: call    sub_5973F0
0x597526: mov     dword ptr [esi+58h], 0
0x59752D: mov     byte ptr [esi+54h], 0
0x597531: mov     ecx, esi; int
0x597533: pop     esi
0x597534: jmp     sub_584390
0x597539: pop     esi
0x59753A: retn
