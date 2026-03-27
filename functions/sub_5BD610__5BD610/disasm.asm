0x5BD610: push    3F7h
0x5BD615: call    Menu_GetOpenMenuTile
0x5BD61A: add     esp, 4
0x5BD61D: test    eax, eax
0x5BD61F: jz      short locret_5BD633
0x5BD621: mov     ecx, eax
0x5BD623: call    Tile_GetParentMenu
0x5BD628: test    eax, eax
0x5BD62A: jz      short locret_5BD633
0x5BD62C: mov     ecx, eax; int
0x5BD62E: jmp     sub_584390
0x5BD633: retn
