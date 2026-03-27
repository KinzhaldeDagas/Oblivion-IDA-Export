0x57B190: push    1; arg1
0x57B192: push    0; canCreate
0x57B194: call    InterfaceManager_GetSingleton
0x57B199: add     esp, 8
0x57B19C: test    eax, eax
0x57B19E: jz      locret_57B22B
0x57B1A4: push    1; arg1
0x57B1A6: push    0; canCreate
0x57B1A8: call    InterfaceManager_GetSingleton
0x57B1AD: add     esp, 8
0x57B1B0: cmp     dword ptr [eax+1Ch], 0
0x57B1B4: jz      short locret_57B22B
0x57B1B6: push    1; arg1
0x57B1B8: push    0; canCreate
0x57B1BA: call    InterfaceManager_GetSingleton
0x57B1BF: add     esp, 8
0x57B1C2: cmp     dword ptr [eax+68h], 0
0x57B1C6: jz      short locret_57B22B
0x57B1C8: push    1; arg1
0x57B1CA: push    0; canCreate
0x57B1CC: call    InterfaceManager_GetSingleton
0x57B1D1: mov     eax, [eax+68h]
0x57B1D4: add     esp, 8
0x57B1D7: push    0FAEh
0x57B1DC: mov     ecx, eax
0x57B1DE: call    Tile_GetFloat
0x57B1E3: fcomp   dword ptr ds:0A379B4h
0x57B1E9: fnstsw  ax
0x57B1EB: test    ah, 44h
0x57B1EE: jp      short locret_57B22B
0x57B1F0: push    0; int
0x57B1F2: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x57B1F7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B1FC: push    0; int
0x57B1FE: push    3ECh
0x57B203: call    Menu_GetOpenMenuTile
0x57B208: add     esp, 4
0x57B20B: mov     ecx, eax
0x57B20D: call    Tile_GetParentMenu
0x57B212: push    eax; void *
0x57B213: call    OblivionDynamicCast
0x57B218: add     esp, 14h
0x57B21B: test    eax, eax
0x57B21D: jz      short locret_57B22B
0x57B21F: mov     ecx, [esp+arg_0]
0x57B223: push    ecx; unsigned __int8 *
0x57B224: mov     ecx, eax
0x57B226: call    sub_5A6A40
0x57B22B: retn
