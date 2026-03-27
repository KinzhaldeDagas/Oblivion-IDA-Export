0x6DADC0: mov     ax, [esp+arg_0]
0x6DADC5: test    ax, ax
0x6DADC8: jnz     short loc_6DADD7
0x6DADCA: mov     ecx, [ecx+18h]
0x6DADCD: test    ecx, ecx
0x6DADCF: jz      short loc_6DADEA
0x6DADD1: mov     eax, [ecx+10h]
0x6DADD4: retn    4
0x6DADD7: cmp     ax, 1
0x6DADDB: jnz     short loc_6DADEA
0x6DADDD: mov     ecx, [ecx+1Ch]
0x6DADE0: test    ecx, ecx
0x6DADE2: jz      short loc_6DADEA
0x6DADE4: mov     eax, [ecx+10h]
0x6DADE7: retn    4
0x6DADEA: xor     eax, eax
0x6DADEC: retn    4
