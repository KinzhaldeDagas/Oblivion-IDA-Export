0x5AD410: push    3EFh
0x5AD415: call    Menu_GetOpenMenuTile
0x5AD41A: add     esp, 4
0x5AD41D: test    eax, eax
0x5AD41F: jz      short loc_5AD42F
0x5AD421: mov     ecx, eax
0x5AD423: call    Tile_GetParentMenu
0x5AD428: test    eax, eax
0x5AD42A: jz      short loc_5AD42F
0x5AD42C: mov     al, 1
0x5AD42E: retn
0x5AD42F: xor     al, al
0x5AD431: retn
