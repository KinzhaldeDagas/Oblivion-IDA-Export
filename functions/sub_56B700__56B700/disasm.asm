0x56B700: mov     eax, [ecx+8]
0x56B703: cmp     eax, 4
0x56B706: jz      short loc_56B710
0x56B708: cmp     eax, 3
0x56B70B: jz      short loc_56B710
0x56B70D: xor     al, al
0x56B70F: retn
0x56B710: mov     al, 1
0x56B712: retn
