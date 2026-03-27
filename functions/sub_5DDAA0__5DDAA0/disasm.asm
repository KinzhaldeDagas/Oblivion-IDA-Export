0x5DDAA0: mov     eax, [esp+arg_4]
0x5DDAA4: mov     ecx, [esp+arg_0]
0x5DDAA8: push    esi
0x5DDAA9: push    eax
0x5DDAAA: push    ecx
0x5DDAAB: call    sub_497C10
0x5DDAB0: push    3FBh
0x5DDAB5: call    Menu_GetOpenMenuTile
0x5DDABA: mov     esi, eax
0x5DDABC: add     esp, 0Ch
0x5DDABF: test    esi, esi
0x5DDAC1: jz      short loc_5DDAEF
0x5DDAC3: push    edi; a3
0x5DDAC4: mov     ecx, esi
0x5DDAC6: call    Tile_GetParentMenu
0x5DDACB: mov     edi, eax
0x5DDACD: test    edi, edi
0x5DDACF: jz      short loc_5DDAEE
0x5DDAD1: fld     dword ptr ds:0A379B4h
0x5DDAD7: push    ecx
0x5DDAD8: fstp    [esp+0Ch+a2]; a3
0x5DDADB: push    1772h; a2
0x5DDAE0: mov     ecx, esi; this
0x5DDAE2: call    Tile_SetFloat
0x5DDAE7: mov     ecx, edi; int
0x5DDAE9: call    sub_584740
0x5DDAEE: pop     edi
0x5DDAEF: mov     edx, ds:0B38CF0h
0x5DDAF5: mov     eax, ds:0B38CE0h
0x5DDAFA: push    0
0x5DDAFC: push    edx
0x5DDAFD: push    1
0x5DDAFF: push    0
0x5DDB01: push    eax
0x5DDB02: call    ShowUIMessageBox
0x5DDB07: add     esp, 14h
0x5DDB0A: call    sub_5DDCA0
0x5DDB0F: pop     esi
0x5DDB10: retn    8
