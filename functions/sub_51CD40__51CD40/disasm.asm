0x51CD40: mov     eax, [ecx+28h]
0x51CD43: shr     eax, 8
0x51CD46: test    al, 1
0x51CD48: jz      short loc_51CD4D
0x51CD4A: xor     eax, eax
0x51CD4C: retn
0x51CD4D: mov     eax, [ecx+100h]
0x51CD53: retn
