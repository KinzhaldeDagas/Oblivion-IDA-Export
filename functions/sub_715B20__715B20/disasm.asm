0x715B20: xor     eax, eax
0x715B22: test    ecx, ecx
0x715B24: jz      short locret_715B30
0x715B26: mov     ecx, [ecx+34h]
0x715B29: add     eax, 1
0x715B2C: test    ecx, ecx
0x715B2E: jnz     short loc_715B26
0x715B30: retn
