0x57BAC0: push    1; arg1
0x57BAC2: push    0; canCreate
0x57BAC4: call    InterfaceManager_GetSingleton
0x57BAC9: add     esp, 8
0x57BACC: test    eax, eax
0x57BACE: jz      short loc_57BB15
0x57BAD0: push    1; arg1
0x57BAD2: push    0; canCreate
0x57BAD4: call    InterfaceManager_GetSingleton
0x57BAD9: add     esp, 8
0x57BADC: cmp     dword ptr [eax+1Ch], 0
0x57BAE0: jz      short loc_57BB15
0x57BAE2: push    3EFh
0x57BAE7: call    Menu_GetOpenMenuTile
0x57BAEC: add     esp, 4
0x57BAEF: test    eax, eax
0x57BAF1: jz      short loc_57BB12
0x57BAF3: push    0FA1h
0x57BAF8: mov     ecx, eax
0x57BAFA: call    Tile_GetFloat
0x57BAFF: fcomp   dword ptr ds:0A2F948h
0x57BB05: fnstsw  ax
0x57BB07: test    ah, 44h
0x57BB0A: jnp     short loc_57BB12
0x57BB0C: mov     eax, 1
0x57BB11: retn
0x57BB12: xor     eax, eax
0x57BB14: retn
0x57BB15: xor     al, al
0x57BB17: retn
