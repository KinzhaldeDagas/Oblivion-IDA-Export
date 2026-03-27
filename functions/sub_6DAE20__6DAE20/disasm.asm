0x6DAE20: mov     ax, [esp+arg_0]
0x6DAE25: test    ax, ax
0x6DAE28: jnz     short loc_6DAE37
0x6DAE2A: mov     ecx, [ecx+18h]
0x6DAE2D: test    ecx, ecx
0x6DAE2F: jz      short loc_6DAE4A
0x6DAE31: mov     al, [ecx+14h]
0x6DAE34: retn    4
0x6DAE37: cmp     ax, 1
0x6DAE3B: jnz     short loc_6DAE4A
0x6DAE3D: mov     ecx, [ecx+1Ch]
0x6DAE40: test    ecx, ecx
0x6DAE42: jz      short loc_6DAE4A
0x6DAE44: mov     al, [ecx+14h]
0x6DAE47: retn    4
0x6DAE4A: xor     al, al
0x6DAE4C: retn    4
