0x5D8980: push    esi
0x5D8981: push    40Dh
0x5D8986: call    Menu_GetOpenMenuTile
0x5D898B: mov     esi, eax
0x5D898D: add     esp, 4
0x5D8990: test    esi, esi
0x5D8992: jz      loc_5D8A35
0x5D8998: push    edi; a3
0x5D8999: mov     ecx, esi
0x5D899B: call    Tile_GetParentMenu
0x5D89A0: mov     edi, eax
0x5D89A2: test    edi, edi
0x5D89A4: jz      loc_5D8A34
0x5D89AA: fld     dword ptr ds:0A379B4h
0x5D89B0: push    ecx
0x5D89B1: fstp    [esp+0Ch+a2]; a3
0x5D89B4: push    1772h; a2
0x5D89B9: mov     ecx, esi; this
0x5D89BB: call    Tile_SetFloat
0x5D89C0: mov     eax, ds:0B33398h
0x5D89C5: mov     ecx, [eax+24h]
0x5D89C8: call    sub_6AC3D0
0x5D89CD: push    3F1h
0x5D89D2: call    Menu_GetOpenMenuTile
0x5D89D7: mov     esi, eax
0x5D89D9: add     esp, 4
0x5D89DC: test    esi, esi
0x5D89DE: jz      short loc_5D8A26
0x5D89E0: push    ebx; a3
0x5D89E1: mov     ecx, esi
0x5D89E3: call    Tile_GetParentMenu
0x5D89E8: push    0; float
0x5D89EA: mov     ecx, esi
0x5D89EC: mov     ebx, eax
0x5D89EE: call    sub_58FBA0
0x5D89F3: fld     dword ptr ds:0A379B4h
0x5D89F9: push    ecx
0x5D89FA: fstp    [esp+10h+a3]; a3
0x5D89FD: push    0FA1h; a2
0x5D8A02: mov     ecx, esi; this
0x5D8A04: call    Tile_SetFloat
0x5D8A09: mov     byte ptr [ebx+96h], 1
0x5D8A10: cmp     byte ptr [edi+5Ch], 0
0x5D8A14: jz      short loc_5D8A25
0x5D8A16: mov     ecx, [edi+50h]
0x5D8A19: call    sub_5EF930
0x5D8A1E: mov     ecx, ebx
0x5D8A20: call    sub_59E030
0x5D8A25: pop     ebx
0x5D8A26: mov     ecx, edi; int
0x5D8A28: call    sub_584740
0x5D8A2D: pop     edi
0x5D8A2E: pop     esi
0x5D8A2F: jmp     sub_5B3E90
0x5D8A34: pop     edi
0x5D8A35: pop     esi
0x5D8A36: retn
