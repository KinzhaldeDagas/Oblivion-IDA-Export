0x68E9BC: mov     ecx, [esi+20h]
0x68E9BF: test    ecx, ecx
0x68E9C1: jz      short ActiveEffect_Base_ProcessEffect___RemoveEffect
0x68E9C3: mov     edx, [ecx]
0x68E9C5: mov     eax, [edx+4]
0x68E9C8: call    eax
0x68E9CA: cmp     eax, ds:0B333C4h
0x68E9D0: jnz     short ActiveEffect_Base_ProcessEffect___RemoveEffect
0x68E9D2: push    3ECh
0x68E9D7: call    Menu_GetOpenMenuTile
0x68E9DC: add     esp, 4
0x68E9DF: mov     ecx, eax
0x68E9E1: call    Tile_GetParentMenu
0x68E9E6: push    1
0x68E9E8: push    esi
0x68E9E9: mov     ecx, eax
0x68E9EB: call    HUDMainMenu_UpdateActiveEffects
