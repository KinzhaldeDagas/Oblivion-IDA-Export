0x579F80: push    1; arg1
0x579F82: push    0; canCreate
0x579F84: call    InterfaceManager_GetSingleton
0x579F89: add     esp, 8
0x579F8C: test    eax, eax
0x579F8E: jz      short loc_579FB9
0x579F90: push    1; arg1
0x579F92: push    0; canCreate
0x579F94: call    InterfaceManager_GetSingleton
0x579F99: add     esp, 8
0x579F9C: cmp     dword ptr [eax+1Ch], 0
0x579FA0: jz      short loc_579FB9
0x579FA2: push    1; arg1
0x579FA4: push    0; canCreate
0x579FA6: call    InterfaceManager_GetSingleton
0x579FAB: add     esp, 8
0x579FAE: cmp     dword ptr [eax+60h], 0
0x579FB2: jz      short loc_579FB9
0x579FB4: jmp     loc_5BB6C0
0x579FB9: xor     eax, eax
0x579FBB: retn
0x5BB6C0: push    ecx
0x5BB6C1: push    3FFh
0x5BB6C6: call    Menu_GetOpenMenuTile
0x5BB6CB: add     esp, 4
0x5BB6CE: test    eax, eax
0x5BB6D0: jz      short loc_5BB6DC
0x5BB6D2: mov     edx, [eax]
0x5BB6D4: mov     ecx, eax
0x5BB6D6: mov     eax, [edx]
0x5BB6D8: push    1
0x5BB6DA: call    eax
0x5BB6DC: push    esi
0x5BB6DD: push    edi
0x5BB6DE: push    1; arg1
0x5BB6E0: push    0; canCreate
0x5BB6E2: call    InterfaceManager_GetSingleton
0x5BB6E7: add     esp, 8
0x5BB6EA: mov     esi, eax
0x5BB6EC: call    InterfaceManager_GetDepth
0x5BB6F1: fstp    [esp+10h+var_8]
0x5BB6F5: mov     ecx, [esi+68h]; this
0x5BB6F8: push    offset aDataMenusMai_3; "Data\\Menus\\Main\\map_menu.xml"
0x5BB6FD: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x5BB702: mov     edi, eax
0x5BB704: mov     ecx, edi
0x5BB706: call    Tile_GetParentMenu
0x5BB70B: mov     esi, eax
0x5BB70D: push    esi; int
0x5BB70E: push    offset aDataMenusMai_3; "Data\\Menus\\Main\\map_menu.xml"
0x5BB713: call    sub_584670
0x5BB718: add     esp, 8
0x5BB71B: test    esi, esi
0x5BB71D: jz      loc_5BB870
0x5BB723: mov     edx, [esi]
0x5BB725: mov     eax, [edx+34h]
0x5BB728: mov     ecx, esi
0x5BB72A: call    eax
0x5BB72C: cmp     eax, 3FFh
0x5BB731: jnz     loc_5BB860
0x5BB737: push    ebx; ArgList
0x5BB738: push    0; int
0x5BB73A: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5BB73F: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5BB744: push    0; int
0x5BB746: push    edi; void *
0x5BB747: call    OblivionDynamicCast
0x5BB74C: add     esp, 14h
0x5BB74F: push    eax
0x5BB750: mov     ecx, esi
0x5BB752: call    Menu_SetTileMenu
0x5BB757: push    0; int
0x5BB759: push    offset ??_R0?AVMapMenu@@@8; struct TypeDescriptor *
0x5BB75E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BB763: push    0; int
0x5BB765: push    esi; void *
0x5BB766: call    OblivionDynamicCast
0x5BB76B: mov     ebx, eax
0x5BB76D: add     esp, 14h
0x5BB770: mov     ecx, ebx
0x5BB772: call    sub_5B65F0
0x5BB777: test    al, al
0x5BB779: jnz     short loc_5BB78F
0x5BB77B: push    offset aMapMenuCreatio; "Map Menu Creation Failed... Are your me"...
0x5BB780: call    PrintError
0x5BB785: add     esp, 4
0x5BB788: pop     ebx
0x5BB789: pop     edi
0x5BB78A: xor     eax, eax
0x5BB78C: pop     esi
0x5BB78D: pop     ecx
0x5BB78E: retn
0x5BB78F: push    0FA5h
0x5BB794: mov     ecx, edi
0x5BB796: call    Tile_GetFloat
0x5BB79B: fcomp   dword ptr ds:0A69770h
0x5BB7A1: fnstsw  ax
0x5BB7A3: test    ah, 44h
0x5BB7A6: jnp     short loc_5BB7C1
0x5BB7A8: push    0FA5h
0x5BB7AD: mov     ecx, edi
0x5BB7AF: call    Tile_GetFloat
0x5BB7B4: fcomp   qword ptr ds:0A69778h
0x5BB7BA: fnstsw  ax
0x5BB7BC: test    ah, 44h
0x5BB7BF: jp      short loc_5BB7D5
0x5BB7C1: fld     [esp+14h+var_8]
0x5BB7C5: push    ecx
0x5BB7C6: fstp    [esp+18h+var_18]
0x5BB7C9: push    0FABh
0x5BB7CE: mov     ecx, edi
0x5BB860: cmp     dword ptr [esi+4], 0
0x5BB864: jz      short loc_5BB870
0x5BB866: mov     edx, [esi]
0x5BB868: mov     eax, [edx]
0x5BB86A: push    1
0x5BB86C: mov     ecx, esi
0x5BB86E: call    eax
0x5BB870: pop     edi
0x5BB871: xor     eax, eax
0x5BB873: pop     esi
0x5BB874: pop     ecx
0x5BB875: retn
