0x51CE70: mov     eax, [ecx+28h]
0x51CE73: shr     eax, 8
0x51CE76: test    al, 1
0x51CE78: jnz     short loc_51CE9F
0x51CE7A: lea     ebx, [ebx+0]
0x51CE80: mov     edx, [ecx+28h]
0x51CE83: shr     edx, 8
0x51CE86: test    dl, 1
0x51CE89: jnz     short loc_51CEB9
0x51CE8B: mov     ecx, [ecx+100h]
0x51CE91: test    ecx, ecx
0x51CE93: jz      short loc_51CEB9
0x51CE95: mov     eax, [ecx+28h]
0x51CE98: shr     eax, 8
0x51CE9B: test    al, 1
0x51CE9D: jz      short loc_51CE80
0x51CE9F: mov     edx, [ecx+28h]
0x51CEA2: shr     edx, 8
0x51CEA5: test    dl, 1
0x51CEA8: jz      short loc_51CEB9
0x51CEAA: mov     ecx, [ecx+100h]
0x51CEB0: test    ecx, ecx
0x51CEB2: jz      short loc_51CEB9
0x51CEB4: jmp     loc_519AD0
0x51CEB9: xor     eax, eax
0x51CEBB: retn    4
