0x57A2D0: push    1; arg1
0x57A2D2: push    0; canCreate
0x57A2D4: call    InterfaceManager_GetSingleton
0x57A2D9: add     esp, 8
0x57A2DC: test    eax, eax
0x57A2DE: jz      short loc_57A309
0x57A2E0: push    1; arg1
0x57A2E2: push    0; canCreate
0x57A2E4: call    InterfaceManager_GetSingleton
0x57A2E9: add     esp, 8
0x57A2EC: cmp     dword ptr [eax+1Ch], 0
0x57A2F0: jz      short loc_57A309
0x57A2F2: push    1; arg1
0x57A2F4: push    0; canCreate
0x57A2F6: call    InterfaceManager_GetSingleton
0x57A2FB: add     esp, 8
0x57A2FE: cmp     dword ptr [eax+60h], 0
0x57A302: jz      short loc_57A309
0x57A304: jmp     loc_5AB5A0
0x57A309: xor     eax, eax
0x57A30B: retn
0x5AB5A0: push    ecx
0x5AB5A1: push    3EAh
0x5AB5A6: call    Menu_GetOpenMenuTile
0x5AB5AB: add     esp, 4
0x5AB5AE: test    eax, eax
0x5AB5B0: jz      short loc_5AB5BC
0x5AB5B2: mov     edx, [eax]
0x5AB5B4: mov     ecx, eax
0x5AB5B6: mov     eax, [edx]
0x5AB5B8: push    1
0x5AB5BA: call    eax
0x5AB5BC: push    esi
0x5AB5BD: push    edi
0x5AB5BE: push    1; arg1
0x5AB5C0: push    0; canCreate
0x5AB5C2: call    InterfaceManager_GetSingleton
0x5AB5C7: add     esp, 8
0x5AB5CA: mov     esi, eax
0x5AB5CC: call    InterfaceManager_GetDepth
0x5AB5D1: fstp    [esp+10h+var_8]
0x5AB5D5: mov     ecx, [esi+68h]; this
0x5AB5D8: push    offset aDataMenusMainI; "Data\\Menus\\Main\\inventory_menu.xml"
0x5AB5DD: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x5AB5E2: mov     esi, eax
0x5AB5E4: mov     ecx, esi
0x5AB5E6: call    Tile_GetParentMenu
0x5AB5EB: mov     edi, eax
0x5AB5ED: push    edi; int
0x5AB5EE: push    offset aDataMenusMainI; "Data\\Menus\\Main\\inventory_menu.xml"
0x5AB5F3: call    sub_584670
0x5AB5F8: add     esp, 8
0x5AB5FB: test    edi, edi
0x5AB5FD: jz      loc_5AB7F0
0x5AB603: mov     edx, [edi]
0x5AB605: mov     eax, [edx+34h]
0x5AB608: mov     ecx, edi
0x5AB60A: call    eax
0x5AB60C: cmp     eax, 3EAh
0x5AB611: jnz     loc_5AB7E0
0x5AB617: push    ebx
0x5AB618: push    0
0x5AB61A: push    offset ??_R0?AVTileMenu@@@8; TileMenu `RTTI Type Descriptor'
0x5AB61F: push    offset ??_R0?AVTile@@@8; Tile `RTTI Type Descriptor'
0x5AB624: push    0
0x5AB7E0: cmp     dword ptr [edi+4], 0
0x5AB7E4: jz      short loc_5AB7F0
0x5AB7E6: mov     edx, [edi]
0x5AB7E8: mov     eax, [edx]
0x5AB7EA: push    1
0x5AB7EC: mov     ecx, edi
0x5AB7EE: call    eax
0x5AB7F0: pop     edi
0x5AB7F1: xor     eax, eax
0x5AB7F3: pop     esi
0x5AB7F4: pop     ecx
0x5AB7F5: retn
