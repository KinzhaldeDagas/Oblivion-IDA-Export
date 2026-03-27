0x57B2D0: push    1; arg1
0x57B2D2: push    0; canCreate
0x57B2D4: call    InterfaceManager_GetSingleton
0x57B2D9: add     esp, 8
0x57B2DC: test    eax, eax
0x57B2DE: jz      locret_57B36B
0x57B2E4: push    1; arg1
0x57B2E6: push    0; canCreate
0x57B2E8: call    InterfaceManager_GetSingleton
0x57B2ED: add     esp, 8
0x57B2F0: cmp     dword ptr [eax+1Ch], 0
0x57B2F4: jz      short locret_57B36B
0x57B2F6: push    1; arg1
0x57B2F8: push    0; canCreate
0x57B2FA: call    InterfaceManager_GetSingleton
0x57B2FF: add     esp, 8
0x57B302: cmp     dword ptr [eax+68h], 0
0x57B306: jz      short locret_57B36B
0x57B308: push    1; arg1
0x57B30A: push    0; canCreate
0x57B30C: call    InterfaceManager_GetSingleton
0x57B311: mov     eax, [eax+68h]
0x57B314: add     esp, 8
0x57B317: push    0FAEh
0x57B31C: mov     ecx, eax
0x57B31E: call    Tile_GetFloat
0x57B323: fcomp   dword ptr ds:0A379B4h
0x57B329: fnstsw  ax
0x57B32B: test    ah, 44h
0x57B32E: jp      short locret_57B36B
0x57B330: push    0; int
0x57B332: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x57B337: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B33C: push    0; int
0x57B33E: push    3ECh
0x57B343: call    Menu_GetOpenMenuTile
0x57B348: add     esp, 4
0x57B34B: mov     ecx, eax
0x57B34D: call    Tile_GetParentMenu
0x57B352: push    eax; void *
0x57B353: call    OblivionDynamicCast
0x57B358: add     esp, 14h
0x57B35B: test    eax, eax
0x57B35D: jz      short locret_57B36B
0x57B35F: mov     ecx, [esp+arg_0]
0x57B363: push    ecx
0x57B364: mov     ecx, eax
0x57B366: call    sub_5A62B0
0x57B36B: retn
