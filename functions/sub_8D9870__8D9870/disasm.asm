0x8D9870: push    ebp
0x8D9871: mov     ebp, esp
0x8D9873: and     esp, 0FFFFFFF0h
0x8D9876: sub     esp, 20h
0x8D9879: mov     eax, [ebp+arg_0]
0x8D987C: movaps  xmm0, xmmword ptr [eax]
0x8D987F: movaps  xmmword ptr [ecx+10h], xmm0
0x8D9883: movaps  xmm0, xmmword ptr [eax]
0x8D9886: mulps   xmm0, xmm0
0x8D9889: movaps  xmm1, xmm0
0x8D988C: shufps  xmm1, xmm0, 55h ; 'U'
0x8D9890: movaps  xmm2, xmm0
0x8D9893: addss   xmm1, xmm0
0x8D9897: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D989B: movaps  xmm0, xmm2
0x8D989E: addss   xmm0, xmm1
0x8D98A2: movaps  [esp+20h+var_10], xmm0
0x8D98A7: sqrtss  xmm0, xmm0
0x8D98AB: movss   dword ptr [esp+20h+var_10], xmm0
0x8D98B1: movaps  xmm0, [esp+20h+var_10]
0x8D98B6: lea     eax, [esp+20h+var_14]
0x8D98BA: movss   dword ptr [eax], xmm0
0x8D98BE: mov     edx, [esp+20h+var_14]
0x8D98C2: mov     eax, [ebp+arg_4]
0x8D98C5: mov     [ecx+24h], edx
0x8D98C8: mov     [ecx+8], eax
0x8D98CB: mov     esp, ebp
0x8D98CD: pop     ebp
0x8D98CE: retn    8
