0x5A5E80: push    esi; a3
0x5A5E81: push    3ECh
0x5A5E86: call    Menu_GetOpenMenuTile
0x5A5E8B: mov     esi, eax
0x5A5E8D: add     esp, 4
0x5A5E90: test    esi, esi
0x5A5E92: jz      short loc_5A5EE8
0x5A5E94: call    sub_57A650
0x5A5E99: test    al, al
0x5A5E9B: jnz     short loc_5A5EE8
0x5A5E9D: push    0
0x5A5E9F: push    1
0x5A5EA1: call    sub_57A480
0x5A5EA6: add     esp, 8
0x5A5EA9: push    0FB2h
0x5A5EAE: mov     ecx, esi
0x5A5EB0: call    Tile_GetFloat
0x5A5EB5: push    ecx
0x5A5EB6: fstp    [esp+8+a2]; a3
0x5A5EB9: push    0FB3h; a2
0x5A5EBE: mov     ecx, esi; this
0x5A5EC0: call    Tile_SetFloat
0x5A5EC5: fld1
0x5A5EC7: push    ecx
0x5A5EC8: fstp    [esp+8+a2]; a3
0x5A5ECB: push    0FB2h; a2
0x5A5ED0: mov     ecx, esi; this
0x5A5ED2: call    Tile_SetFloat
0x5A5ED7: mov     ecx, esi
0x5A5ED9: call    Tile_GetParentMenu
0x5A5EDE: push    0Eh; int
0x5A5EE0: call    sub_57DE50
0x5A5EE5: add     esp, 4
0x5A5EE8: pop     esi
0x5A5EE9: retn
