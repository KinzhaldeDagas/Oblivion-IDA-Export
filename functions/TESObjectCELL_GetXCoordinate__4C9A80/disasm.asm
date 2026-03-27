0x4C9A80: test    byte ptr [ecx+24h], 1
0x4C9A84: jnz     short loc_4C9A90
0x4C9A86: mov     eax, [ecx+3Ch]
0x4C9A89: test    eax, eax
0x4C9A8B: jz      short loc_4C9A90
0x4C9A8D: mov     eax, [eax]
0x4C9A8F: retn
0x4C9A90: xor     eax, eax
0x4C9A92: retn
