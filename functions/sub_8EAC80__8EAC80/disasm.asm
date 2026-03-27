0x8EAC80: push    ebp
0x8EAC81: mov     ebp, esp
0x8EAC83: and     esp, 0FFFFFFF0h
0x8EAC86: sub     esp, 10h
0x8EAC89: mov     eax, [ebp+arg_0]
0x8EAC8C: mov     edx, [ecx+0C0h]
0x8EAC92: mov     [esp+10h+var_4], eax
0x8EAC96: movss   xmm0, [esp+10h+var_4]
0x8EAC9C: mov     eax, [ebp+arg_4]
0x8EAC9F: movaps  xmm2, xmmword ptr [eax]
0x8EACA2: movaps  xmm3, xmm0
0x8EACA5: shufps  xmm3, xmm0, 0
0x8EACA9: mov     [esp+10h+var_4], edx
0x8EACAD: movss   xmm1, [esp+10h+var_4]
0x8EACB3: movaps  xmm0, xmm1
0x8EACB6: shufps  xmm0, xmm1, 0
0x8EACBA: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EACC1: mulps   xmm3, xmm2
0x8EACC4: mulps   xmm0, xmm3
0x8EACC7: addps   xmm1, xmm0
0x8EACCA: movaps  xmmword ptr [ecx+0D0h], xmm1
0x8EACD1: mov     esp, ebp
0x8EACD3: pop     ebp
0x8EACD4: retn    8
