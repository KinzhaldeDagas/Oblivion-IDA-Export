0x6D5D60: mov     ax, [esp+arg_0]
0x6D5D65: test    ax, ax
0x6D5D68: jnz     short loc_6D5D77
0x6D5D6A: mov     ecx, [ecx+2Ch]
0x6D5D6D: test    ecx, ecx
0x6D5D6F: jz      short loc_6D5D9D
0x6D5D71: mov     al, [ecx+1Dh]
0x6D5D74: retn    4
0x6D5D77: cmp     ax, 1
0x6D5D7B: jnz     short loc_6D5D8A
0x6D5D7D: mov     ecx, [ecx+2Ch]
0x6D5D80: test    ecx, ecx
0x6D5D82: jz      short loc_6D5D9D
0x6D5D84: mov     al, [ecx+1Ch]
0x6D5D87: retn    4
0x6D5D8A: cmp     ax, 2
0x6D5D8E: jnz     short loc_6D5D9D
0x6D5D90: mov     ecx, [ecx+2Ch]
0x6D5D93: test    ecx, ecx
0x6D5D95: jz      short loc_6D5D9D
0x6D5D97: mov     al, [ecx+1Eh]
0x6D5D9A: retn    4
0x6D5D9D: xor     al, al
0x6D5D9F: retn    4
