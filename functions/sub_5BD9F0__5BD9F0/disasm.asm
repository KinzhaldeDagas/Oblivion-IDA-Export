0x5BD9F0: push    3F5h
0x5BD9F5: call    Menu_GetOpenMenuTile
0x5BD9FA: add     esp, 4
0x5BD9FD: test    eax, eax
0x5BD9FF: jz      short locret_5BDA13
0x5BDA01: mov     ecx, eax
0x5BDA03: call    Tile_GetParentMenu
0x5BDA08: test    eax, eax
0x5BDA0A: jz      short locret_5BDA13
0x5BDA0C: mov     ecx, eax; int
0x5BDA0E: jmp     sub_584740
0x5BDA13: retn
