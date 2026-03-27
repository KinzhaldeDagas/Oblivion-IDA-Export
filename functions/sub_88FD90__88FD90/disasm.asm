0x88FD90: push    ebp
0x88FD91: mov     ebp, esp
0x88FD93: and     esp, 0FFFFFFF0h
0x88FD96: mov     eax, [ebp+arg_0]
0x88FD99: movaps  xmm3, xmmword ptr [eax+20h]
0x88FD9D: movaps  xmm5, xmmword ptr [eax+10h]
0x88FDA1: movaps  xmm2, xmmword ptr [eax]
0x88FDA4: mov     eax, [ebp+arg_4]
0x88FDA7: movaps  xmm1, xmmword ptr [eax]
0x88FDAA: movaps  xmm4, xmm3
0x88FDAD: shufps  xmm4, xmm3, 44h ; 'D'
0x88FDB1: movaps  xmm7, xmm3
0x88FDB4: movaps  xmm0, xmm2
0x88FDB7: shufps  xmm0, xmm5, 44h ; 'D'
0x88FDBB: shufps  xmm7, xmm3, 0EEh ; 'î'
0x88FDBF: shufps  xmm2, xmm5, 0EEh ; 'î'
0x88FDC3: movaps  xmm5, xmm0
0x88FDC6: movaps  xmm3, xmm1
0x88FDC9: shufps  xmm3, xmm1, 55h ; 'U'
0x88FDCD: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x88FDD1: mulps   xmm5, xmm3
0x88FDD4: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x88FDD8: movaps  xmm3, xmm1
0x88FDDB: movaps  xmm6, xmm1
0x88FDDE: shufps  xmm3, xmm1, 0
0x88FDE2: mulps   xmm0, xmm3
0x88FDE5: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x88FDE9: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x88FDED: mulps   xmm2, xmm6
0x88FDF0: addps   xmm0, xmm5
0x88FDF3: addps   xmm0, xmm2
0x88FDF6: movaps  xmmword ptr [ecx], xmm0
0x88FDF9: mov     esp, ebp
0x88FDFB: pop     ebp
0x88FDFC: retn    8
