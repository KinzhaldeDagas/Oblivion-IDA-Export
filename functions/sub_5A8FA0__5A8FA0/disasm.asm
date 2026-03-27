0x5A8FA0: push    3F2h
0x5A8FA5: call    Menu_GetOpenMenuTile
0x5A8FAA: add     esp, 4
0x5A8FAD: test    eax, eax
0x5A8FAF: jz      short locret_5A8FC3
0x5A8FB1: mov     ecx, eax
0x5A8FB3: call    Tile_GetParentMenu
0x5A8FB8: test    eax, eax
0x5A8FBA: jz      short locret_5A8FC3
0x5A8FBC: mov     ecx, eax; int
0x5A8FBE: jmp     sub_584740
0x5A8FC3: retn
