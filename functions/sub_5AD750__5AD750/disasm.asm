0x5AD750: push    3EFh
0x5AD755: call    Menu_GetOpenMenuTile
0x5AD75A: add     esp, 4
0x5AD75D: test    eax, eax
0x5AD75F: jz      short locret_5AD778
0x5AD761: mov     ecx, eax
0x5AD763: call    Tile_GetParentMenu
0x5AD768: test    eax, eax
0x5AD76A: jz      short locret_5AD778
0x5AD76C: mov     ecx, [esp+arg_0]
0x5AD770: push    ecx
0x5AD771: mov     ecx, eax
0x5AD773: call    sub_5AD700
0x5AD778: retn
