0x57B230: push    1; arg1
0x57B232: push    0; canCreate
0x57B234: call    InterfaceManager_GetSingleton
0x57B239: add     esp, 8
0x57B23C: test    eax, eax
0x57B23E: jz      locret_57B2C8
0x57B244: push    1; arg1
0x57B246: push    0; canCreate
0x57B248: call    InterfaceManager_GetSingleton
0x57B24D: add     esp, 8
0x57B250: cmp     dword ptr [eax+1Ch], 0
0x57B254: jz      short locret_57B2C8
0x57B256: push    1; arg1
0x57B258: push    0; canCreate
0x57B25A: call    InterfaceManager_GetSingleton
0x57B25F: add     esp, 8
0x57B262: cmp     dword ptr [eax+68h], 0
0x57B266: jz      short locret_57B2C8
0x57B268: push    1; arg1
0x57B26A: push    0; canCreate
0x57B26C: call    InterfaceManager_GetSingleton
0x57B271: mov     eax, [eax+68h]
0x57B274: add     esp, 8
0x57B277: push    0FAEh
0x57B27C: mov     ecx, eax
0x57B27E: call    Tile_GetFloat
0x57B283: fcomp   dword ptr ds:0A379B4h
0x57B289: fnstsw  ax
0x57B28B: test    ah, 44h
0x57B28E: jp      short locret_57B2C8
0x57B290: push    0; int
0x57B292: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x57B297: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B29C: push    0; int
0x57B29E: push    3ECh
0x57B2A3: call    Menu_GetOpenMenuTile
0x57B2A8: add     esp, 4
0x57B2AB: mov     ecx, eax
0x57B2AD: call    Tile_GetParentMenu
0x57B2B2: push    eax; void *
0x57B2B3: call    OblivionDynamicCast
0x57B2B8: add     esp, 14h
0x57B2BB: test    eax, eax
0x57B2BD: jz      short locret_57B2C8
0x57B2BF: push    1
0x57B2C1: mov     ecx, eax
0x57B2C3: call    sub_5A6220
0x57B2C8: retn
