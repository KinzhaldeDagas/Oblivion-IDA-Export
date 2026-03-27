0x94DA90: mov     eax, [esp+arg_0]
0x94DA94: mov     edx, [esp+arg_10]
0x94DA98: mov     [ecx+84h], eax
0x94DA9E: movaps  xmm0, xmmword ptr [edx]
0x94DAA1: mov     eax, [esp+arg_C]
0x94DAA5: mov     edx, [esp+arg_4]
0x94DAA9: movaps  xmmword ptr [ecx+60h], xmm0
0x94DAAD: movaps  xmm0, xmmword ptr [eax]
0x94DAB0: mov     eax, [esp+arg_8]
0x94DAB4: movaps  xmmword ptr [ecx+70h], xmm0
0x94DAB8: mov     [ecx+88h], edx
0x94DABE: mov     [ecx+80h], eax
0x94DAC4: retn    14h
