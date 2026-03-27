0x5A8F80: mov     eax, [ecx+40h]
0x5A8F83: test    eax, eax
0x5A8F85: jz      short loc_5A8F99
0x5A8F87: mov     eax, [eax]
0x5A8F89: mov     ecx, [esp+arg_0]
0x5A8F8D: cmp     eax, [ecx]
0x5A8F8F: jnz     short loc_5A8F99
0x5A8F91: mov     eax, 1
0x5A8F96: retn    4
0x5A8F99: xor     eax, eax
0x5A8F9B: retn    4
