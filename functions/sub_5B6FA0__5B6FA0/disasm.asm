0x5B6FA0: fld1
0x5B6FA2: push    esi; a3
0x5B6FA3: push    ecx
0x5B6FA4: fstp    [esp+8+a2]; a3
0x5B6FA7: mov     esi, ecx
0x5B6FA9: mov     ecx, [esi+4Ch]; this
0x5B6FAC: push    0FA1h; a2
0x5B6FB1: mov     byte ptr [esi+84h], 2
0x5B6FB8: mov     dword ptr [esi+78h], 0
0x5B6FBF: call    Tile_SetFloat
0x5B6FC4: fld1
0x5B6FC6: push    ecx
0x5B6FC7: fstp    [esp+8+a2]; a3
0x5B6FCA: mov     ecx, [esi+5Ch]; this
0x5B6FCD: push    0FA1h; a2
0x5B6FD2: call    Tile_SetFloat
0x5B6FD7: mov     ecx, [esi+5Ch]
0x5B6FDA: push    offset word_A36430
0x5B6FDF: push    0FDEh
0x5B6FE4: call    Tile_SetString
0x5B6FE9: mov     ecx, [esi+0F4h]; this
0x5B6FEF: test    ecx, ecx
0x5B6FF1: jz      short loc_5B7003
0x5B6FF3: fldz
0x5B6FF5: push    ecx
0x5B6FF6: fstp    [esp+8+a2]; a3
0x5B6FF9: push    0FB5h; a2
0x5B6FFE: call    Tile_SetFloat
0x5B7003: mov     dword ptr [esi+0F4h], 0
0x5B700D: pop     esi
0x5B700E: retn    8
