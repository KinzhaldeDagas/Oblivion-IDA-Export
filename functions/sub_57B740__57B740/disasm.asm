0x57B740: push    1; arg1
0x57B742: push    0; canCreate
0x57B744: call    InterfaceManager_GetSingleton
0x57B749: add     esp, 8
0x57B74C: test    eax, eax
0x57B74E: jz      locret_57B7DE
0x57B754: push    1; arg1
0x57B756: push    0; canCreate
0x57B758: call    InterfaceManager_GetSingleton
0x57B75D: add     esp, 8
0x57B760: cmp     dword ptr [eax+1Ch], 0
0x57B764: jz      short locret_57B7DE
0x57B766: push    1; arg1
0x57B768: push    0; canCreate
0x57B76A: call    InterfaceManager_GetSingleton
0x57B76F: add     esp, 8
0x57B772: cmp     dword ptr [eax+68h], 0
0x57B776: jz      short locret_57B7DE
0x57B778: push    1; arg1
0x57B77A: push    0; canCreate
0x57B77C: call    InterfaceManager_GetSingleton
0x57B781: mov     eax, [eax+68h]
0x57B784: add     esp, 8
0x57B787: push    0FAEh
0x57B78C: mov     ecx, eax
0x57B78E: call    Tile_GetFloat
0x57B793: fcomp   dword ptr ds:0A379B4h
0x57B799: fnstsw  ax
0x57B79B: test    ah, 44h
0x57B79E: jp      short locret_57B7DE
0x57B7A0: push    0; int
0x57B7A2: push    offset ??_R0?AVBookMenu@@@8; struct TypeDescriptor *
0x57B7A7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B7AC: push    0; int
0x57B7AE: push    402h
0x57B7B3: call    Menu_GetOpenMenuTile
0x57B7B8: add     esp, 4
0x57B7BB: mov     ecx, eax
0x57B7BD: call    Tile_GetParentMenu
0x57B7C2: push    eax; void *
0x57B7C3: call    OblivionDynamicCast
0x57B7C8: add     esp, 14h
0x57B7CB: test    eax, eax
0x57B7CD: jz      short loc_57B7D9
0x57B7CF: mov     edx, [eax]
0x57B7D1: mov     ecx, eax
0x57B7D3: mov     eax, [edx]
0x57B7D5: push    1
0x57B7D7: call    eax
0x57B7D9: jmp     sub_5962C0
0x57B7DE: retn
