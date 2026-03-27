0x5B7150: push    3FFh
0x5B7155: call    Menu_GetOpenMenuTile
0x5B715A: add     esp, 4
0x5B715D: test    eax, eax
0x5B715F: jz      short locret_5B717D
0x5B7161: mov     ecx, eax
0x5B7163: call    Tile_GetParentMenu
0x5B7168: test    eax, eax
0x5B716A: jz      short locret_5B717D
0x5B716C: mov     eax, [eax+4]
0x5B716F: test    eax, eax
0x5B7171: jz      short locret_5B717D
0x5B7173: mov     edx, [eax]
0x5B7175: mov     ecx, eax
0x5B7177: mov     eax, [edx]
0x5B7179: push    1
0x5B717B: call    eax
0x5B717D: retn
