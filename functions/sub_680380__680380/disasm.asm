0x680380: mov     edx, [esp+arg_0]
0x680384: xor     eax, eax
0x680386: test    edx, edx
0x680388: jz      short locret_68039D
0x68038A: cmp     [ecx+8], edx
0x68038D: jnz     short loc_680395
0x68038F: mov     eax, [ecx+4]
0x680392: retn    4
0x680395: cmp     [ecx+10h], edx
0x680398: jnz     short locret_68039D
0x68039A: mov     eax, [ecx+0Ch]
0x68039D: retn    4
