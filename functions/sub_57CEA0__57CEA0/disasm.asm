0x57CEA0: push    ebx
0x57CEA1: mov     bl, [esp+4+arg_0]
0x57CEA5: push    3FFh
0x57CEAA: mov     [ecx+0Dh], bl
0x57CEAD: call    Menu_GetOpenMenuTile
0x57CEB2: add     esp, 4
0x57CEB5: test    eax, eax
0x57CEB7: jz      short loc_57CED3
0x57CEB9: mov     ecx, eax
0x57CEBB: call    Tile_GetParentMenu
0x57CEC0: test    eax, eax
0x57CEC2: jz      short loc_57CED3
0x57CEC4: mov     edx, [eax]
0x57CEC6: mov     edx, [edx+0Ch]
0x57CEC9: movsx   ecx, bl
0x57CECC: push    0
0x57CECE: push    ecx
0x57CECF: mov     ecx, eax
0x57CED1: call    edx
0x57CED3: pop     ebx
0x57CED4: retn    4
