0x4B6D90: test    ecx, ecx
0x4B6D92: jz      short loc_4B6DA5
0x4B6D94: mov     eax, [ecx+8]
0x4B6D97: test    eax, eax
0x4B6D99: jz      short loc_4B6DA5
0x4B6D9B: mov     ecx, [eax+50h]
0x4B6D9E: mov     eax, [ecx]
0x4B6DA0: mov     edx, [eax+8]
0x4B6DA3: jmp     edx
0x4B6DA5: mov     eax, 7
0x4B6DAA: retn
