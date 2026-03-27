0x5BD490: mov     eax, [esp+arg_0]
0x5BD494: cmp     eax, 6
0x5BD497: jnz     loc_5BD536
0x5BD49D: push    esi
0x5BD49E: push    1; int
0x5BD4A0: call    sub_57DE50
0x5BD4A5: push    3F0h
0x5BD4AA: call    Menu_GetOpenMenuTile
0x5BD4AF: mov     ecx, ds:0B333C4h
0x5BD4B5: mov     esi, eax
0x5BD4B7: mov     eax, ds:0B3B410h
0x5BD4BC: push    eax
0x5BD4BD: mov     [ecx+11Ch], eax
0x5BD4C3: call    sub_597CA0
0x5BD4C8: add     esp, 0Ch
0x5BD4CB: test    esi, esi
0x5BD4CD: jz      short loc_5BD4FB
0x5BD4CF: push    0; int
0x5BD4D1: push    offset ??_R0?AVContainerMenu@@@8; struct TypeDescriptor *
0x5BD4D6: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BD4DB: push    0; int
0x5BD4DD: mov     ecx, esi
0x5BD4DF: call    Tile_GetParentMenu
0x5BD4E4: push    eax; void *
0x5BD4E5: call    OblivionDynamicCast
0x5BD4EA: add     esp, 14h
0x5BD4ED: call    ContainerMenu_Update
0x5BD4F2: call    sub_5BD440
0x5BD4F7: pop     esi
0x5BD4F8: retn    8
0x5BD4FB: push    40Dh
0x5BD500: call    Menu_GetOpenMenuTile
0x5BD505: add     esp, 4
0x5BD508: push    0; int
0x5BD50A: push    offset ??_R0?AVSpellPurchaseMenu@@@8; struct TypeDescriptor *
0x5BD50F: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BD514: push    0; int
0x5BD516: mov     ecx, eax
0x5BD518: call    Tile_GetParentMenu
0x5BD51D: push    eax; void *
0x5BD51E: call    OblivionDynamicCast
0x5BD523: add     esp, 14h
0x5BD526: mov     ecx, eax
0x5BD528: call    SpellPurchaseMenu_Update
0x5BD52D: call    sub_5BD440
0x5BD532: pop     esi
0x5BD533: retn    8
0x5BD536: cmp     eax, 7
0x5BD539: jnz     short locret_5BD54A
0x5BD53B: push    2; int
0x5BD53D: call    sub_57DE50
0x5BD542: add     esp, 4
0x5BD545: call    sub_5BD440
0x5BD54A: retn    8
