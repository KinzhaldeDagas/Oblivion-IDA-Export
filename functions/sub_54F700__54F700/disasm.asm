0x54F700: mov     eax, [ecx+4]
0x54F703: test    eax, eax
0x54F705: jnz     short loc_54F708
0x54F707: retn
0x54F708: mov     ecx, [ecx+8]
0x54F70B: sub     ecx, eax
0x54F70D: mov     eax, 2AAAAAABh
0x54F712: imul    ecx
0x54F714: mov     eax, edx
0x54F716: shr     eax, 1Fh
0x54F719: add     eax, edx
0x54F71B: retn
