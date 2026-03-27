0x4A5930: cmp     dword ptr [ecx+0Ch], 0
0x4A5934: jnz     short loc_4A594B
0x4A5936: cmp     dword ptr [ecx+8], 0
0x4A593A: jnz     short loc_4A594B
0x4A593C: mov     eax, 1
0x4A5941: xor     ecx, ecx
0x4A5943: test    al, al
0x4A5945: setz    cl
0x4A5948: mov     al, cl
0x4A594A: retn
0x4A594B: xor     eax, eax
0x4A594D: xor     ecx, ecx
0x4A594F: test    al, al
0x4A5951: setz    cl
0x4A5954: mov     al, cl
0x4A5956: retn
