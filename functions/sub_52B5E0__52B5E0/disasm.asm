0x52B5E0: lea     eax, [ecx+0A8h]
0x52B5E6: test    eax, eax
0x52B5E8: jz      short loc_52B602
0x52B5EA: mov     edx, [esp+arg_0]
0x52B5EE: mov     edi, edi
0x52B5F0: mov     ecx, [eax]
0x52B5F2: test    ecx, ecx
0x52B5F4: jz      short loc_52B602
0x52B5F6: cmp     [ecx+0Ch], edx
0x52B5F9: jz      short loc_52B607
0x52B5FB: mov     eax, [eax+4]
0x52B5FE: test    eax, eax
0x52B600: jnz     short loc_52B5F0
0x52B602: xor     eax, eax
0x52B604: retn    4
0x52B607: mov     eax, ecx
0x52B609: retn    4
