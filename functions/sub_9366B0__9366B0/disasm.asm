0x9366B0: push    ebp
0x9366B1: mov     ebp, esp
0x9366B3: and     esp, 0FFFFFFF0h
0x9366B6: sub     esp, 10h
0x9366B9: mov     eax, [ebp+arg_4]
0x9366BC: mov     ecx, [eax]
0x9366BE: mov     edx, [ebp+arg_0]
0x9366C1: mov     [esp+10h+var_4], ecx
0x9366C5: movss   xmm0, [esp+10h+var_4]
0x9366CB: mov     ecx, [ebp+arg_8]
0x9366CE: movaps  xmm1, xmm0
0x9366D1: shufps  xmm1, xmm0, 0
0x9366D5: movaps  xmm0, xmmword ptr [edx]
0x9366D8: cmpltps xmm1, xmm0
0x9366DC: movmskps eax, xmm1
0x9366DF: and     eax, 7
0x9366E2: mov     [ecx], eax
0x9366E4: mov     esp, ebp
0x9366E6: pop     ebp
0x9366E7: retn
