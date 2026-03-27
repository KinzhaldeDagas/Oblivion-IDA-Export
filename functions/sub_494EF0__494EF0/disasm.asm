0x494EF0: test    ecx, ecx
0x494EF2: jz      short loc_494EFF
0x494EF4: mov     eax, [ecx+8]
0x494EF7: test    eax, eax
0x494EF9: jz      short loc_494EFF
0x494EFB: add     eax, 14h
0x494EFE: retn
0x494EFF: xor     eax, eax
0x494F01: retn
