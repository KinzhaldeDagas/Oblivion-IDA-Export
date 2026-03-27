0x4D6F00: cmp     [esp+arg_0], 0
0x4D6F05: mov     eax, [ecx+8]
0x4D6F08: jz      short loc_4D6F15
0x4D6F0A: or      eax, 100h
0x4D6F0F: mov     [ecx+8], eax
0x4D6F12: retn    4
0x4D6F15: and     eax, 0FFFFFEFFh
0x4D6F1A: mov     [ecx+8], eax
0x4D6F1D: retn    4
