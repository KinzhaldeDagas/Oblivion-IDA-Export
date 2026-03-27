0x4712B0: xor     eax, eax
0x4712B2: add     ecx, 0B4h ; '´'
0x4712B8: cmp     [ecx+4], eax
0x4712BB: jnz     short loc_4712C1
0x4712BD: cmp     [ecx], eax
0x4712BF: jz      short locret_4712CF
0x4712C1: test    ecx, ecx
0x4712C3: jz      short locret_4712CF
0x4712C5: mov     ecx, [ecx+4]
0x4712C8: add     eax, 1
0x4712CB: test    ecx, ecx
0x4712CD: jnz     short loc_4712C5
0x4712CF: retn
