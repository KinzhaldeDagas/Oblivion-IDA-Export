0x5A5E00: push    esi; a3
0x5A5E01: push    3ECh
0x5A5E06: call    Menu_GetOpenMenuTile
0x5A5E0B: mov     esi, eax
0x5A5E0D: add     esp, 4
0x5A5E10: test    esi, esi
0x5A5E12: jz      short loc_5A5E6F
0x5A5E14: push    0FB2h
0x5A5E19: mov     ecx, esi
0x5A5E1B: call    Tile_GetFloat
0x5A5E20: push    ecx
0x5A5E21: fstp    [esp+8+a2]; a3
0x5A5E24: push    0FB3h; a2
0x5A5E29: mov     ecx, esi; this
0x5A5E2B: call    Tile_SetFloat
0x5A5E30: fild    [esp+4+arg_0]
0x5A5E34: push    ecx
0x5A5E35: mov     ecx, esi; this
0x5A5E37: fstp    [esp+8+a2]; a3
0x5A5E3A: push    0FB2h; a2
0x5A5E3F: call    Tile_SetFloat
0x5A5E44: mov     ecx, esi
0x5A5E46: call    Tile_GetParentMenu
0x5A5E4B: test    eax, eax
0x5A5E4D: jz      short loc_5A5E6F
0x5A5E4F: mov     ecx, esi
0x5A5E51: call    Tile_GetParentMenu
0x5A5E56: cmp     dword ptr [eax+58h], 0
0x5A5E5A: jz      short loc_5A5E6F
0x5A5E5C: mov     ecx, esi
0x5A5E5E: call    Tile_GetParentMenu
0x5A5E63: fld     dword ptr ds:0A30634h
0x5A5E69: mov     eax, [eax+58h]
0x5A5E6C: fstp    dword ptr [eax+58h]
0x5A5E6F: pop     esi
0x5A5E70: retn
