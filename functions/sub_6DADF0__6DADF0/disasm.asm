0x6DADF0: mov     ax, [esp+arg_0]
0x6DADF5: test    ax, ax
0x6DADF8: jnz     short loc_6DAE07
0x6DADFA: mov     ecx, [ecx+18h]
0x6DADFD: test    ecx, ecx
0x6DADFF: jz      short loc_6DAE1A
0x6DAE01: mov     eax, [ecx+0Ch]
0x6DAE04: retn    4
0x6DAE07: cmp     ax, 1
0x6DAE0B: jnz     short loc_6DAE1A
0x6DAE0D: mov     ecx, [ecx+1Ch]
0x6DAE10: test    ecx, ecx
0x6DAE12: jz      short loc_6DAE1A
0x6DAE14: mov     eax, [ecx+0Ch]
0x6DAE17: retn    4
0x6DAE1A: xor     eax, eax
0x6DAE1C: retn    4
