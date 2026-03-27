0x440F70: lea     eax, [ecx+8Ch]
0x440F76: test    eax, eax
0x440F78: jz      short loc_440F91
0x440F7A: mov     edx, [esp+arg_0]
0x440F7E: mov     edi, edi
0x440F80: mov     ecx, [eax]
0x440F82: test    ecx, ecx
0x440F84: jz      short loc_440F91
0x440F86: cmp     [ecx], edx
0x440F88: jz      short loc_440F97
0x440F8A: mov     eax, [eax+4]
0x440F8D: test    eax, eax
0x440F8F: jnz     short loc_440F80
0x440F91: xor     ax, ax
0x440F94: retn    4
0x440F97: mov     ax, [ecx+4]
0x440F9B: retn    4
