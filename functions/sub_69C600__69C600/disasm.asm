0x69C600: mov     eax, 1
0x69C605: cmp     [ecx+88h], eax
0x69C60B: jz      short loc_69C617
0x69C60D: mov     ecx, [ecx+8]
0x69C610: shr     ecx, 5
0x69C613: test    al, cl
0x69C615: jz      short locret_69C619
0x69C617: xor     eax, eax
0x69C619: retn
