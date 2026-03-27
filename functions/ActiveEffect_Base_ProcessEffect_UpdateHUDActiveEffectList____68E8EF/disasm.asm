0x68E8EF: cmp     byte ptr [esi+11h], 0
0x68E8F3: jnz     short ActiveEffect_Base_ProcessEffect___CheckForExpiration
0x68E8F5: cmp     byte ptr [esi+12h], 0
0x68E8F9: jnz     short ActiveEffect_Base_ProcessEffect___CheckForExpiration
0x68E8FB: mov     ecx, [esi+20h]
0x68E8FE: mov     edx, [ecx]
0x68E900: mov     eax, [edx+4]
0x68E903: call    eax
0x68E905: cmp     eax, ds:0B333C4h
0x68E90B: jnz     short ActiveEffect_Base_ProcessEffect___CheckForExpiration
0x68E90D: push    3ECh
0x68E912: call    Menu_GetOpenMenuTile
0x68E917: add     esp, 4
0x68E91A: mov     ecx, eax
0x68E91C: call    Tile_GetParentMenu
0x68E921: push    0
0x68E923: push    esi
0x68E924: mov     ecx, eax
0x68E926: call    HUDMainMenu_UpdateActiveEffects
