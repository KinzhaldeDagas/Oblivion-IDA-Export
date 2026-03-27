0x5964B0: push    415h
0x5964B5: call    Menu_GetOpenMenuTile
0x5964BA: add     esp, 4
0x5964BD: test    eax, eax
0x5964BF: jz      short locret_5964D3
0x5964C1: mov     ecx, eax
0x5964C3: call    Tile_GetParentMenu
0x5964C8: test    eax, eax
0x5964CA: jz      short locret_5964D3
0x5964CC: mov     ecx, eax; int
0x5964CE: jmp     sub_584740
0x5964D3: retn
