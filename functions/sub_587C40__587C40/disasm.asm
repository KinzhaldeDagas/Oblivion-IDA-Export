0x587C40: mov     eax, [esp+arg_0]
0x587C44: lea     edx, [eax-1]
0x587C47: cmp     edx, 2Fh ; '/'
0x587C4A: ja      short locret_587C54
0x587C4C: mov     edx, [esp+arg_4]
0x587C50: mov     [ecx+eax*4+24h], edx
0x587C54: retn    8
