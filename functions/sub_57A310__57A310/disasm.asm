0x57A310: push    1; arg1
0x57A312: push    0; canCreate
0x57A314: call    InterfaceManager_GetSingleton
0x57A319: add     esp, 8
0x57A31C: test    eax, eax
0x57A31E: jz      short loc_57A39F
0x57A320: push    1; arg1
0x57A322: push    0; canCreate
0x57A324: call    InterfaceManager_GetSingleton
0x57A329: add     esp, 8
0x57A32C: cmp     dword ptr [eax+1Ch], 0
0x57A330: jz      short loc_57A39F
0x57A332: push    1; arg1
0x57A334: push    0; canCreate
0x57A336: call    InterfaceManager_GetSingleton
0x57A33B: add     esp, 8
0x57A33E: cmp     dword ptr [eax+68h], 0
0x57A342: jz      short loc_57A39F
0x57A344: push    1; arg1
0x57A346: push    0; canCreate
0x57A348: call    InterfaceManager_GetSingleton
0x57A34D: mov     eax, [eax+68h]
0x57A350: add     esp, 8
0x57A353: push    0FAEh
0x57A358: mov     ecx, eax
0x57A35A: call    Tile_GetFloat
0x57A35F: fcomp   dword ptr ds:0A379B4h
0x57A365: fnstsw  ax
0x57A367: test    ah, 44h
0x57A36A: jp      short loc_57A39F
0x57A36C: push    3EAh
0x57A371: call    Menu_GetOpenMenuTile
0x57A376: add     esp, 4
0x57A379: test    eax, eax
0x57A37B: jz      short loc_57A39C
0x57A37D: push    0FA1h
0x57A382: mov     ecx, eax
0x57A384: call    Tile_GetFloat
0x57A389: fcomp   dword ptr ds:0A2F948h
0x57A38F: fnstsw  ax
0x57A391: test    ah, 44h
0x57A394: jnp     short loc_57A39C
0x57A396: mov     eax, 1
0x57A39B: retn
0x57A39C: xor     eax, eax
0x57A39E: retn
0x57A39F: xor     al, al
0x57A3A1: retn
