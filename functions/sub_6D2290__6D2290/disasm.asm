0x6D2290: mov     ecx, [esp+arg_0]
0x6D2294: test    ecx, ecx
0x6D2296: jz      short loc_6D22B1
0x6D2298: mov     eax, [ecx]
0x6D229A: mov     edx, [eax+4]
0x6D229D: call    edx
0x6D229F: test    eax, eax
0x6D22A1: jz      short loc_6D22B1
0x6D22A3: cmp     eax, offset dword_B3FA9C
0x6D22A8: jz      short loc_6D22B6
0x6D22AA: mov     eax, [eax+4]
0x6D22AD: test    eax, eax
0x6D22AF: jnz     short loc_6D22A3
0x6D22B1: xor     al, al
0x6D22B3: retn    4
0x6D22B6: mov     al, 1
0x6D22B8: retn    4
