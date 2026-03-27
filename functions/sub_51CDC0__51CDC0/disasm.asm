0x51CDC0: mov     eax, [ecx+28h]
0x51CDC3: shr     eax, 8
0x51CDC6: test    al, 1
0x51CDC8: jz      short loc_51CDD1
0x51CDCA: mov     eax, [ecx+100h]
0x51CDD0: retn
0x51CDD1: xor     eax, eax
0x51CDD3: retn
