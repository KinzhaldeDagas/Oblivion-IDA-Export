0x5D2CF0: push    ecx
0x5D2CF1: push    esi
0x5D2CF2: push    edi; a3
0x5D2CF3: push    40Fh
0x5D2CF8: call    Menu_GetOpenMenuTile
0x5D2CFD: mov     edi, eax
0x5D2CFF: add     esp, 4
0x5D2D02: test    edi, edi
0x5D2D04: jz      short loc_5D2D72
0x5D2D06: mov     ecx, edi
0x5D2D08: call    Tile_GetParentMenu
0x5D2D0D: mov     esi, eax
0x5D2D0F: test    esi, esi
0x5D2D11: jz      short loc_5D2D72
0x5D2D13: mov     eax, [esi+40h]
0x5D2D16: push    0; int
0x5D2D18: push    offset ??_R0?AVTileImage@@@8; struct TypeDescriptor *
0x5D2D1D: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D2D22: push    0; int
0x5D2D24: push    eax; void *
0x5D2D25: call    OblivionDynamicCast
0x5D2D2A: add     esp, 14h
0x5D2D2D: test    eax, eax
0x5D2D2F: jz      short loc_5D2D45
0x5D2D31: push    ecx
0x5D2D32: mov     ecx, esp
0x5D2D34: mov     dword ptr [ecx], 0
0x5D2D3A: mov     ecx, eax
0x5D2D3C: mov     [esp+10h+var_4], esp
0x5D2D40: call    sub_591A80
0x5D2D45: fld     dword ptr ds:0A379B4h
0x5D2D4B: push    ecx
0x5D2D4C: fstp    [esp+10h+a2]; a3
0x5D2D4F: push    1772h; a2
0x5D2D54: mov     ecx, edi; this
0x5D2D56: call    Tile_SetFloat
0x5D2D5B: mov     ecx, esi; int
0x5D2D5D: call    sub_584740
0x5D2D62: mov     ecx, ds:0B33B00h
0x5D2D68: pop     edi
0x5D2D69: pop     esi
0x5D2D6A: add     esp, 4
0x5D2D6D: jmp     sub_459400
0x5D2D72: pop     edi
0x5D2D73: pop     esi
0x5D2D74: pop     ecx
0x5D2D75: retn
