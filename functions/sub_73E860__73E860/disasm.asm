0x73E860: mov     edx, [esp+arg_0]
0x73E864: test    edx, edx
0x73E866: jge     short loc_73E86D
0x73E868: xor     eax, eax
0x73E86A: retn    4
0x73E86D: mov     eax, [ecx+28h]
0x73E870: cmp     edx, eax
0x73E872: jge     short locret_73E876
0x73E874: mov     eax, edx
0x73E876: retn    4
