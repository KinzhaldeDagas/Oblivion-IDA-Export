0x5964E0: push    415h
0x5964E5: call    Menu_GetOpenMenuTile
0x5964EA: add     esp, 4
0x5964ED: test    eax, eax
0x5964EF: jz      short locret_596503
0x5964F1: mov     ecx, eax
0x5964F3: call    Tile_GetParentMenu
0x5964F8: test    eax, eax
0x5964FA: jz      short locret_596503
0x5964FC: mov     ecx, eax; int
0x5964FE: jmp     sub_584390
0x596503: retn
