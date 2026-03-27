0x57AB70: push    1; arg1
0x57AB72: push    0; canCreate
0x57AB74: call    InterfaceManager_GetSingleton
0x57AB79: add     esp, 8
0x57AB7C: test    eax, eax
0x57AB7E: jz      loc_57AC0E
0x57AB84: push    1; arg1
0x57AB86: push    0; canCreate
0x57AB88: call    InterfaceManager_GetSingleton
0x57AB8D: add     esp, 8
0x57AB90: cmp     dword ptr [eax+1Ch], 0
0x57AB94: jz      short loc_57AC0E
0x57AB96: push    1; arg1
0x57AB98: push    0; canCreate
0x57AB9A: call    InterfaceManager_GetSingleton
0x57AB9F: add     esp, 8
0x57ABA2: cmp     dword ptr [eax+68h], 0
0x57ABA6: jz      short loc_57AC0E
0x57ABA8: push    1; arg1
0x57ABAA: push    0; canCreate
0x57ABAC: call    InterfaceManager_GetSingleton
0x57ABB1: mov     eax, [eax+68h]
0x57ABB4: add     esp, 8
0x57ABB7: push    0FAEh
0x57ABBC: mov     ecx, eax
0x57ABBE: call    Tile_GetFloat
0x57ABC3: fcomp   dword ptr ds:0A379B4h
0x57ABC9: fnstsw  ax
0x57ABCB: test    ah, 44h
0x57ABCE: jp      short loc_57AC0E
0x57ABD0: push    0; int
0x57ABD2: push    offset ??_R0?AVDialogMenu@@@8; struct TypeDescriptor *
0x57ABD7: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57ABDC: push    0; int
0x57ABDE: push    3F1h
0x57ABE3: call    Menu_GetOpenMenuTile
0x57ABE8: add     esp, 4
0x57ABEB: mov     ecx, eax
0x57ABED: call    Tile_GetParentMenu
0x57ABF2: push    eax; void *
0x57ABF3: call    OblivionDynamicCast
0x57ABF8: add     esp, 14h
0x57ABFB: test    eax, eax
0x57ABFD: jz      short loc_57AC0B
0x57ABFF: cmp     byte ptr [eax+64h], 0
0x57AC03: jz      short loc_57AC0B
0x57AC05: mov     eax, 1
0x57AC0A: retn
0x57AC0B: xor     eax, eax
0x57AC0D: retn
0x57AC0E: xor     al, al
0x57AC10: retn
