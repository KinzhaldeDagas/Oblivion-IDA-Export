0x6DAD90: mov     ax, [esp+arg_0]
0x6DAD95: test    ax, ax
0x6DAD98: jnz     short loc_6DADA7
0x6DAD9A: mov     ecx, [ecx+18h]
0x6DAD9D: test    ecx, ecx
0x6DAD9F: jz      short loc_6DADBA
0x6DADA1: mov     eax, [ecx+8]
0x6DADA4: retn    4
0x6DADA7: cmp     ax, 1
0x6DADAB: jnz     short loc_6DADBA
0x6DADAD: mov     ecx, [ecx+1Ch]
0x6DADB0: test    ecx, ecx
0x6DADB2: jz      short loc_6DADBA
0x6DADB4: mov     eax, [ecx+8]
0x6DADB7: retn    4
0x6DADBA: xor     eax, eax
0x6DADBC: retn    4
