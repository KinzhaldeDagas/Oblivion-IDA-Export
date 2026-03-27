0x5B70F0: push    esi; a3
0x5B70F1: push    3FFh
0x5B70F6: mov     esi, ecx
0x5B70F8: call    InterfaceManager_MenuModeHasFocus
0x5B70FD: add     esp, 4
0x5B7100: test    al, al
0x5B7102: jz      short loc_5B7112
0x5B7104: cmp     byte ptr ds:0B3B43Dh, 0
0x5B710B: jz      short loc_5B7112
0x5B710D: call    sub_5C1000
0x5B7112: cmp     byte ptr [esi+84h], 0
0x5B7119: jnz     short loc_5B7132
0x5B711B: mov     ecx, [esi+4Ch]; this
0x5B711E: test    ecx, ecx
0x5B7120: jz      short loc_5B7132
0x5B7122: fld1
0x5B7124: push    ecx
0x5B7125: fstp    [esp+8+a2]; a3
0x5B7128: push    0FA1h; a2
0x5B712D: call    Tile_SetFloat
0x5B7132: or      al, 0FFh
0x5B7134: add     [esi+84h], al
0x5B713A: cmp     [esi+84h], al
0x5B7140: jge     short loc_5B7148
0x5B7142: mov     [esi+84h], al
0x5B7148: pop     esi
0x5B7149: retn
