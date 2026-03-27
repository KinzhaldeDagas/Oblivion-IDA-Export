0x57CDE0: push    ebx
0x57CDE1: mov     bl, [esp+4+arg_0]
0x57CDE5: push    3EBh
0x57CDEA: mov     [ecx+0Ah], bl
0x57CDED: call    Menu_GetOpenMenuTile
0x57CDF2: add     esp, 4
0x57CDF5: test    eax, eax
0x57CDF7: jz      short loc_57CE13
0x57CDF9: mov     ecx, eax
0x57CDFB: call    Tile_GetParentMenu
0x57CE00: test    eax, eax
0x57CE02: jz      short loc_57CE13
0x57CE04: mov     edx, [eax]
0x57CE06: mov     edx, [edx+0Ch]
0x57CE09: movsx   ecx, bl
0x57CE0C: push    0
0x57CE0E: push    ecx
0x57CE0F: mov     ecx, eax
0x57CE11: call    edx
0x57CE13: pop     ebx
0x57CE14: retn    4
