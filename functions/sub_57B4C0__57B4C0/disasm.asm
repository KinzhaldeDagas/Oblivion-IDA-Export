0x57B4C0: push    1; arg1
0x57B4C2: push    0; canCreate
0x57B4C4: call    InterfaceManager_GetSingleton
0x57B4C9: add     esp, 8
0x57B4CC: test    eax, eax
0x57B4CE: jz      locret_57B554
0x57B4D4: push    1; arg1
0x57B4D6: push    0; canCreate
0x57B4D8: call    InterfaceManager_GetSingleton
0x57B4DD: add     esp, 8
0x57B4E0: cmp     dword ptr [eax+1Ch], 0
0x57B4E4: jz      short locret_57B554
0x57B4E6: push    1; arg1
0x57B4E8: push    0; canCreate
0x57B4EA: call    InterfaceManager_GetSingleton
0x57B4EF: add     esp, 8
0x57B4F2: cmp     dword ptr [eax+68h], 0
0x57B4F6: jz      short locret_57B554
0x57B4F8: push    1; arg1
0x57B4FA: push    0; canCreate
0x57B4FC: call    InterfaceManager_GetSingleton
0x57B501: mov     eax, [eax+68h]
0x57B504: add     esp, 8
0x57B507: push    0FAEh
0x57B50C: mov     ecx, eax
0x57B50E: call    Tile_GetFloat
0x57B513: fcomp   dword ptr ds:0A379B4h
0x57B519: fnstsw  ax
0x57B51B: test    ah, 44h
0x57B51E: jp      short locret_57B554
0x57B520: push    0; int
0x57B522: push    offset ??_R0?AVSleepWaitMenu@@@8; struct TypeDescriptor *
0x57B527: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B52C: push    0; int
0x57B52E: push    3F4h
0x57B533: call    Menu_GetOpenMenuTile
0x57B538: add     esp, 4
0x57B53B: mov     ecx, eax
0x57B53D: call    Tile_GetParentMenu
0x57B542: push    eax; void *
0x57B543: call    OblivionDynamicCast
0x57B548: add     esp, 14h
0x57B54B: test    eax, eax
0x57B54D: jz      short locret_57B554
0x57B54F: jmp     ClsoeSleepWaitMenu
0x57B554: retn
