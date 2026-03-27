0x57B560: push    1; arg1
0x57B562: push    0; canCreate
0x57B564: call    InterfaceManager_GetSingleton
0x57B569: add     esp, 8
0x57B56C: test    eax, eax
0x57B56E: jz      locret_57B5F4
0x57B574: push    1; arg1
0x57B576: push    0; canCreate
0x57B578: call    InterfaceManager_GetSingleton
0x57B57D: add     esp, 8
0x57B580: cmp     dword ptr [eax+1Ch], 0
0x57B584: jz      short locret_57B5F4
0x57B586: push    1; arg1
0x57B588: push    0; canCreate
0x57B58A: call    InterfaceManager_GetSingleton
0x57B58F: add     esp, 8
0x57B592: cmp     dword ptr [eax+68h], 0
0x57B596: jz      short locret_57B5F4
0x57B598: push    1; arg1
0x57B59A: push    0; canCreate
0x57B59C: call    InterfaceManager_GetSingleton
0x57B5A1: mov     eax, [eax+68h]
0x57B5A4: add     esp, 8
0x57B5A7: push    0FAEh
0x57B5AC: mov     ecx, eax
0x57B5AE: call    Tile_GetFloat
0x57B5B3: fcomp   dword ptr ds:0A379B4h
0x57B5B9: fnstsw  ax
0x57B5BB: test    ah, 44h
0x57B5BE: jp      short locret_57B5F4
0x57B5C0: push    0; int
0x57B5C2: push    offset ??_R0?AVPauseMenu@@@8; struct TypeDescriptor *
0x57B5C7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B5CC: push    0; int
0x57B5CE: push    3F5h
0x57B5D3: call    Menu_GetOpenMenuTile
0x57B5D8: add     esp, 4
0x57B5DB: mov     ecx, eax
0x57B5DD: call    Tile_GetParentMenu
0x57B5E2: push    eax; void *
0x57B5E3: call    OblivionDynamicCast
0x57B5E8: add     esp, 14h
0x57B5EB: test    eax, eax
0x57B5ED: jnz     short locret_57B5F4
0x57B5EF: jmp     sub_5BDA90
0x57B5F4: retn
