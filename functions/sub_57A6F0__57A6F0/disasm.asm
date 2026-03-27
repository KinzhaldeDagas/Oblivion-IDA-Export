0x57A6F0: push    1; arg1
0x57A6F2: push    0; canCreate
0x57A6F4: call    InterfaceManager_GetSingleton
0x57A6F9: add     esp, 8
0x57A6FC: test    eax, eax
0x57A6FE: jz      nullsub_2
0x57A704: push    1; arg1
0x57A706: push    0; canCreate
0x57A708: call    InterfaceManager_GetSingleton
0x57A70D: add     esp, 8
0x57A710: cmp     dword ptr [eax+1Ch], 0
0x57A714: jz      nullsub_2
0x57A71A: push    1; arg1
0x57A71C: push    0; canCreate
0x57A71E: call    InterfaceManager_GetSingleton
0x57A723: add     esp, 8
0x57A726: cmp     dword ptr [eax+68h], 0
0x57A72A: jz      nullsub_2
0x57A730: push    1; arg1
0x57A732: push    0; canCreate
0x57A734: call    InterfaceManager_GetSingleton
0x57A739: mov     eax, [eax+68h]
0x57A73C: add     esp, 8
0x57A73F: push    0FAEh
0x57A744: mov     ecx, eax
0x57A746: call    Tile_GetFloat
0x57A74B: fcomp   dword ptr ds:0A379B4h
0x57A751: fnstsw  ax
0x57A753: test    ah, 44h
0x57A756: jp      short nullsub_2
0x57A758: push    esi
0x57A759: push    0; int
0x57A75B: push    offset ??_R0?AVStatsMenu@@@8; struct TypeDescriptor *
0x57A760: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57A765: push    0; int
0x57A767: push    3EBh
0x57A76C: call    Menu_GetOpenMenuTile
0x57A771: add     esp, 4
0x57A774: mov     ecx, eax
0x57A776: call    Tile_GetParentMenu
0x57A77B: push    eax; void *
0x57A77C: call    OblivionDynamicCast
0x57A781: mov     esi, [esp+18h+a2]
0x57A785: add     esp, 14h
0x57A788: test    eax, eax
0x57A78A: jz      short loc_57A794
0x57A78C: push    esi
0x57A78D: mov     ecx, eax
0x57A78F: call    sub_5DA1A0
0x57A794: push    0; int
0x57A796: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x57A79B: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57A7A0: push    0; int
0x57A7A2: push    3ECh
0x57A7A7: call    Menu_GetOpenMenuTile
0x57A7AC: add     esp, 4
0x57A7AF: mov     ecx, eax
0x57A7B1: call    Tile_GetParentMenu
0x57A7B6: push    eax; void *
0x57A7B7: call    OblivionDynamicCast
0x57A7BC: add     esp, 14h
0x57A7BF: test    eax, eax
0x57A7C1: jz      short loc_57A7CB
0x57A7C3: push    esi
0x57A7C4: mov     ecx, eax
0x57A7C6: call    sub_5A5B50
0x57A7CB: pop     esi
