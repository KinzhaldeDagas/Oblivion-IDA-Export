0x5A5F60: push    esi; a3
0x5A5F61: push    3ECh
0x5A5F66: call    Menu_GetOpenMenuTile
0x5A5F6B: mov     esi, eax
0x5A5F6D: add     esp, 4
0x5A5F70: test    esi, esi
0x5A5F72: jz      short loc_5A5FCC
0x5A5F74: call    sub_57A1C0
0x5A5F79: test    al, al
0x5A5F7B: jnz     short loc_5A5FCC
0x5A5F7D: push    0
0x5A5F7F: push    1
0x5A5F81: call    sub_57C5F0
0x5A5F86: add     esp, 8
0x5A5F89: push    0FB2h
0x5A5F8E: mov     ecx, esi
0x5A5F90: call    Tile_GetFloat
0x5A5F95: push    ecx
0x5A5F96: fstp    [esp+8+a2]; a3
0x5A5F99: push    0FB3h; a2
0x5A5F9E: mov     ecx, esi; this
0x5A5FA0: call    Tile_SetFloat
0x5A5FA5: fld     dword ptr ds:0A46C30h
0x5A5FAB: push    ecx
0x5A5FAC: fstp    [esp+8+a2]; a3
0x5A5FAF: push    0FB2h; a2
0x5A5FB4: mov     ecx, esi; this
0x5A5FB6: call    Tile_SetFloat
0x5A5FBB: mov     ecx, esi
0x5A5FBD: call    Tile_GetParentMenu
0x5A5FC2: push    0Eh; int
0x5A5FC4: call    sub_57DE50
0x5A5FC9: add     esp, 4
0x5A5FCC: pop     esi
0x5A5FCD: retn
