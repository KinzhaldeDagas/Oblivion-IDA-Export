0x606AD0: mov     eax, [ecx+3Ch]
0x606AD3: test    eax, eax
0x606AD5: jz      short loc_606AEB
0x606AD7: mov     ecx, [esp+arg_0]
0x606ADB: jmp     short loc_606AE0
0x606ADD: align 10h
0x606AE0: cmp     [eax], ecx
0x606AE2: jz      short loc_606AEB
0x606AE4: mov     eax, [eax+4]
0x606AE7: test    eax, eax
0x606AE9: jnz     short loc_606AE0
0x606AEB: xor     ecx, ecx
0x606AED: test    eax, eax
0x606AEF: setnz   cl
0x606AF2: mov     al, cl
0x606AF4: retn    4
