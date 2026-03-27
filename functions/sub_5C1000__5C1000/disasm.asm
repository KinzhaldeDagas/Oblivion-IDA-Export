0x5C1000: push    416h
0x5C1005: call    Menu_GetOpenMenuTile
0x5C100A: add     esp, 4
0x5C100D: test    eax, eax
0x5C100F: jz      short locret_5C1059
0x5C1011: push    esi; a3
0x5C1012: mov     ecx, eax
0x5C1014: call    Tile_GetParentMenu
0x5C1019: mov     esi, eax
0x5C101B: test    esi, esi
0x5C101D: jz      short loc_5C1058
0x5C101F: cmp     dword ptr [esi+24h], 2
0x5C1023: jz      short loc_5C1058
0x5C1025: fld1
0x5C1027: push    ecx
0x5C1028: mov     ecx, [esi+2Ch]; this
0x5C102B: fstp    [esp+8+var_8]; a3
0x5C102E: push    0FA1h; a2
0x5C1033: call    Tile_SetFloat
0x5C1038: fldz
0x5C103A: push    ecx
0x5C103B: fstp    [esp+8+var_8]; a3
0x5C103E: mov     ecx, [esi+28h]; this
0x5C1041: push    0FA7h; a2
0x5C1046: call    Tile_SetFloat
0x5C104B: mov     byte ptr ds:0B3B43Dh, 0
0x5C1052: pop     esi
0x5C1053: jmp     loc_5C0D20
0x5C1058: pop     esi
0x5C1059: retn
