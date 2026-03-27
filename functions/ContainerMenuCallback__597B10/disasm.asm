0x597B10: call    sub_578D70
0x597B15: cmp     al, 1
0x597B17: jnz     short loc_597B68
0x597B19: push    esi
0x597B1A: push    3F0h
0x597B1F: mov     ds:0B3B27Ah, al
0x597B24: call    Menu_GetOpenMenuTile
0x597B29: add     esp, 4
0x597B2C: mov     ecx, eax
0x597B2E: call    Tile_GetParentMenu
0x597B33: push    0; int
0x597B35: push    offset ??_R0?AVContainerMenu@@@8; struct TypeDescriptor *
0x597B3A: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x597B3F: push    0; int
0x597B41: push    eax; void *
0x597B42: call    OblivionDynamicCast
0x597B47: mov     ecx, ds:0B3B280h
0x597B4D: mov     edx, ds:0B3B284h
0x597B53: mov     esi, eax
0x597B55: mov     eax, [esi]
0x597B57: mov     eax, [eax+0Ch]
0x597B5A: add     esp, 14h
0x597B5D: push    ecx
0x597B5E: push    edx
0x597B5F: mov     ecx, esi
0x597B61: call    eax
0x597B63: mov     byte ptr [esi+55h], 1
0x597B67: pop     esi
0x597B68: mov     dword ptr ds:0B13E94h, 0FFFFFFFFh
0x597B72: mov     byte ptr ds:0B3B27Ah, 0
0x597B79: retn
