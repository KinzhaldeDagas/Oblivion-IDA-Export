0x569A20: mov     cl, [ecx]
0x569A22: test    cl, cl
0x569A24: mov     eax, 5
0x569A29: jl      short locret_569A39
0x569A2B: cmp     cl, 4
0x569A2E: jle     short loc_569A34
0x569A30: cmp     cl, al
0x569A32: jnz     short locret_569A39
0x569A34: mov     eax, 9
0x569A39: retn
