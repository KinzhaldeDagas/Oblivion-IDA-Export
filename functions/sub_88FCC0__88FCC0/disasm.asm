0x88FCC0: push    ebp
0x88FCC1: mov     ebp, esp
0x88FCC3: mov     eax, [ebp+arg_4]
0x88FCC6: movaps  xmm0, xmmword ptr [eax]
0x88FCC9: mov     eax, [ebp+arg_0]
0x88FCCC: movaps  xmm1, xmmword ptr [eax+30h]
0x88FCD0: movaps  xmm3, xmmword ptr [eax+20h]
0x88FCD4: movaps  xmm2, xmm0
0x88FCD7: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x88FCDB: mulps   xmm3, xmm2
0x88FCDE: movaps  xmm2, xmmword ptr [eax+10h]
0x88FCE2: addps   xmm3, xmm1
0x88FCE5: movaps  xmm1, xmm0
0x88FCE8: shufps  xmm1, xmm0, 55h ; 'U'
0x88FCEC: mulps   xmm2, xmm1
0x88FCEF: movaps  xmm1, xmm0
0x88FCF2: shufps  xmm1, xmm0, 0
0x88FCF6: movaps  xmm0, xmmword ptr [eax]
0x88FCF9: mulps   xmm0, xmm1
0x88FCFC: addps   xmm0, xmm2
0x88FCFF: addps   xmm0, xmm3
0x88FD02: and     esp, 0FFFFFFF0h
0x88FD05: movaps  xmmword ptr [ecx], xmm0
0x88FD08: mov     esp, ebp
0x88FD0A: pop     ebp
0x88FD0B: retn    8
