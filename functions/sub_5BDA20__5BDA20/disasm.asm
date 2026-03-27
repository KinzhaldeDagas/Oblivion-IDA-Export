0x5BDA20: push    3F5h
0x5BDA25: call    Menu_GetOpenMenuTile
0x5BDA2A: add     esp, 4
0x5BDA2D: test    eax, eax
0x5BDA2F: jz      short locret_5BDA43
0x5BDA31: mov     ecx, eax
0x5BDA33: call    Tile_GetParentMenu
0x5BDA38: test    eax, eax
0x5BDA3A: jz      short locret_5BDA43
0x5BDA3C: mov     ecx, eax; int
0x5BDA3E: jmp     sub_584390
0x5BDA43: retn
