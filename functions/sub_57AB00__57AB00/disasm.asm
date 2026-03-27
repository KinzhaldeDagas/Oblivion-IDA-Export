0x57AB00: push    1; arg1
0x57AB02: push    0; canCreate
0x57AB04: call    InterfaceManager_GetSingleton
0x57AB09: add     esp, 8
0x57AB0C: test    eax, eax
0x57AB0E: jz      short loc_57AB61
0x57AB10: push    1; arg1
0x57AB12: push    0; canCreate
0x57AB14: call    InterfaceManager_GetSingleton
0x57AB19: add     esp, 8
0x57AB1C: cmp     dword ptr [eax+1Ch], 0
0x57AB20: jz      short loc_57AB61
0x57AB22: push    1; arg1
0x57AB24: push    0; canCreate
0x57AB26: call    InterfaceManager_GetSingleton
0x57AB2B: add     esp, 8
0x57AB2E: cmp     dword ptr [eax+68h], 0
0x57AB32: jz      short loc_57AB61
0x57AB34: push    1; arg1
0x57AB36: push    0; canCreate
0x57AB38: call    InterfaceManager_GetSingleton
0x57AB3D: mov     eax, [eax+68h]
0x57AB40: add     esp, 8
0x57AB43: push    0FAEh
0x57AB48: mov     ecx, eax
0x57AB4A: call    Tile_GetFloat
0x57AB4F: fcomp   dword ptr ds:0A379B4h
0x57AB55: fnstsw  ax
0x57AB57: test    ah, 44h
0x57AB5A: jp      short loc_57AB61
0x57AB5C: jmp     loc_59ED30
0x57AB61: xor     eax, eax
0x57AB63: retn
