0x5A1740: push    esi
0x5A1741: push    412h
0x5A1746: call    Menu_GetOpenMenuTile
0x5A174B: mov     esi, eax
0x5A174D: add     esp, 4
0x5A1750: test    esi, esi
0x5A1752: jz      short loc_5A179F
0x5A1754: push    edi; a3
0x5A1755: push    0; int
0x5A1757: push    offset ??_R0?AVEnchantmentMenu@@@8; struct TypeDescriptor *
0x5A175C: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A1761: push    0; int
0x5A1763: mov     ecx, esi
0x5A1765: call    Tile_GetParentMenu
0x5A176A: push    eax; void *
0x5A176B: call    OblivionDynamicCast
0x5A1770: mov     edi, eax
0x5A1772: add     esp, 14h
0x5A1775: test    edi, edi
0x5A1777: jz      short loc_5A179E
0x5A1779: push    24h ; '$'; int
0x5A177B: call    sub_57DE50
0x5A1780: fld     dword ptr ds:0A379B4h
0x5A1786: fstp    [esp+0Ch+a2]; a3
0x5A1789: push    1772h; a2
0x5A178E: mov     ecx, esi; this
0x5A1790: call    Tile_SetFloat
0x5A1795: mov     ecx, edi; int
0x5A1797: pop     edi
0x5A1798: pop     esi
0x5A1799: jmp     sub_584740
0x5A179E: pop     edi
0x5A179F: pop     esi
0x5A17A0: retn
