0x5D76A0: push    esi
0x5D76A1: push    411h
0x5D76A6: call    Menu_GetOpenMenuTile
0x5D76AB: mov     esi, eax
0x5D76AD: add     esp, 4
0x5D76B0: test    esi, esi
0x5D76B2: jz      short loc_5D76E8
0x5D76B4: push    edi; a3
0x5D76B5: mov     ecx, esi
0x5D76B7: call    Tile_GetParentMenu
0x5D76BC: mov     edi, eax
0x5D76BE: test    edi, edi
0x5D76C0: jz      short loc_5D76E7
0x5D76C2: push    15h; int
0x5D76C4: call    sub_57DE50
0x5D76C9: fld     dword ptr ds:0A379B4h
0x5D76CF: fstp    [esp+0Ch+a2]; a3
0x5D76D2: push    1772h; a2
0x5D76D7: mov     ecx, esi; this
0x5D76D9: call    Tile_SetFloat
0x5D76DE: mov     ecx, edi; int
0x5D76E0: pop     edi
0x5D76E1: pop     esi
0x5D76E2: jmp     sub_584740
0x5D76E7: pop     edi
0x5D76E8: pop     esi
0x5D76E9: retn
