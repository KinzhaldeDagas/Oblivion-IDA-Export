0x5B59B0: push    ebx
0x5B59B1: push    esi
0x5B59B2: push    414h
0x5B59B7: call    Menu_GetOpenMenuTile
0x5B59BC: add     esp, 4
0x5B59BF: mov     esi, eax
0x5B59C1: call    sub_578D70
0x5B59C6: test    esi, esi
0x5B59C8: mov     bl, al
0x5B59CA: jz      short loc_5B59D7
0x5B59CC: mov     ecx, esi
0x5B59CE: call    Tile_GetParentMenu
0x5B59D3: mov     byte ptr [eax+4Dh], 1
0x5B59D7: cmp     bl, 1
0x5B59DA: jnz     short loc_5B5A18
0x5B59DC: test    esi, esi
0x5B59DE: jz      short loc_5B5A0D
0x5B59E0: mov     esi, 1
0x5B59E5: push    esi; arg1
0x5B59E6: push    0; canCreate
0x5B59E8: call    InterfaceManager_GetSingleton
0x5B59ED: mov     ecx, [eax+68h]
0x5B59F0: mov     ecx, [ecx+24h]
0x5B59F3: or      [ecx+18h], si
0x5B59F7: mov     edx, [eax+1Ch]
0x5B59FA: mov     ecx, [edx+24h]
0x5B59FD: or      [ecx+18h], si
0x5B5A01: add     esp, 8
0x5B5A04: push    0
0x5B5A06: mov     ecx, eax
0x5B5A08: call    MiscPass
0x5B5A0D: mov     eax, ds:0B33398h
0x5B5A12: pop     esi
0x5B5A13: mov     byte ptr [eax], 1
0x5B5A16: pop     ebx
0x5B5A17: retn
0x5B5A18: test    esi, esi
0x5B5A1A: jz      short loc_5B5A27
0x5B5A1C: mov     ecx, esi
0x5B5A1E: call    Tile_GetParentMenu
0x5B5A23: mov     byte ptr [eax+4Dh], 0
0x5B5A27: pop     esi
0x5B5A28: pop     ebx
0x5B5A29: retn
