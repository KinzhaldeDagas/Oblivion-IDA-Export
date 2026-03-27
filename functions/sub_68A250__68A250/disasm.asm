0x68A250: lea     eax, [ecx+4]
0x68A253: test    eax, eax
0x68A255: jz      short loc_68A272
0x68A257: mov     edx, [eax+4]
0x68A25A: test    edx, edx
0x68A25C: jnz     short loc_68A262
0x68A25E: cmp     [eax], edx
0x68A260: jz      short loc_68A272
0x68A262: mov     eax, [eax]
0x68A264: test    eax, eax
0x68A266: jz      short loc_68A26C
0x68A268: test    edx, edx
0x68A26A: jz      short loc_68A278
0x68A26C: mov     eax, edx
0x68A26E: test    eax, eax
0x68A270: jnz     short loc_68A257
0x68A272: mov     eax, offset Vector3_InitValue?
0x68A277: retn
0x68A278: mov     ecx, eax
0x68A27A: jmp     sub_68B110
