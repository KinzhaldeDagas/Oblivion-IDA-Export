0x68E7DF: mov     ecx, [esi+20h]
0x68E7E2: mov     edx, [ecx]
0x68E7E4: mov     eax, [edx+4]
0x68E7E7: call    eax
0x68E7E9: cmp     eax, ds:0B333C4h
0x68E7EF: jnz     short ActiveEffect_Base_ProcessEffect___InitActvEffect
0x68E7F1: push    3ECh
0x68E7F6: call    Menu_GetOpenMenuTile
0x68E7FB: add     esp, 4
0x68E7FE: mov     ecx, eax
0x68E800: call    Tile_GetParentMenu
0x68E805: push    0
0x68E807: push    esi
0x68E808: mov     ecx, eax
0x68E80A: call    HUDMainMenu_UpdateActiveEffects
