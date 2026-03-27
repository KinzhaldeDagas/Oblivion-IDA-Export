0x77B670: mov     eax, [esp+arg_4]
0x77B674: movzx   eax, word ptr ds:0B427B0h[eax*2]
0x77B67C: cmp     ax, 5
0x77B680: jnb     short loc_77B698
0x77B682: mov     edx, [esp+arg_0]
0x77B686: movzx   eax, ax
0x77B689: lea     edx, [edx+edx*4+1A4h]
0x77B690: add     edx, eax
0x77B692: mov     eax, [ecx+edx*8]
0x77B695: retn    8
0x77B698: xor     eax, eax
0x77B69A: retn    8
