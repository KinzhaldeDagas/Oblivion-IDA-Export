0x88FE00: push    ebp
0x88FE01: mov     ebp, esp
0x88FE03: mov     eax, [ebp+arg_4]
0x88FE06: movaps  xmm0, xmmword ptr [eax]
0x88FE09: mov     eax, [ebp+arg_0]
0x88FE0C: movaps  xmm2, xmmword ptr [eax+20h]
0x88FE10: movaps  xmm3, xmmword ptr [eax+10h]
0x88FE14: movaps  xmm1, xmm0
0x88FE17: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x88FE1B: mulps   xmm2, xmm1
0x88FE1E: movaps  xmm1, xmm0
0x88FE21: shufps  xmm1, xmm0, 55h ; 'U'
0x88FE25: mulps   xmm3, xmm1
0x88FE28: movaps  xmm1, xmm0
0x88FE2B: shufps  xmm1, xmm0, 0
0x88FE2F: movaps  xmm0, xmmword ptr [eax]
0x88FE32: mulps   xmm0, xmm1
0x88FE35: addps   xmm0, xmm3
0x88FE38: addps   xmm0, xmm2
0x88FE3B: and     esp, 0FFFFFFF0h
0x88FE3E: movaps  xmmword ptr [ecx], xmm0
0x88FE41: mov     esp, ebp
0x88FE43: pop     ebp
0x88FE44: retn    8
