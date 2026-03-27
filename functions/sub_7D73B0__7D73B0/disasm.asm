0x7D73B0: mov     eax, [ecx+0DCh]
0x7D73B6: sub     eax, 1
0x7D73B9: jz      short loc_7D73C3
0x7D73BB: sub     eax, 2
0x7D73BE: jnz     short loc_7D73C3
0x7D73C0: xor     eax, eax
0x7D73C2: retn
0x7D73C3: mov     eax, 3
0x7D73C8: retn
