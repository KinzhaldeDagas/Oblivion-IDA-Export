0x57CE20: push    ebx
0x57CE21: mov     bl, [esp+4+arg_0]
0x57CE25: push    3EAh
0x57CE2A: mov     [ecx+0Bh], bl
0x57CE2D: call    Menu_GetOpenMenuTile
0x57CE32: add     esp, 4
0x57CE35: test    eax, eax
0x57CE37: jz      short loc_57CE53
0x57CE39: mov     ecx, eax
0x57CE3B: call    Tile_GetParentMenu
0x57CE40: test    eax, eax
0x57CE42: jz      short loc_57CE53
0x57CE44: mov     edx, [eax]
0x57CE46: mov     edx, [edx+0Ch]
0x57CE49: movsx   ecx, bl
0x57CE4C: push    0
0x57CE4E: push    ecx
0x57CE4F: mov     ecx, eax
0x57CE51: call    edx
0x57CE53: pop     ebx
0x57CE54: retn    4
