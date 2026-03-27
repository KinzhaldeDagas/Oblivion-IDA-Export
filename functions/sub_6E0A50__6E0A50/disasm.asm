0x6E0A50: mov     ecx, [esp+arg_0]
0x6E0A54: test    ecx, ecx
0x6E0A56: jz      short loc_6E0A71
0x6E0A58: mov     eax, [ecx]
0x6E0A5A: mov     edx, [eax+4]
0x6E0A5D: call    edx
0x6E0A5F: test    eax, eax
0x6E0A61: jz      short loc_6E0A71
0x6E0A63: cmp     eax, offset dword_B3FD14
0x6E0A68: jz      short loc_6E0A76
0x6E0A6A: mov     eax, [eax+4]
0x6E0A6D: test    eax, eax
0x6E0A6F: jnz     short loc_6E0A63
0x6E0A71: xor     al, al
0x6E0A73: retn    4
0x6E0A76: mov     al, 1
0x6E0A78: retn    4
