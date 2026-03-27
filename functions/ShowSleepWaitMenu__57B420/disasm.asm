0x57B420: push    1; arg1
0x57B422: push    0; canCreate
0x57B424: call    InterfaceManager_GetSingleton
0x57B429: add     esp, 8
0x57B42C: test    eax, eax
0x57B42E: jz      locret_57B4BE
0x57B434: push    1; arg1
0x57B436: push    0; canCreate
0x57B438: call    InterfaceManager_GetSingleton
0x57B43D: add     esp, 8
0x57B440: cmp     dword ptr [eax+1Ch], 0
0x57B444: jz      short locret_57B4BE
0x57B446: push    1; arg1
0x57B448: push    0; canCreate
0x57B44A: call    InterfaceManager_GetSingleton
0x57B44F: add     esp, 8
0x57B452: cmp     dword ptr [eax+68h], 0
0x57B456: jz      short locret_57B4BE
0x57B458: push    1; arg1
0x57B45A: push    0; canCreate
0x57B45C: call    InterfaceManager_GetSingleton
0x57B461: mov     eax, [eax+68h]
0x57B464: add     esp, 8
0x57B467: push    0FAEh
0x57B46C: mov     ecx, eax
0x57B46E: call    Tile_GetFloat
0x57B473: fcomp   dword ptr ds:0A379B4h
0x57B479: fnstsw  ax
0x57B47B: test    ah, 44h
0x57B47E: jp      short locret_57B4BE
0x57B480: push    0; int
0x57B482: push    offset ??_R0?AVSleepWaitMenu@@@8; struct TypeDescriptor *
0x57B487: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B48C: push    0; int
0x57B48E: push    3F4h
0x57B493: call    Menu_GetOpenMenuTile
0x57B498: add     esp, 4
0x57B49B: mov     ecx, eax
0x57B49D: call    Tile_GetParentMenu
0x57B4A2: push    eax; void *
0x57B4A3: call    OblivionDynamicCast
0x57B4A8: add     esp, 14h
0x57B4AB: test    eax, eax
0x57B4AD: jz      short loc_57B4B9
0x57B4AF: mov     edx, [eax]
0x57B4B1: mov     ecx, eax
0x57B4B3: mov     eax, [edx]
0x57B4B5: push    1
0x57B4B7: call    eax
0x57B4B9: jmp     loc_5D6D20
0x57B4BE: retn
