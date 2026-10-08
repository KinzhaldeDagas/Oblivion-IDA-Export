0x5DDCA0: push    3FAh
0x5DDCA5: call    Menu_GetOpenMenuTile
0x5DDCAA: add     esp, 4
0x5DDCAD: test    eax, eax
0x5DDCAF: jz      short locret_5DDCC3
0x5DDCB1: mov     ecx, eax
0x5DDCB3: call    Tile_GetParentMenu
0x5DDCB8: test    eax, eax
0x5DDCBA: jz      short locret_5DDCC3
0x5DDCBC: mov     ecx, eax; int
0x5DDCBE: jmp     Menu__StartFadeIn; Oblivion ClassMenu step refresh: derives the active step value from tile traits 0xFDB/0xFDC, updates menu state, sets state 8, and refreshes the interface manager.
0x5DDCC3: retn
