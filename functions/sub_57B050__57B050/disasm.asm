0x57B050: push    1; arg1
0x57B052: push    0; canCreate
0x57B054: call    InterfaceManager_GetSingleton
0x57B059: add     esp, 8
0x57B05C: test    eax, eax
0x57B05E: jz      loc_57B0EC
0x57B064: push    1; arg1
0x57B066: push    0; canCreate
0x57B068: call    InterfaceManager_GetSingleton
0x57B06D: add     esp, 8
0x57B070: cmp     dword ptr [eax+1Ch], 0
0x57B074: jz      short loc_57B0EC
0x57B076: push    1; arg1
0x57B078: push    0; canCreate
0x57B07A: call    InterfaceManager_GetSingleton
0x57B07F: add     esp, 8
0x57B082: cmp     dword ptr [eax+68h], 0
0x57B086: jz      short loc_57B0EC
0x57B088: push    1; arg1
0x57B08A: push    0; canCreate
0x57B08C: call    InterfaceManager_GetSingleton
0x57B091: mov     eax, [eax+68h]
0x57B094: add     esp, 8
0x57B097: push    0FAEh
0x57B09C: mov     ecx, eax
0x57B09E: call    Tile_GetFloat
0x57B0A3: fcomp   dword ptr ds:0A379B4h
0x57B0A9: fnstsw  ax
0x57B0AB: test    ah, 44h
0x57B0AE: jp      short loc_57B0EC
0x57B0B0: push    0; int
0x57B0B2: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57B0B7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B0BC: push    0; int
0x57B0BE: push    3F2h
0x57B0C3: call    Menu_GetOpenMenuTile
0x57B0C8: add     esp, 4
0x57B0CB: mov     ecx, eax
0x57B0CD: call    Tile_GetParentMenu
0x57B0D2: push    eax; void *
0x57B0D3: call    OblivionDynamicCast
0x57B0D8: add     esp, 14h
0x57B0DB: test    eax, eax
0x57B0DD: jz      short loc_57B0EC
0x57B0DF: mov     ecx, [esp+arg_0]
0x57B0E3: push    ecx
0x57B0E4: mov     ecx, eax
0x57B0E6: call    sub_5A8F80
0x57B0EB: retn
0x57B0EC: xor     al, al
0x57B0EE: retn
