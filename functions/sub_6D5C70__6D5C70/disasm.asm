0x6D5C70: mov     ax, [esp+arg_0]
0x6D5C75: test    ax, ax
0x6D5C78: jnz     short loc_6D5C88
0x6D5C7A: mov     ecx, [ecx+2Ch]
0x6D5C7D: test    ecx, ecx
0x6D5C7F: jz      short loc_6D5CB0
0x6D5C81: movzx   eax, word ptr [ecx+0Ah]
0x6D5C85: retn    4
0x6D5C88: cmp     ax, 1
0x6D5C8C: jnz     short loc_6D5C9C
0x6D5C8E: mov     ecx, [ecx+2Ch]
0x6D5C91: test    ecx, ecx
0x6D5C93: jz      short loc_6D5CB0
0x6D5C95: movzx   eax, word ptr [ecx+8]
0x6D5C99: retn    4
0x6D5C9C: cmp     ax, 2
0x6D5CA0: jnz     short loc_6D5CB0
0x6D5CA2: mov     ecx, [ecx+2Ch]
0x6D5CA5: test    ecx, ecx
0x6D5CA7: jz      short loc_6D5CB0
0x6D5CA9: movzx   eax, word ptr [ecx+0Ch]
0x6D5CAD: retn    4
0x6D5CB0: xor     eax, eax
0x6D5CB2: retn    4
