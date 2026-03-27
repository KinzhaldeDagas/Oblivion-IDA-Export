0x954800: mov     eax, [esp+arg_0]
0x954804: test    eax, eax
0x954806: jz      short locret_954820
0x954808: mov     cl, 1
0x95480A: lea     ebx, [ebx+0]
0x954810: mov     dl, [eax+39h]
0x954813: test    dl, dl
0x954815: jnz     short locret_954820
0x954817: mov     [eax+39h], cl
0x95481A: mov     eax, [eax]
0x95481C: test    eax, eax
0x95481E: jnz     short loc_954810
0x954820: retn    4
