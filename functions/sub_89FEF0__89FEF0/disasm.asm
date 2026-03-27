0x89FEF0: test    ecx, ecx
0x89FEF2: jz      short locret_89FF0B
0x89FEF4: mov     ecx, [ecx+8]
0x89FEF7: test    ecx, ecx
0x89FEF9: jz      short locret_89FF0B
0x89FEFB: mov     eax, [esp+arg_0]
0x89FEFF: mov     edx, [eax+8]
0x89FF02: mov     [esp+arg_0], edx
0x89FF06: jmp     sub_8E7C20
0x89FF0B: retn    4
