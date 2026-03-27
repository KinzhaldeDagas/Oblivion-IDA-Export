0x57A480: push    1; arg1
0x57A482: push    0; canCreate
0x57A484: call    InterfaceManager_GetSingleton
0x57A489: add     esp, 8
0x57A48C: test    eax, eax
0x57A48E: jz      locret_57A648
0x57A494: push    1; arg1
0x57A496: push    0; canCreate
0x57A498: call    InterfaceManager_GetSingleton
0x57A49D: add     esp, 8
0x57A4A0: cmp     dword ptr [eax+1Ch], 0
0x57A4A4: jz      locret_57A648
0x57A4AA: push    1; arg1
0x57A4AC: push    0; canCreate
0x57A4AE: call    InterfaceManager_GetSingleton
0x57A4B3: add     esp, 8
0x57A4B6: cmp     dword ptr [eax+68h], 0
0x57A4BA: jz      locret_57A648
0x57A4C0: push    1; arg1
0x57A4C2: push    0; canCreate
0x57A4C4: call    InterfaceManager_GetSingleton
0x57A4C9: mov     eax, [eax+68h]
0x57A4CC: add     esp, 8
0x57A4CF: push    0FAEh
0x57A4D4: mov     ecx, eax
0x57A4D6: call    Tile_GetFloat
0x57A4DB: fcomp   dword ptr ds:0A379B4h
0x57A4E1: fnstsw  ax
0x57A4E3: test    ah, 44h
0x57A4E6: jp      locret_57A648
0x57A4EC: push    ebx
0x57A4ED: push    ebp
0x57A4EE: push    esi
0x57A4EF: push    edi; a3
0x57A4F0: push    3EBh
0x57A4F5: call    Menu_GetOpenMenuTile
0x57A4FA: push    3EAh
0x57A4FF: mov     esi, eax
0x57A501: call    Menu_GetOpenMenuTile
0x57A506: push    3FEh
0x57A50B: mov     edi, eax
0x57A50D: call    Menu_GetOpenMenuTile
0x57A512: push    3FFh
0x57A517: mov     ebx, eax
0x57A519: call    Menu_GetOpenMenuTile
0x57A51E: mov     ebp, eax
0x57A520: mov     al, [esp+20h+arg_4]
0x57A524: neg     al
0x57A526: sbb     eax, eax
0x57A528: and     eax, 0Bh
0x57A52B: push    eax
0x57A52C: push    3EBh
0x57A531: call    sub_5790E0
0x57A536: add     esp, 18h
0x57A539: cmp     [esp+10h+arg_0], 0
0x57A53E: jz      loc_57A5F9
0x57A544: test    al, al
0x57A546: jnz     loc_57A628
0x57A54C: test    edi, edi
0x57A54E: jz      short loc_57A55E
0x57A550: mov     ecx, edi
0x57A552: call    Tile_GetParentMenu
0x57A557: mov     ecx, eax; int
0x57A559: call    sub_584740
0x57A55E: test    ebx, ebx
0x57A560: jz      short loc_57A570
0x57A562: mov     ecx, ebx
0x57A564: call    Tile_GetParentMenu
0x57A569: mov     ecx, eax; int
0x57A56B: call    sub_584740
0x57A570: test    ebp, ebp
0x57A572: jz      short loc_57A582
0x57A574: mov     ecx, ebp
0x57A576: call    Tile_GetParentMenu
0x57A57B: mov     ecx, eax; int
0x57A57D: call    sub_584740
0x57A582: test    esi, esi
0x57A584: jnz     short loc_57A591
0x57A586: call    sub_57A440
0x57A58B: mov     esi, eax
0x57A58D: test    esi, esi
0x57A58F: jz      short loc_57A5B4
0x57A591: push    1; arg1
0x57A593: push    0; canCreate
0x57A595: call    InterfaceManager_GetSingleton
0x57A59A: fld     dword ptr ds:0A68C00h
0x57A5A0: mov     ecx, [eax+68h]; this
0x57A5A3: fstp    [esp+18h+var_14]; a3
0x57A5A7: add     esp, 4
0x57A5AA: push    1771h; a2
0x57A5AF: call    Tile_SetFloat
0x57A5B4: push    1; arg1
0x57A5B6: push    0; canCreate
0x57A5B8: call    InterfaceManager_GetSingleton
0x57A5BD: mov     eax, [eax+60h]
0x57A5C0: and     word ptr [eax+18h], 0FFFEh
0x57A5C6: add     esp, 8
0x57A5C9: call    sub_5B3E90
0x57A5CE: test    esi, esi
0x57A5D0: jz      short loc_57A628
0x57A5D2: mov     ecx, esi
0x57A5D4: call    Tile_GetParentMenu
0x57A5D9: mov     ecx, eax
0x57A5DB: call    sub_5DCEF0
0x57A5E0: push    0; float
0x57A5E2: mov     ecx, esi
0x57A5E4: call    sub_58FBA0
0x57A5E9: mov     ecx, esi
0x57A5EB: call    Tile_GetParentMenu
0x57A5F0: mov     ecx, eax; int
0x57A5F2: call    sub_584390
0x57A5F7: jmp     short loc_57A628
0x57A5F9: test    al, al
0x57A5FB: jz      short loc_57A628
0x57A5FD: test    esi, esi
0x57A5FF: jz      short loc_57A628
0x57A601: mov     ecx, esi
0x57A603: call    Tile_GetParentMenu
0x57A608: mov     ecx, eax; int
0x57A60A: call    sub_584740
0x57A60F: push    1; arg1
0x57A611: push    0; canCreate
0x57A613: call    InterfaceManager_GetSingleton
0x57A618: mov     eax, [eax+60h]
0x57A61B: or      word ptr [eax+18h], 1
0x57A620: add     esp, 8
0x57A623: call    sub_5B3E90
0x57A628: push    1; arg1
0x57A62A: push    0; canCreate
0x57A62C: call    InterfaceManager_GetSingleton
0x57A631: fldz
0x57A633: add     esp, 8
0x57A636: push    0; a3
0x57A638: push    ecx
0x57A639: mov     ecx, [eax+60h]; this
0x57A63C: fstp    [esp+18h+a2]; a2
0x57A63F: call    NiAVObject_UpdateNiAVObject
0x57A644: pop     edi
0x57A645: pop     esi
0x57A646: pop     ebp
0x57A647: pop     ebx
0x57A648: retn
