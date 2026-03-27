0x404F20: cmp     byte ptr [ecx+51h], 0
0x404F24: jnz     short loc_404F2F
0x404F26: cmp     byte ptr [ecx+52h], 0
0x404F2A: jnz     short loc_404F2F
0x404F2C: xor     eax, eax
0x404F2E: retn
0x404F2F: mov     eax, 1
0x404F34: retn
