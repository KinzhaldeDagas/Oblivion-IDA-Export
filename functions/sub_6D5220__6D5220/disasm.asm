0x6D5220: mov     ecx, [ecx+30h]
0x6D5223: test    ecx, ecx
0x6D5225: jz      short loc_6D5240
0x6D5227: mov     eax, [ecx]
0x6D5229: mov     edx, [eax+4]
0x6D522C: call    edx
0x6D522E: test    eax, eax
0x6D5230: jz      short loc_6D5240
0x6D5232: cmp     eax, offset dword_B3FD5C
0x6D5237: jz      short loc_6D5243
0x6D5239: mov     eax, [eax+4]
0x6D523C: test    eax, eax
0x6D523E: jnz     short loc_6D5232
0x6D5240: xor     al, al
0x6D5242: retn
0x6D5243: mov     al, 1
0x6D5245: retn
