0x6D5D10: mov     ax, [esp+arg_0]
0x6D5D15: test    ax, ax
0x6D5D18: jnz     short loc_6D5D27
0x6D5D1A: mov     ecx, [ecx+2Ch]
0x6D5D1D: test    ecx, ecx
0x6D5D1F: jz      short loc_6D5D4D
0x6D5D21: mov     eax, [ecx+24h]
0x6D5D24: retn    4
0x6D5D27: cmp     ax, 1
0x6D5D2B: jnz     short loc_6D5D3A
0x6D5D2D: mov     ecx, [ecx+2Ch]
0x6D5D30: test    ecx, ecx
0x6D5D32: jz      short loc_6D5D4D
0x6D5D34: mov     eax, [ecx+20h]
0x6D5D37: retn    4
0x6D5D3A: cmp     ax, 2
0x6D5D3E: jnz     short loc_6D5D4D
0x6D5D40: mov     ecx, [ecx+2Ch]
0x6D5D43: test    ecx, ecx
0x6D5D45: jz      short loc_6D5D4D
0x6D5D47: mov     eax, [ecx+28h]
0x6D5D4A: retn    4
0x6D5D4D: xor     eax, eax
0x6D5D4F: retn    4
