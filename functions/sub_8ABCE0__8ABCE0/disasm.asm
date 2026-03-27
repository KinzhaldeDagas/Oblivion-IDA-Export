0x8ABCE0: push    ebp
0x8ABCE1: mov     ebp, esp
0x8ABCE3: mov     eax, [ecx+50h]
0x8ABCE6: movaps  xmm1, xmmword ptr [eax+60h]
0x8ABCEA: mov     ecx, [ebp+arg_0]
0x8ABCED: movaps  xmm0, xmmword ptr [ecx]
0x8ABCF0: mov     ecx, [ebp+arg_4]
0x8ABCF3: subps   xmm0, xmm1
0x8ABCF6: movaps  xmm1, xmmword ptr [eax+0E0h]
0x8ABCFD: movaps  xmm2, xmm0
0x8ABD00: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8ABD04: movaps  xmm3, xmm1
0x8ABD07: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8ABD0B: mulps   xmm3, xmm2
0x8ABD0E: movaps  xmm2, xmm0
0x8ABD11: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8ABD15: movaps  xmm0, xmm1
0x8ABD18: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8ABD1C: mulps   xmm0, xmm2
0x8ABD1F: subps   xmm0, xmm3
0x8ABD22: movaps  xmmword ptr [ecx], xmm0
0x8ABD25: movaps  xmm1, xmmword ptr [eax+0D0h]
0x8ABD2C: addps   xmm0, xmm1
0x8ABD2F: and     esp, 0FFFFFFF0h
0x8ABD32: movaps  xmmword ptr [ecx], xmm0
0x8ABD35: mov     esp, ebp
0x8ABD37: pop     ebp
0x8ABD38: retn    8
