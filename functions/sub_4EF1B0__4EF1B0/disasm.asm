0x4EF1B0: mov     eax, [ecx+7Ch]
0x4EF1B3: test    eax, eax
0x4EF1B5: jz      short loc_4EF1C0
0x4EF1B7: mov     ecx, eax
0x4EF1B9: mov     eax, [ecx+7Ch]
0x4EF1BC: test    eax, eax
0x4EF1BE: jnz     short loc_4EF1B7
0x4EF1C0: lea     eax, [ecx+84h]
0x4EF1C6: retn
