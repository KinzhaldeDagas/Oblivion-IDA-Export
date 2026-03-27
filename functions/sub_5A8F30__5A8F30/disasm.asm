0x5A8F30: push    esi; a3
0x5A8F31: push    0
0x5A8F33: push    3F5h
0x5A8F38: mov     esi, ecx
0x5A8F3A: call    sub_5790E0
0x5A8F3F: add     esp, 8
0x5A8F42: test    al, al
0x5A8F44: jnz     short loc_5A8F58
0x5A8F46: mov     ecx, [esi+28h]
0x5A8F49: push    offset word_A36430
0x5A8F4E: push    0FDEh
0x5A8F53: call    Tile_SetString
0x5A8F58: fld1
0x5A8F5A: push    ecx
0x5A8F5B: mov     ecx, [esi+28h]; this
0x5A8F5E: fstp    [esp+8+a2]; a3
0x5A8F61: push    0FA1h; a2
0x5A8F66: call    Tile_SetFloat
0x5A8F6B: fldz
0x5A8F6D: fstp    dword ptr [esi+3Ch]
0x5A8F70: mov     byte ptr [esi+38h], 1
0x5A8F74: mov     dword ptr [esi+40h], 0
0x5A8F7B: pop     esi
0x5A8F7C: retn
