0x535AA0: push    ebp
0x535AA1: mov     ebp, esp
0x535AA3: and     esp, 0FFFFFFF0h
0x535AA6: movss   xmm1, [ebp+arg_0]
0x535AAB: mov     eax, ecx
0x535AAD: xorps   xmm0, xmm0
0x535AB0: movss   xmm0, xmm1
0x535AB4: movaps  xmmword ptr [eax], xmm0
0x535AB7: mov     esp, ebp
0x535AB9: pop     ebp
0x535ABA: retn    4
