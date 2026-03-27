0x4EF7E0: mov     eax, [ecx+7Ch]
0x4EF7E3: test    eax, eax
0x4EF7E5: jz      short loc_4EF7F0
0x4EF7E7: mov     ecx, eax
0x4EF7E9: mov     eax, [ecx+7Ch]
0x4EF7EC: test    eax, eax
0x4EF7EE: jnz     short loc_4EF7E7
0x4EF7F0: lea     eax, [ecx+38h]
0x4EF7F3: retn
