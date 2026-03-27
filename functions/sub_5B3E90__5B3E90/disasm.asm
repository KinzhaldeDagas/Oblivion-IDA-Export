0x5B3E90: push    400h
0x5B3E95: call    Menu_GetOpenMenuTile
0x5B3E9A: add     esp, 4
0x5B3E9D: test    eax, eax
0x5B3E9F: jz      short locret_5B3EBA
0x5B3EA1: mov     ecx, eax
0x5B3EA3: call    Tile_GetParentMenu
0x5B3EA8: test    eax, eax
0x5B3EAA: jz      short locret_5B3EBA
0x5B3EAC: mov     dword ptr [eax+58h], 3
0x5B3EB3: mov     ecx, eax; int
0x5B3EB5: jmp     sub_584740
0x5B3EBA: retn
