0x90D240: mov     edx, [ecx+4]
0x90D243: test    edx, edx
0x90D245: mov     eax, [ecx+1Ch]
0x90D248: jz      short locret_90D25C
0x90D24A: lea     ebx, [ebx+0]
0x90D250: mov     ecx, [edx+1Ch]
0x90D253: mov     edx, [edx+4]
0x90D256: add     eax, ecx
0x90D258: test    edx, edx
0x90D25A: jnz     short loc_90D250
0x90D25C: retn
