0x57B600: push    1; arg1
0x57B602: push    0; canCreate
0x57B604: call    InterfaceManager_GetSingleton
0x57B609: add     esp, 8
0x57B60C: test    eax, eax
0x57B60E: jz      locret_57B694
0x57B614: push    1; arg1
0x57B616: push    0; canCreate
0x57B618: call    InterfaceManager_GetSingleton
0x57B61D: add     esp, 8
0x57B620: cmp     dword ptr [eax+1Ch], 0
0x57B624: jz      short locret_57B694
0x57B626: push    1; arg1
0x57B628: push    0; canCreate
0x57B62A: call    InterfaceManager_GetSingleton
0x57B62F: add     esp, 8
0x57B632: cmp     dword ptr [eax+68h], 0
0x57B636: jz      short locret_57B694
0x57B638: push    1; arg1
0x57B63A: push    0; canCreate
0x57B63C: call    InterfaceManager_GetSingleton
0x57B641: mov     eax, [eax+68h]
0x57B644: add     esp, 8
0x57B647: push    0FAEh
0x57B64C: mov     ecx, eax
0x57B64E: call    Tile_GetFloat
0x57B653: fcomp   dword ptr ds:0A379B4h
0x57B659: fnstsw  ax
0x57B65B: test    ah, 44h
0x57B65E: jp      short locret_57B694
0x57B660: push    0; int
0x57B662: push    offset ??_R0?AVPauseMenu@@@8; struct TypeDescriptor *
0x57B667: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B66C: push    0; int
0x57B66E: push    3F5h
0x57B673: call    Menu_GetOpenMenuTile
0x57B678: add     esp, 4
0x57B67B: mov     ecx, eax
0x57B67D: call    Tile_GetParentMenu
0x57B682: push    eax; void *
0x57B683: call    OblivionDynamicCast
0x57B688: add     esp, 14h
0x57B68B: test    eax, eax
0x57B68D: jnz     short locret_57B694
0x57B68F: jmp     sub_5BDCD0
0x57B694: retn
