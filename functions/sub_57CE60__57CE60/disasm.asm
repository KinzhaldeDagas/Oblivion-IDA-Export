0x57CE60: push    ebx
0x57CE61: mov     bl, [esp+4+arg_0]
0x57CE65: push    3FEh
0x57CE6A: mov     [ecx+0Ch], bl
0x57CE6D: call    Menu_GetOpenMenuTile
0x57CE72: add     esp, 4
0x57CE75: test    eax, eax
0x57CE77: jz      short loc_57CE93
0x57CE79: mov     ecx, eax
0x57CE7B: call    Tile_GetParentMenu
0x57CE80: test    eax, eax
0x57CE82: jz      short loc_57CE93
0x57CE84: mov     edx, [eax]
0x57CE86: mov     edx, [edx+0Ch]
0x57CE89: movsx   ecx, bl
0x57CE8C: push    0
0x57CE8E: push    ecx
0x57CE8F: mov     ecx, eax
0x57CE91: call    edx
0x57CE93: pop     ebx
0x57CE94: retn    4
