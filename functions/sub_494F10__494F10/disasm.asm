0x494F10: test    ecx, ecx
0x494F12: jz      short loc_494F2A
0x494F14: mov     eax, [ecx+8]
0x494F17: test    eax, eax
0x494F19: jz      short loc_494F2A
0x494F1B: add     eax, 14h
0x494F1E: jz      short loc_494F2A
0x494F20: mov     eax, [eax]
0x494F22: test    eax, eax
0x494F24: jz      short loc_494F2A
0x494F26: mov     eax, [eax+8]
0x494F29: retn
0x494F2A: xor     eax, eax
0x494F2C: retn
