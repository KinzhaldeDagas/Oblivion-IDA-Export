0x529BB0: add     ecx, 40h ; '@'
0x529BB3: jz      short loc_529BD1
0x529BB5: mov     dl, [esp+arg_0]
0x529BB9: lea     esp, [esp+0]
0x529BC0: mov     eax, [ecx]
0x529BC2: test    eax, eax
0x529BC4: jz      short loc_529BCA
0x529BC6: cmp     [eax], dl
0x529BC8: jz      short locret_529BD3
0x529BCA: mov     ecx, [ecx+4]
0x529BCD: test    ecx, ecx
0x529BCF: jnz     short loc_529BC0
0x529BD1: xor     eax, eax
0x529BD3: retn    4
