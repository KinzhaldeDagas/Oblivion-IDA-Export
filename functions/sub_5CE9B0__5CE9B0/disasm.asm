0x5CE9B0: push    edi; a3
0x5CE9B1: push    419h
0x5CE9B6: call    Menu_GetOpenMenuTile
0x5CE9BB: mov     edi, eax
0x5CE9BD: add     esp, 4
0x5CE9C0: test    edi, edi
0x5CE9C2: jz      loc_5CEA77
0x5CE9C8: push    esi; a3
0x5CE9C9: mov     ecx, edi
0x5CE9CB: call    Tile_GetParentMenu
0x5CE9D0: mov     esi, eax
0x5CE9D2: test    esi, esi
0x5CE9D4: jz      loc_5CEA76
0x5CE9DA: fld     dword ptr ds:0A379B4h
0x5CE9E0: push    ecx
0x5CE9E1: fstp    [esp+0Ch+a2]; a3
0x5CE9E4: push    1772h; a2
0x5CE9E9: mov     ecx, edi; this
0x5CE9EB: call    Tile_SetFloat
0x5CE9F0: mov     ecx, esi; int
0x5CE9F2: call    sub_584740
0x5CE9F7: mov     eax, ds:0B33398h
0x5CE9FC: mov     ecx, [eax+24h]
0x5CE9FF: call    sub_6AC3D0
0x5CEA04: cmp     dword ptr [esi+44h], 0
0x5CEA08: jz      short loc_5CEA20
0x5CEA0A: call    sub_578FE0
0x5CEA0F: cmp     eax, 1
0x5CEA12: jnz     short loc_5CEA20
0x5CEA14: call    sub_57CAC0
0x5CEA19: pop     esi
0x5CEA1A: pop     edi
0x5CEA1B: jmp     sub_57BD80
0x5CEA20: cmp     dword ptr [esi+48h], 0
0x5CEA24: jz      short loc_5CEA6F
0x5CEA26: push    3F1h
0x5CEA2B: call    Menu_GetOpenMenuTile
0x5CEA30: mov     esi, eax
0x5CEA32: add     esp, 4
0x5CEA35: test    esi, esi
0x5CEA37: jz      short loc_5CEA6F
0x5CEA39: mov     ecx, esi
0x5CEA3B: call    Tile_GetParentMenu
0x5CEA40: push    0; float
0x5CEA42: mov     ecx, esi
0x5CEA44: mov     edi, eax
0x5CEA46: call    sub_58FBA0
0x5CEA4B: fld     dword ptr ds:0A379B4h
0x5CEA51: push    ecx
0x5CEA52: fstp    [esp+0Ch+a2]; a3
0x5CEA55: push    0FA1h; a2
0x5CEA5A: mov     ecx, esi; this
0x5CEA5C: call    Tile_SetFloat
0x5CEA61: call    InventoryMenu_InitializeOrUpdate
0x5CEA66: push    1
0x5CEA68: mov     ecx, edi
0x5CEA6A: call    sub_59E1D0
0x5CEA6F: pop     esi
0x5CEA70: pop     edi
0x5CEA71: jmp     sub_57BD80
0x5CEA76: pop     esi
0x5CEA77: pop     edi
0x5CEA78: retn
