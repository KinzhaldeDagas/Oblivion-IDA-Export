0x4E7F80: mov     edx, [esp+arg_0]
0x4E7F84: xor     al, al
0x4E7F86: test    edx, edx
0x4E7F88: jz      short locret_4E7FA0
0x4E7F8A: add     ecx, 20h ; ' '
0x4E7F8D: jz      short locret_4E7FA0
0x4E7F8F: nop
0x4E7F90: cmp     [ecx], edx
0x4E7F92: jz      short loc_4E7F9E
0x4E7F94: mov     ecx, [ecx+4]
0x4E7F97: test    ecx, ecx
0x4E7F99: jnz     short loc_4E7F90
0x4E7F9B: retn    4
0x4E7F9E: mov     al, 1
0x4E7FA0: retn    4
