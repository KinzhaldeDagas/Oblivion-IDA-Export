0x4D6F80: cmp     [esp+arg_0], 0
0x4D6F85: mov     eax, [ecx+8]
0x4D6F88: jz      short loc_4D6F95
0x4D6F8A: or      eax, 40000h
0x4D6F8F: mov     [ecx+8], eax
0x4D6F92: retn    4
0x4D6F95: and     eax, 0FFFBFFFFh
0x4D6F9A: mov     [ecx+8], eax
0x4D6F9D: retn    4
