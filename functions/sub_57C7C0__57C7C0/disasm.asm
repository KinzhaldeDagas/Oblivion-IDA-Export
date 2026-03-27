0x57C7C0: push    1; arg1
0x57C7C2: push    0; canCreate
0x57C7C4: call    InterfaceManager_GetSingleton
0x57C7C9: add     esp, 8
0x57C7CC: test    eax, eax
0x57C7CE: jz      locret_57C97D
0x57C7D4: push    1; arg1
0x57C7D6: push    0; canCreate
0x57C7D8: call    InterfaceManager_GetSingleton
0x57C7DD: add     esp, 8
0x57C7E0: cmp     dword ptr [eax+1Ch], 0
0x57C7E4: jz      locret_57C97D
0x57C7EA: push    1; arg1
0x57C7EC: push    0; canCreate
0x57C7EE: call    InterfaceManager_GetSingleton
0x57C7F3: add     esp, 8
0x57C7F6: cmp     dword ptr [eax+68h], 0
0x57C7FA: jz      locret_57C97D
0x57C800: push    1; arg1
0x57C802: push    0; canCreate
0x57C804: call    InterfaceManager_GetSingleton
0x57C809: mov     eax, [eax+68h]
0x57C80C: add     esp, 8
0x57C80F: push    0FAEh
0x57C814: mov     ecx, eax
0x57C816: call    Tile_GetFloat
0x57C81B: fcomp   dword ptr ds:0A379B4h
0x57C821: fnstsw  ax
0x57C823: test    ah, 44h
0x57C826: jp      locret_57C97D
0x57C82C: push    ebx
0x57C82D: push    ebp
0x57C82E: push    esi
0x57C82F: push    edi; a3
0x57C830: push    3EBh
0x57C835: call    Menu_GetOpenMenuTile
0x57C83A: push    3EAh
0x57C83F: mov     edi, eax
0x57C841: call    Menu_GetOpenMenuTile
0x57C846: push    3FEh
0x57C84B: mov     esi, eax
0x57C84D: call    Menu_GetOpenMenuTile
0x57C852: push    3FFh
0x57C857: mov     ebx, eax
0x57C859: call    Menu_GetOpenMenuTile
0x57C85E: mov     ebp, eax
0x57C860: mov     al, [esp+20h+arg_4]
0x57C864: neg     al
0x57C866: sbb     eax, eax
0x57C868: and     eax, 0Bh
0x57C86B: push    eax
0x57C86C: push    3EAh
0x57C871: call    sub_5790E0
0x57C876: add     esp, 18h
0x57C879: cmp     [esp+10h+arg_0], 0
0x57C87E: jz      loc_57C92E
0x57C884: test    al, al
0x57C886: jnz     loc_57C95D
0x57C88C: test    edi, edi
0x57C88E: jz      short loc_57C89E
0x57C890: mov     ecx, edi
0x57C892: call    Tile_GetParentMenu
0x57C897: mov     ecx, eax; int
0x57C899: call    sub_584740
0x57C89E: test    ebx, ebx
0x57C8A0: jz      short loc_57C8B0
0x57C8A2: mov     ecx, ebx
0x57C8A4: call    Tile_GetParentMenu
0x57C8A9: mov     ecx, eax; int
0x57C8AB: call    sub_584740
0x57C8B0: test    ebp, ebp
0x57C8B2: jz      short loc_57C8C2
0x57C8B4: mov     ecx, ebp
0x57C8B6: call    Tile_GetParentMenu
0x57C8BB: mov     ecx, eax; int
0x57C8BD: call    sub_584740
0x57C8C2: test    esi, esi
0x57C8C4: jnz     short loc_57C8CF
0x57C8C6: call    sub_57A2D0
0x57C8CB: mov     esi, eax
0x57C8CD: jmp     short loc_57C8D9
0x57C8CF: push    1
0x57C8D1: call    sub_57A3B0
0x57C8D6: add     esp, 4
0x57C8D9: test    esi, esi
0x57C8DB: jz      short loc_57C900
0x57C8DD: push    1; arg1
0x57C8DF: push    0; canCreate
0x57C8E1: call    InterfaceManager_GetSingleton
0x57C8E6: fld     dword ptr ds:0A68C0Ch
0x57C8EC: mov     ecx, [eax+68h]; this
0x57C8EF: fstp    [esp+18h+var_14]; a3
0x57C8F3: add     esp, 4
0x57C8F6: push    1771h; a2
0x57C8FB: call    Tile_SetFloat
0x57C900: push    1; arg1
0x57C902: push    0; canCreate
0x57C904: call    InterfaceManager_GetSingleton
0x57C909: mov     eax, [eax+60h]
0x57C90C: and     word ptr [eax+18h], 0FFFEh
0x57C912: add     esp, 8
0x57C915: call    sub_5B3E90
0x57C91A: test    esi, esi
0x57C91C: jz      short loc_57C95D
0x57C91E: mov     ecx, esi
0x57C920: call    Tile_GetParentMenu
0x57C925: mov     ecx, eax; int
0x57C927: call    sub_584390
0x57C92C: jmp     short loc_57C95D
0x57C92E: test    al, al
0x57C930: jz      short loc_57C95D
0x57C932: test    esi, esi
0x57C934: jz      short loc_57C95D
0x57C936: mov     ecx, esi
0x57C938: call    Tile_GetParentMenu
0x57C93D: mov     ecx, eax; int
0x57C93F: call    sub_584740
0x57C944: push    1; arg1
0x57C946: push    0; canCreate
0x57C948: call    InterfaceManager_GetSingleton
0x57C94D: mov     eax, [eax+60h]
0x57C950: or      word ptr [eax+18h], 1
0x57C955: add     esp, 8
0x57C958: call    sub_5B3E90
0x57C95D: push    1; arg1
0x57C95F: push    0; canCreate
0x57C961: call    InterfaceManager_GetSingleton
0x57C966: fldz
0x57C968: add     esp, 8
0x57C96B: push    0; a3
0x57C96D: push    ecx
0x57C96E: mov     ecx, [eax+60h]; this
0x57C971: fstp    [esp+18h+a2]; a2
0x57C974: call    NiAVObject_UpdateNiAVObject
0x57C979: pop     edi
0x57C97A: pop     esi
0x57C97B: pop     ebp
0x57C97C: pop     ebx
0x57C97D: retn
