0x57AFB0: push    1; arg1
0x57AFB2: push    0; canCreate
0x57AFB4: call    InterfaceManager_GetSingleton
0x57AFB9: add     esp, 8
0x57AFBC: test    eax, eax
0x57AFBE: jz      locret_57B046
0x57AFC4: push    1; arg1
0x57AFC6: push    0; canCreate
0x57AFC8: call    InterfaceManager_GetSingleton
0x57AFCD: add     esp, 8
0x57AFD0: cmp     dword ptr [eax+1Ch], 0
0x57AFD4: jz      short locret_57B046
0x57AFD6: push    1; arg1
0x57AFD8: push    0; canCreate
0x57AFDA: call    InterfaceManager_GetSingleton
0x57AFDF: add     esp, 8
0x57AFE2: cmp     dword ptr [eax+68h], 0
0x57AFE6: jz      short locret_57B046
0x57AFE8: push    1; arg1
0x57AFEA: push    0; canCreate
0x57AFEC: call    InterfaceManager_GetSingleton
0x57AFF1: mov     eax, [eax+68h]
0x57AFF4: add     esp, 8
0x57AFF7: push    0FAEh
0x57AFFC: mov     ecx, eax
0x57AFFE: call    Tile_GetFloat
0x57B003: fcomp   dword ptr ds:0A379B4h
0x57B009: fnstsw  ax
0x57B00B: test    ah, 44h
0x57B00E: jp      short locret_57B046
0x57B010: push    0; int
0x57B012: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57B017: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B01C: push    0; int
0x57B01E: push    3F2h
0x57B023: call    Menu_GetOpenMenuTile
0x57B028: add     esp, 4
0x57B02B: mov     ecx, eax
0x57B02D: call    Tile_GetParentMenu
0x57B032: push    eax; void *
0x57B033: call    OblivionDynamicCast
0x57B038: add     esp, 14h
0x57B03B: test    eax, eax
0x57B03D: jz      short locret_57B046
0x57B03F: mov     ecx, eax
0x57B041: jmp     sub_5A9280
0x57B046: retn
