0x88FD10: push    ebp
0x88FD11: mov     ebp, esp
0x88FD13: and     esp, 0FFFFFFF0h
0x88FD16: mov     eax, [ebp+arg_0]
0x88FD19: movaps  xmm3, xmmword ptr [eax+20h]
0x88FD1D: movaps  xmm1, xmmword ptr [eax+30h]
0x88FD21: mov     edx, [ebp+arg_4]
0x88FD24: movaps  xmm0, xmmword ptr [edx]
0x88FD27: movaps  xmm2, xmmword ptr [eax]
0x88FD2A: movaps  xmm5, xmmword ptr [eax+10h]
0x88FD2E: subps   xmm0, xmm1
0x88FD31: movaps  xmm4, xmm3
0x88FD34: shufps  xmm4, xmm3, 44h ; 'D'
0x88FD38: movaps  xmm7, xmm3
0x88FD3B: movaps  xmm1, xmm2
0x88FD3E: shufps  xmm1, xmm5, 44h ; 'D'
0x88FD42: shufps  xmm7, xmm3, 0EEh ; 'î'
0x88FD46: shufps  xmm2, xmm5, 0EEh ; 'î'
0x88FD4A: movaps  xmm5, xmm1
0x88FD4D: movaps  xmm3, xmm0
0x88FD50: shufps  xmm3, xmm0, 55h ; 'U'
0x88FD54: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x88FD58: mulps   xmm5, xmm3
0x88FD5B: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x88FD5F: movaps  xmm3, xmm0
0x88FD62: movaps  xmm6, xmm0
0x88FD65: shufps  xmm3, xmm0, 0
0x88FD69: mulps   xmm1, xmm3
0x88FD6C: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x88FD70: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x88FD74: mulps   xmm2, xmm6
0x88FD77: addps   xmm1, xmm5
0x88FD7A: addps   xmm1, xmm2
0x88FD7D: movaps  xmmword ptr [ecx], xmm1
0x88FD80: mov     esp, ebp
0x88FD82: pop     ebp
0x88FD83: retn    8
