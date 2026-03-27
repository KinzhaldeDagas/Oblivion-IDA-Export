0x5A5EF0: push    esi; a3
0x5A5EF1: push    3ECh
0x5A5EF6: call    Menu_GetOpenMenuTile
0x5A5EFB: mov     esi, eax
0x5A5EFD: add     esp, 4
0x5A5F00: test    esi, esi
0x5A5F02: jz      short loc_5A5F5C
0x5A5F04: call    sub_57A310
0x5A5F09: test    al, al
0x5A5F0B: jnz     short loc_5A5F5C
0x5A5F0D: push    0
0x5A5F0F: push    1
0x5A5F11: call    sub_57C7C0
0x5A5F16: add     esp, 8
0x5A5F19: push    0FB2h
0x5A5F1E: mov     ecx, esi
0x5A5F20: call    Tile_GetFloat
0x5A5F25: push    ecx
0x5A5F26: fstp    [esp+8+a2]; a3
0x5A5F29: push    0FB3h; a2
0x5A5F2E: mov     ecx, esi; this
0x5A5F30: call    Tile_SetFloat
0x5A5F35: fld     dword ptr ds:0A379B4h
0x5A5F3B: push    ecx
0x5A5F3C: fstp    [esp+8+a2]; a3
0x5A5F3F: push    0FB2h; a2
0x5A5F44: mov     ecx, esi; this
0x5A5F46: call    Tile_SetFloat
0x5A5F4B: mov     ecx, esi
0x5A5F4D: call    Tile_GetParentMenu
0x5A5F52: push    0Eh; int
0x5A5F54: call    sub_57DE50
0x5A5F59: add     esp, 4
0x5A5F5C: pop     esi
0x5A5F5D: retn
