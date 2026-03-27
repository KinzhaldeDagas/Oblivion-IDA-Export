0x5D6A10: push    esi
0x5D6A11: push    3F4h
0x5D6A16: call    Menu_GetOpenMenuTile
0x5D6A1B: mov     esi, eax
0x5D6A1D: add     esp, 4
0x5D6A20: test    esi, esi
0x5D6A22: jz      short loc_5D6A7D
0x5D6A24: push    edi; a3
0x5D6A25: mov     ecx, esi
0x5D6A27: call    Tile_GetParentMenu
0x5D6A2C: mov     edi, eax
0x5D6A2E: test    edi, edi
0x5D6A30: jz      short loc_5D6A7C
0x5D6A32: push    1; arg1
0x5D6A34: push    0; canCreate
0x5D6A36: call    InterfaceManager_GetSingleton
0x5D6A3B: add     esp, 8
0x5D6A3E: mov     ecx, eax
0x5D6A40: call    sub_5806D0
0x5D6A45: mov     eax, ds:0B33398h
0x5D6A4A: mov     ecx, [eax+24h]
0x5D6A4D: push    100h
0x5D6A52: call    sub_6AC330
0x5D6A57: push    2; int
0x5D6A59: call    sub_57DE50
0x5D6A5E: fld     dword ptr ds:0A379B4h
0x5D6A64: fstp    [esp+0Ch+a2]; a3
0x5D6A67: push    1772h; a2
0x5D6A6C: mov     ecx, esi; this
0x5D6A6E: call    Tile_SetFloat
0x5D6A73: mov     ecx, edi; int
0x5D6A75: pop     edi
0x5D6A76: pop     esi
0x5D6A77: jmp     sub_584740
0x5D6A7C: pop     edi
0x5D6A7D: pop     esi
0x5D6A7E: retn
