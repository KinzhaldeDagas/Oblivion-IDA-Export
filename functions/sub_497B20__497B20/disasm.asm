0x497B20: mov     eax, [esp+arg_0]
0x497B24: test    eax, eax
0x497B26: mov     byte ptr ds:0B34FC8h, 0
0x497B2D: jz      short locret_497B42
0x497B2F: mov     edx, offset byte_B34FC8
0x497B34: sub     edx, eax
0x497B36: mov     cl, [eax]
0x497B38: mov     [edx+eax], cl
0x497B3B: add     eax, 1
0x497B3E: test    cl, cl
0x497B40: jnz     short loc_497B36
0x497B42: retn
