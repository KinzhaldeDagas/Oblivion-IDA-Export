0x57A1C0: push    1; arg1
0x57A1C2: push    0; canCreate
0x57A1C4: call    InterfaceManager_GetSingleton
0x57A1C9: add     esp, 8
0x57A1CC: test    eax, eax
0x57A1CE: jz      short loc_57A24F
0x57A1D0: push    1; arg1
0x57A1D2: push    0; canCreate
0x57A1D4: call    InterfaceManager_GetSingleton
0x57A1D9: add     esp, 8
0x57A1DC: cmp     dword ptr [eax+1Ch], 0
0x57A1E0: jz      short loc_57A24F
0x57A1E2: push    1; arg1
0x57A1E4: push    0; canCreate
0x57A1E6: call    InterfaceManager_GetSingleton
0x57A1EB: add     esp, 8
0x57A1EE: cmp     dword ptr [eax+68h], 0
0x57A1F2: jz      short loc_57A24F
0x57A1F4: push    1; arg1
0x57A1F6: push    0; canCreate
0x57A1F8: call    InterfaceManager_GetSingleton
0x57A1FD: mov     eax, [eax+68h]
0x57A200: add     esp, 8
0x57A203: push    0FAEh
0x57A208: mov     ecx, eax
0x57A20A: call    Tile_GetFloat
0x57A20F: fcomp   dword ptr ds:0A379B4h
0x57A215: fnstsw  ax
0x57A217: test    ah, 44h
0x57A21A: jp      short loc_57A24F
0x57A21C: push    3FEh
0x57A221: call    Menu_GetOpenMenuTile
0x57A226: add     esp, 4
0x57A229: test    eax, eax
0x57A22B: jz      short loc_57A24C
0x57A22D: push    0FA1h
0x57A232: mov     ecx, eax
0x57A234: call    Tile_GetFloat
0x57A239: fcomp   dword ptr ds:0A2F948h
0x57A23F: fnstsw  ax
0x57A241: test    ah, 44h
0x57A244: jnp     short loc_57A24C
0x57A246: mov     eax, 1
0x57A24B: retn
0x57A24C: xor     eax, eax
0x57A24E: retn
0x57A24F: xor     al, al
0x57A251: retn
