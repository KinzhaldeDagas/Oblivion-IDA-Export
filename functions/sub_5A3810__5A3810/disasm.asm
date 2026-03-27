0x5A3810: push    esi
0x5A3811: push    3FCh
0x5A3816: call    Menu_GetOpenMenuTile
0x5A381B: mov     esi, eax
0x5A381D: add     esp, 4
0x5A3820: test    esi, esi
0x5A3822: jz      short loc_5A3852
0x5A3824: push    edi; a3
0x5A3825: mov     ecx, esi
0x5A3827: call    Tile_GetParentMenu
0x5A382C: mov     edi, eax
0x5A382E: test    edi, edi
0x5A3830: jz      short loc_5A3851
0x5A3832: fld     dword ptr ds:0A379B4h
0x5A3838: push    ecx
0x5A3839: fstp    [esp+0Ch+a2]; a3
0x5A383C: push    1772h; a2
0x5A3841: mov     ecx, esi; this
0x5A3843: call    Tile_SetFloat
0x5A3848: mov     ecx, edi; int
0x5A384A: pop     edi
0x5A384B: pop     esi
0x5A384C: jmp     sub_584740
0x5A3851: pop     edi
0x5A3852: pop     esi
0x5A3853: retn
