0x90D200: xor     eax, eax
0x90D202: test    ecx, ecx
0x90D204: jz      short locret_90D20E
0x90D206: mov     ecx, [ecx+4]
0x90D209: inc     eax
0x90D20A: test    ecx, ecx
0x90D20C: jnz     short loc_90D206
0x90D20E: retn
