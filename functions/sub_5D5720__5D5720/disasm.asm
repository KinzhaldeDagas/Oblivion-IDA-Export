0x5D5720: push    esi
0x5D5721: push    408h
0x5D5726: call    Menu_GetOpenMenuTile
0x5D572B: mov     esi, eax
0x5D572D: add     esp, 4
0x5D5730: test    esi, esi
0x5D5732: jz      short loc_5D5788
0x5D5734: push    edi; a3
0x5D5735: mov     ecx, esi
0x5D5737: call    Tile_GetParentMenu
0x5D573C: mov     edi, eax
0x5D573E: test    edi, edi
0x5D5740: jz      short loc_5D5787
0x5D5742: push    0FB1h
0x5D5747: mov     ecx, esi
0x5D5749: call    Tile_GetFloat
0x5D574E: fcomp   dword ptr ds:0A46C30h
0x5D5754: fnstsw  ax
0x5D5756: test    ah, 44h
0x5D5759: jp      short loc_5D5768
0x5D575B: mov     ecx, ds:0B333C4h
0x5D5761: push    0
0x5D5763: call    PlayerCharacter_SetCurrentMagicItem
0x5D5768: fld     dword ptr ds:0A379B4h
0x5D576E: push    ecx
0x5D576F: fstp    [esp+0Ch+a2]; a3
0x5D5772: push    1772h; a2
0x5D5777: mov     ecx, esi; this
0x5D5779: call    Tile_SetFloat
0x5D577E: mov     ecx, edi; int
0x5D5780: pop     edi
0x5D5781: pop     esi
0x5D5782: jmp     sub_584740
0x5D5787: pop     edi
0x5D5788: pop     esi
0x5D5789: retn
