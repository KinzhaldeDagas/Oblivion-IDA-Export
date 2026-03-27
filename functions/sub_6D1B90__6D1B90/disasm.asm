0x6D1B90: mov     ecx, [esp+arg_0]
0x6D1B94: test    ecx, ecx
0x6D1B96: jz      short loc_6D1BB1
0x6D1B98: mov     eax, [ecx]
0x6D1B9A: mov     edx, [eax+4]
0x6D1B9D: call    edx
0x6D1B9F: test    eax, eax
0x6D1BA1: jz      short loc_6D1BB1
0x6D1BA3: cmp     eax, offset dword_B3F96C
0x6D1BA8: jz      short loc_6D1BB6
0x6D1BAA: mov     eax, [eax+4]
0x6D1BAD: test    eax, eax
0x6D1BAF: jnz     short loc_6D1BA3
0x6D1BB1: xor     al, al
0x6D1BB3: retn    4
0x6D1BB6: mov     al, 1
0x6D1BB8: retn    4
