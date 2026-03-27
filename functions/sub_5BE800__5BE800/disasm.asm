0x5BE800: push    esi; a3
0x5BE801: mov     esi, [ecx+0A8h]
0x5BE807: test    esi, esi
0x5BE809: jz      short loc_5BE850
0x5BE80B: mov     ecx, [ecx+84h]
0x5BE811: cmp     ecx, 3; switch 4 cases
0x5BE814: ja      short def_5BE816
0x5BE816: jmp     ds:jpt_5BE816[ecx*4]; switch jump
0x5BE81D: fld1; jumptable 005BE816 case 0
0x5BE81F: jmp     short loc_5BE837
0x5BE821: fld     dword ptr ds:0A379B4h; jumptable 005BE816 case 1
0x5BE827: jmp     short loc_5BE837
0x5BE829: fld     dword ptr ds:0A46C30h; jumptable 005BE816 case 2
0x5BE82F: jmp     short loc_5BE837
0x5BE831: fld     dword ptr ds:0A46B10h; jumptable 005BE816 case 3
0x5BE837: push    ecx
0x5BE838: fstp    [esp+8+a2]; a3
0x5BE83B: push    0FAEh; a2
0x5BE840: mov     ecx, esi; this
0x5BE842: call    Tile_SetFloat
