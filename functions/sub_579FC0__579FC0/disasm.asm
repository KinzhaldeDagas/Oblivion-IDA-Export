0x579FC0: push    1; arg1
0x579FC2: push    0; canCreate
0x579FC4: call    InterfaceManager_GetSingleton
0x579FC9: add     esp, 8
0x579FCC: test    eax, eax
0x579FCE: jz      short loc_57A04F
0x579FD0: push    1; arg1
0x579FD2: push    0; canCreate
0x579FD4: call    InterfaceManager_GetSingleton
0x579FD9: add     esp, 8
0x579FDC: cmp     dword ptr [eax+1Ch], 0
0x579FE0: jz      short loc_57A04F
0x579FE2: push    1; arg1
0x579FE4: push    0; canCreate
0x579FE6: call    InterfaceManager_GetSingleton
0x579FEB: add     esp, 8
0x579FEE: cmp     dword ptr [eax+68h], 0
0x579FF2: jz      short loc_57A04F
0x579FF4: push    1; arg1
0x579FF6: push    0; canCreate
0x579FF8: call    InterfaceManager_GetSingleton
0x579FFD: mov     eax, [eax+68h]
0x57A000: add     esp, 8
0x57A003: push    0FAEh
0x57A008: mov     ecx, eax
0x57A00A: call    Tile_GetFloat
0x57A00F: fcomp   dword ptr ds:0A379B4h
0x57A015: fnstsw  ax
0x57A017: test    ah, 44h
0x57A01A: jp      short loc_57A04F
0x57A01C: push    3FFh
0x57A021: call    Menu_GetOpenMenuTile
0x57A026: add     esp, 4
0x57A029: test    eax, eax
0x57A02B: jz      short loc_57A04C
0x57A02D: push    0FA1h
0x57A032: mov     ecx, eax
0x57A034: call    Tile_GetFloat
0x57A039: fcomp   dword ptr ds:0A2F948h
0x57A03F: fnstsw  ax
0x57A041: test    ah, 44h
0x57A044: jnp     short loc_57A04C
0x57A046: mov     eax, 1
0x57A04B: retn
0x57A04C: xor     eax, eax
0x57A04E: retn
0x57A04F: xor     al, al
0x57A051: retn
