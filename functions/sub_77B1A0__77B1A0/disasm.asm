0x77B1A0: mov     eax, [esp+arg_4]
0x77B1A4: movzx   eax, word ptr ds:0B427E0h[eax*2]
0x77B1AC: cmp     ax, 8
0x77B1B0: jnb     short loc_77B1C6
0x77B1B2: movzx   edx, ax
0x77B1B5: mov     eax, [esp+arg_0]
0x77B1B9: lea     edx, [edx+eax*8]
0x77B1BC: mov     eax, [ecx+edx*8+920h]
0x77B1C3: retn    8
0x77B1C6: xor     eax, eax
0x77B1C8: retn    8
