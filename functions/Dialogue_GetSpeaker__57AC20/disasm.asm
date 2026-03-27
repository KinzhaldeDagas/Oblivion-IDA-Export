0x57AC20: push    1; arg1
0x57AC22: push    0; canCreate
0x57AC24: call    InterfaceManager_GetSingleton
0x57AC29: add     esp, 8
0x57AC2C: test    eax, eax
0x57AC2E: jz      short loc_57ACAF
0x57AC30: push    1; arg1
0x57AC32: push    0; canCreate
0x57AC34: call    InterfaceManager_GetSingleton
0x57AC39: add     esp, 8
0x57AC3C: cmp     dword ptr [eax+1Ch], 0
0x57AC40: jz      short loc_57ACAF
0x57AC42: push    1; arg1
0x57AC44: push    0; canCreate
0x57AC46: call    InterfaceManager_GetSingleton
0x57AC4B: add     esp, 8
0x57AC4E: cmp     dword ptr [eax+68h], 0
0x57AC52: jz      short loc_57ACAF
0x57AC54: push    1; arg1
0x57AC56: push    0; canCreate
0x57AC58: call    InterfaceManager_GetSingleton
0x57AC5D: mov     eax, [eax+68h]
0x57AC60: add     esp, 8
0x57AC63: push    0FAEh
0x57AC68: mov     ecx, eax
0x57AC6A: call    Tile_GetFloat
0x57AC6F: fcomp   dword ptr ds:0A379B4h
0x57AC75: fnstsw  ax
0x57AC77: test    ah, 44h
0x57AC7A: jp      short loc_57ACAF
0x57AC7C: push    0; int
0x57AC7E: push    offset ??_R0?AVDialogMenu@@@8; struct TypeDescriptor *
0x57AC83: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57AC88: push    0; int
0x57AC8A: push    3F1h
0x57AC8F: call    Menu_GetOpenMenuTile
0x57AC94: add     esp, 4
0x57AC97: mov     ecx, eax
0x57AC99: call    Tile_GetParentMenu
0x57AC9E: push    eax; void *
0x57AC9F: call    OblivionDynamicCast
0x57ACA4: add     esp, 14h
0x57ACA7: test    eax, eax
0x57ACA9: jz      short loc_57ACAF
0x57ACAB: mov     eax, [eax+60h]
0x57ACAE: retn
0x57ACAF: xor     eax, eax
0x57ACB1: retn
