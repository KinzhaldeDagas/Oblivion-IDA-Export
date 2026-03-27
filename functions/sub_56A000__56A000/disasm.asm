0x56A000: mov     cl, [ecx]
0x56A002: cmp     cl, 1
0x56A005: mov     eax, 5
0x56A00A: jbe     short loc_56A011
0x56A00C: cmp     cl, 2
0x56A00F: jnz     short locret_56A016
0x56A011: mov     eax, 9
0x56A016: retn
