0x4A2FF0: mov     eax, ds:0B33A98h
0x4A2FF5: mov     eax, [eax+0BCh]
0x4A2FFB: xor     ecx, ecx
0x4A2FFD: add     eax, 4
0x4A3000: jz      short loc_4A3011
0x4A3002: cmp     dword ptr [eax], 0
0x4A3005: jz      short loc_4A300A
0x4A3007: add     ecx, 1
0x4A300A: mov     eax, [eax+4]
0x4A300D: test    eax, eax
0x4A300F: jnz     short loc_4A3002
0x4A3011: lea     eax, ds:2[ecx*8]
0x4A3018: retn
