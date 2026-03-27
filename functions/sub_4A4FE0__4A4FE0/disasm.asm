0x4A4FE0: mov     eax, [esp+arg_0]
0x4A4FE4: cmp     eax, 2
0x4A4FE7: ja      short loc_4A4FF6
0x4A4FE9: cmp     eax, [ecx+8]
0x4A4FEC: jz      short loc_4A4FF6
0x4A4FEE: mov     [ecx+8], eax
0x4A4FF1: mov     al, 1
0x4A4FF3: retn    4
0x4A4FF6: xor     al, al
0x4A4FF8: retn    4
