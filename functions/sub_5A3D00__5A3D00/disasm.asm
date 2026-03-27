0x5A3D00: push    esi
0x5A3D01: push    3F3h
0x5A3D06: call    Menu_GetOpenMenuTile
0x5A3D0B: mov     esi, eax
0x5A3D0D: add     esp, 4
0x5A3D10: test    esi, esi
0x5A3D12: jz      short loc_5A3D73
0x5A3D14: push    edi
0x5A3D15: mov     ecx, esi
0x5A3D17: call    Tile_GetParentMenu
0x5A3D1C: mov     edi, eax
0x5A3D1E: test    edi, edi
0x5A3D20: jz      short loc_5A3D72
0x5A3D22: push    ebx; a3
0x5A3D23: mov     ebx, [esp+0Ch+arg_0]
0x5A3D27: test    ebx, ebx
0x5A3D29: jz      short loc_5A3D52
0x5A3D2B: push    1; arg1
0x5A3D2D: push    0; canCreate
0x5A3D2F: call    InterfaceManager_GetSingleton
0x5A3D34: add     esp, 8
0x5A3D37: cmp     byte ptr [eax+0B0h], 0FFh
0x5A3D3E: jnz     short loc_5A3D52
0x5A3D40: push    1; arg1
0x5A3D42: push    0; canCreate
0x5A3D44: call    InterfaceManager_GetSingleton
0x5A3D49: add     esp, 8
0x5A3D4C: mov     [eax+0B0h], bl
0x5A3D52: fld     dword ptr ds:0A379B4h
0x5A3D58: push    ecx
0x5A3D59: fstp    [esp+10h+a2]; a3
0x5A3D5C: push    1772h; a2
0x5A3D61: mov     ecx, esi; this
0x5A3D63: call    Tile_SetFloat
0x5A3D68: pop     ebx
0x5A3D69: mov     ecx, edi; int
0x5A3D6B: pop     edi
0x5A3D6C: pop     esi
0x5A3D6D: jmp     sub_584740
0x5A3D72: pop     edi
0x5A3D73: pop     esi
0x5A3D74: retn
