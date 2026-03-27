0x5D03B0: push    edi; a3
0x5D03B1: push    40Bh
0x5D03B6: call    Menu_GetOpenMenuTile
0x5D03BB: mov     edi, eax
0x5D03BD: add     esp, 4
0x5D03C0: test    edi, edi
0x5D03C2: jz      loc_5D0488
0x5D03C8: push    esi; a3
0x5D03C9: mov     ecx, edi
0x5D03CB: call    Tile_GetParentMenu
0x5D03D0: mov     esi, eax
0x5D03D2: test    esi, esi
0x5D03D4: jz      loc_5D0487
0x5D03DA: fld     dword ptr ds:0A379B4h
0x5D03E0: push    ecx
0x5D03E1: fstp    [esp+0Ch+a2]; a3
0x5D03E4: push    1772h; a2
0x5D03E9: mov     ecx, edi; this
0x5D03EB: call    Tile_SetFloat
0x5D03F0: cmp     dword ptr [esi+58h], 2
0x5D03F4: jnz     short loc_5D0403
0x5D03F6: mov     eax, ds:0B33398h
0x5D03FB: mov     ecx, [eax+24h]
0x5D03FE: call    sub_6AC3D0
0x5D0403: mov     ecx, esi; int
0x5D0405: call    sub_584740
0x5D040A: cmp     dword ptr [esi+58h], 1
0x5D040E: jnz     short loc_5D042B
0x5D0410: call    sub_578FE0
0x5D0415: cmp     eax, 1
0x5D0418: jnz     short loc_5D047B
0x5D041A: call    sub_57CAC0
0x5D041F: call    sub_57BD80
0x5D0424: pop     esi
0x5D0425: pop     edi
0x5D0426: jmp     loc_57BDB0
0x5D042B: push    3F1h
0x5D0430: call    Menu_GetOpenMenuTile
0x5D0435: mov     esi, eax
0x5D0437: add     esp, 4
0x5D043A: test    esi, esi
0x5D043C: jz      short loc_5D047B
0x5D043E: mov     ecx, esi
0x5D0440: call    Tile_GetParentMenu
0x5D0445: push    0; float
0x5D0447: mov     ecx, esi
0x5D0449: mov     edi, eax
0x5D044B: call    sub_58FBA0
0x5D0450: fld     dword ptr ds:0A379B4h
0x5D0456: push    ecx
0x5D0457: fstp    [esp+0Ch+a2]; a3
0x5D045A: push    0FA1h; a2
0x5D045F: mov     ecx, esi; this
0x5D0461: call    Tile_SetFloat
0x5D0466: call    InventoryMenu_InitializeOrUpdate
0x5D046B: push    0
0x5D046D: mov     ecx, edi
0x5D046F: mov     byte ptr [edi+96h], 1
0x5D0476: call    sub_59E1D0
0x5D047B: call    sub_57BD80
0x5D0480: pop     esi
0x5D0481: pop     edi
0x5D0482: jmp     loc_57BDB0
0x5D0487: pop     esi
0x5D0488: pop     edi
0x5D0489: retn
