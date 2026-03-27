0x459A90: push    esi
0x459A91: push    3EFh
0x459A96: mov     esi, ecx
0x459A98: call    Menu_GetOpenMenuTile
0x459A9D: add     esp, 4
0x459AA0: test    eax, eax
0x459AA2: jz      short loc_459AC8
0x459AA4: mov     ecx, eax
0x459AA6: call    Tile_GetParentMenu
0x459AAB: test    eax, eax
0x459AAD: jz      short loc_459AC8
0x459AAF: call    sub_578F20
0x459AB4: fld     dword ptr ds:0A2FE7Ch
0x459ABA: push    ecx
0x459ABB: fstp    [esp+8+var_8]; float
0x459ABE: push    3; int
0x459AC0: call    sub_57B950
0x459AC5: add     esp, 8
0x459AC8: or      dword ptr [esi+18h], 2000h
0x459ACF: fld     dword ptr ds:0B33A48h
0x459AD5: push    ecx
0x459AD6: mov     ecx, ds:0B3A6B0h
0x459ADC: fstp    [esp+8+var_8]; float
0x459ADF: push    2; int
0x459AE1: call    sub_5732D0
0x459AE6: pop     esi
0x459AE7: retn
