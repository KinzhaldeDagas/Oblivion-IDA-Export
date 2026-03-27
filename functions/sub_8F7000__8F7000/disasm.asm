0x8F7000: push    ebp
0x8F7001: mov     ebp, esp
0x8F7003: movaps  xmm0, xmmword ptr [ecx+10h]
0x8F7007: mov     eax, [ebp+arg_0]
0x8F700A: movaps  xmm1, xmm0
0x8F700D: shufps  xmm1, xmm0, 0FFh
0x8F7011: and     esp, 0FFFFFFF0h
0x8F7014: movaps  xmmword ptr [eax], xmm1
0x8F7017: mov     esp, ebp
0x8F7019: pop     ebp
0x8F701A: retn    4
