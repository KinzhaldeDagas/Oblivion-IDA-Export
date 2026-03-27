0x8EAB80: push    ebp
0x8EAB81: mov     ebp, esp
0x8EAB83: and     esp, 0FFFFFFF0h
0x8EAB86: sub     esp, 30h
0x8EAB89: movaps  xmm0, xmmword ptr [ecx+0F0h]
0x8EAB90: movaps  xmm1, xmmword ptr [ecx+10h]
0x8EAB94: lea     eax, [ecx+10h]
0x8EAB97: movaps  xmm2, xmm0
0x8EAB9A: shufps  xmm2, xmm0, 0
0x8EAB9E: movaps  xmm0, xmmword ptr [ecx+0F0h]
0x8EABA5: mulps   xmm2, xmm1
0x8EABA8: movaps  xmm1, xmmword ptr [ecx+20h]
0x8EABAC: movaps  [esp+30h+var_30], xmm2
0x8EABB0: movaps  xmm2, xmm0
0x8EABB3: shufps  xmm2, xmm0, 55h ; 'U'
0x8EABB7: movaps  xmm0, xmmword ptr [ecx+0F0h]
0x8EABBE: mulps   xmm2, xmm1
0x8EABC1: movaps  xmm1, xmmword ptr [ecx+30h]
0x8EABC5: mov     ecx, [ebp+arg_0]
0x8EABC8: movaps  [esp+30h+var_20], xmm2
0x8EABCD: push    eax
0x8EABCE: movaps  xmm2, xmm0
0x8EABD1: lea     eax, [esp+34h+var_30]
0x8EABD5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8EABD9: mulps   xmm2, xmm1
0x8EABDC: push    eax
0x8EABDD: movaps  [esp+38h+var_10], xmm2
0x8EABE2: call    sub_8D2B10
0x8EABE7: mov     esp, ebp
0x8EABE9: pop     ebp
0x8EABEA: retn    4
