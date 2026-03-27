0x57B0F0: push    1; arg1
0x57B0F2: push    0; canCreate
0x57B0F4: call    InterfaceManager_GetSingleton
0x57B0F9: add     esp, 8
0x57B0FC: test    eax, eax
0x57B0FE: jz      locret_57B18B
0x57B104: push    1; arg1
0x57B106: push    0; canCreate
0x57B108: call    InterfaceManager_GetSingleton
0x57B10D: add     esp, 8
0x57B110: cmp     dword ptr [eax+1Ch], 0
0x57B114: jz      short locret_57B18B
0x57B116: push    1; arg1
0x57B118: push    0; canCreate
0x57B11A: call    InterfaceManager_GetSingleton
0x57B11F: add     esp, 8
0x57B122: cmp     dword ptr [eax+68h], 0
0x57B126: jz      short locret_57B18B
0x57B128: push    1; arg1
0x57B12A: push    0; canCreate
0x57B12C: call    InterfaceManager_GetSingleton
0x57B131: mov     eax, [eax+68h]
0x57B134: add     esp, 8
0x57B137: push    0FAEh
0x57B13C: mov     ecx, eax
0x57B13E: call    Tile_GetFloat
0x57B143: fcomp   dword ptr ds:0A379B4h
0x57B149: fnstsw  ax
0x57B14B: test    ah, 44h
0x57B14E: jp      short locret_57B18B
0x57B150: push    0; int
0x57B152: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57B157: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B15C: push    0; int
0x57B15E: push    3F2h
0x57B163: call    Menu_GetOpenMenuTile
0x57B168: add     esp, 4
0x57B16B: mov     ecx, eax
0x57B16D: call    Tile_GetParentMenu
0x57B172: push    eax; void *
0x57B173: call    OblivionDynamicCast
0x57B178: add     esp, 14h
0x57B17B: test    eax, eax
0x57B17D: jz      short locret_57B18B
0x57B17F: mov     ecx, [esp+arg_0]
0x57B183: push    ecx
0x57B184: mov     ecx, eax
0x57B186: call    sub_60E0D0
0x57B18B: retn
