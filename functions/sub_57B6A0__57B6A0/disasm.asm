0x57B6A0: push    1; arg1
0x57B6A2: push    0; canCreate
0x57B6A4: call    InterfaceManager_GetSingleton
0x57B6A9: add     esp, 8
0x57B6AC: test    eax, eax
0x57B6AE: jz      locret_57B73E
0x57B6B4: push    1; arg1
0x57B6B6: push    0; canCreate
0x57B6B8: call    InterfaceManager_GetSingleton
0x57B6BD: add     esp, 8
0x57B6C0: cmp     dword ptr [eax+1Ch], 0
0x57B6C4: jz      short locret_57B73E
0x57B6C6: push    1; arg1
0x57B6C8: push    0; canCreate
0x57B6CA: call    InterfaceManager_GetSingleton
0x57B6CF: add     esp, 8
0x57B6D2: cmp     dword ptr [eax+68h], 0
0x57B6D6: jz      short locret_57B73E
0x57B6D8: push    1; arg1
0x57B6DA: push    0; canCreate
0x57B6DC: call    InterfaceManager_GetSingleton
0x57B6E1: mov     eax, [eax+68h]
0x57B6E4: add     esp, 8
0x57B6E7: push    0FAEh
0x57B6EC: mov     ecx, eax
0x57B6EE: call    Tile_GetFloat
0x57B6F3: fcomp   dword ptr ds:0A379B4h
0x57B6F9: fnstsw  ax
0x57B6FB: test    ah, 44h
0x57B6FE: jp      short locret_57B73E
0x57B700: push    0; int
0x57B702: push    offset ??_R0?AVLockPickMenu@@@8; struct TypeDescriptor *
0x57B707: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B70C: push    0; int
0x57B70E: push    3F6h
0x57B713: call    Menu_GetOpenMenuTile
0x57B718: add     esp, 4
0x57B71B: mov     ecx, eax
0x57B71D: call    Tile_GetParentMenu
0x57B722: push    eax; void *
0x57B723: call    OblivionDynamicCast
0x57B728: add     esp, 14h
0x57B72B: test    eax, eax
0x57B72D: jz      short loc_57B739
0x57B72F: mov     edx, [eax]
0x57B731: mov     ecx, eax
0x57B733: mov     eax, [edx]
0x57B735: push    1
0x57B737: call    eax
0x57B739: jmp     sub_5AF440
0x57B73E: retn
