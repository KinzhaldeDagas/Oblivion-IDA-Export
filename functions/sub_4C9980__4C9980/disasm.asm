0x4C9980: test    byte ptr [ecx+24h], 1
0x4C9984: jz      short loc_4C9991
0x4C9986: mov     eax, [ecx+3Ch]
0x4C9989: test    eax, eax
0x4C998B: jz      short loc_4C9991
0x4C998D: mov     eax, [eax+14h]
0x4C9990: retn
0x4C9991: xor     eax, eax
0x4C9993: retn
