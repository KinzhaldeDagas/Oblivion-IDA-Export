0x5A68C0: push    esi
0x5A68C1: push    3ECh
0x5A68C6: call    Menu_GetOpenMenuTile
0x5A68CB: mov     esi, eax
0x5A68CD: add     esp, 4
0x5A68D0: test    esi, esi
0x5A68D2: jz      short loc_5A6937
0x5A68D4: mov     ecx, esi
0x5A68D6: call    Tile_GetParentMenu
0x5A68DB: test    eax, eax
0x5A68DD: jz      short loc_5A6937
0x5A68DF: push    0FB1h
0x5A68E4: mov     ecx, esi
0x5A68E6: call    sub_589390
0x5A68EB: mov     ecx, eax
0x5A68ED: call    Tile_GetFloat
0x5A68F2: fcomp   dword ptr ds:0A2FAA8h
0x5A68F8: fnstsw  ax
0x5A68FA: test    ah, 44h
0x5A68FD: jp      short loc_5A6937
0x5A68FF: mov     eax, [esp+4+arg_0]
0x5A6903: cmp     eax, 9
0x5A6906: jnz     short loc_5A6911
0x5A6908: call    sub_5A5E80
0x5A690D: pop     esi
0x5A690E: retn    8
0x5A6911: cmp     eax, 0Ah
0x5A6914: jnz     short loc_5A691F
0x5A6916: call    sub_5A5EF0
0x5A691B: pop     esi
0x5A691C: retn    8
0x5A691F: cmp     eax, 0Bh
0x5A6922: jnz     short loc_5A692D
0x5A6924: call    sub_5A5F60
0x5A6929: pop     esi
0x5A692A: retn    8
0x5A692D: cmp     eax, 0Ch
0x5A6930: jnz     short loc_5A6937
0x5A6932: call    sub_5A5FD0
0x5A6937: pop     esi
0x5A6938: retn    8
