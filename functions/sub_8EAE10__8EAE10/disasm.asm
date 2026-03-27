0x8EAE10: push    ebp
0x8EAE11: mov     ebp, esp
0x8EAE13: and     esp, 0FFFFFFF0h
0x8EAE16: sub     esp, 10h
0x8EAE19: mov     eax, [ecx+0C0h]
0x8EAE1F: mov     edx, [ebp+arg_4]
0x8EAE22: mov     [esp+10h+var_4], eax
0x8EAE26: movss   xmm0, [esp+10h+var_4]
0x8EAE2C: mov     eax, [ebp+arg_0]
0x8EAE2F: movaps  xmm1, xmmword ptr [eax]
0x8EAE32: movaps  xmm2, xmm0
0x8EAE35: shufps  xmm2, xmm0, 0
0x8EAE39: movaps  xmm0, xmmword ptr [ecx+0D0h]
0x8EAE40: mulps   xmm2, xmm1
0x8EAE43: addps   xmm0, xmm2
0x8EAE46: movaps  xmmword ptr [ecx+0D0h], xmm0
0x8EAE4D: movaps  xmm1, xmmword ptr [ecx+60h]
0x8EAE51: movaps  xmm0, xmmword ptr [edx]
0x8EAE54: subps   xmm0, xmm1
0x8EAE57: movaps  xmm1, xmmword ptr [eax]
0x8EAE5A: movaps  xmm5, xmmword ptr [ecx+20h]
0x8EAE5E: movaps  xmm2, xmm1
0x8EAE61: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8EAE65: movaps  xmm3, xmm0
0x8EAE68: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8EAE6C: mulps   xmm3, xmm2
0x8EAE6F: movaps  xmm2, xmm1
0x8EAE72: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8EAE76: movaps  xmm1, xmm0
0x8EAE79: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8EAE7D: movaps  xmm0, xmm1
0x8EAE80: mulps   xmm0, xmm2
0x8EAE83: movaps  xmm2, xmmword ptr [ecx+10h]
0x8EAE87: subps   xmm0, xmm3
0x8EAE8A: movaps  xmm3, xmmword ptr [ecx+30h]
0x8EAE8E: movaps  xmm4, xmm3
0x8EAE91: shufps  xmm4, xmm3, 44h ; 'D'
0x8EAE95: movaps  xmm7, xmm3
0x8EAE98: movaps  xmm1, xmm2
0x8EAE9B: shufps  xmm1, xmm5, 44h ; 'D'
0x8EAE9F: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8EAEA3: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8EAEA7: movaps  xmm5, xmm1
0x8EAEAA: movaps  xmm3, xmm0
0x8EAEAD: shufps  xmm3, xmm0, 55h ; 'U'
0x8EAEB1: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8EAEB5: movaps  xmm6, xmm0
0x8EAEB8: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8EAEBC: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8EAEC0: mulps   xmm5, xmm3
0x8EAEC3: movaps  xmm3, xmm0
0x8EAEC6: shufps  xmm3, xmm0, 0
0x8EAECA: movaps  xmm0, xmmword ptr [ecx+0F0h]
0x8EAED1: mulps   xmm1, xmm3
0x8EAED4: movaps  xmm3, xmmword ptr [ecx+20h]
0x8EAED8: addps   xmm1, xmm5
0x8EAEDB: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8EAEDF: mulps   xmm2, xmm6
0x8EAEE2: addps   xmm1, xmm2
0x8EAEE5: movaps  xmm2, xmmword ptr [ecx+30h]
0x8EAEE9: mulps   xmm0, xmm1
0x8EAEEC: movaps  xmm1, xmm0
0x8EAEEF: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EAEF3: mulps   xmm2, xmm1
0x8EAEF6: movaps  xmm1, xmm0
0x8EAEF9: shufps  xmm1, xmm0, 55h ; 'U'
0x8EAEFD: mulps   xmm3, xmm1
0x8EAF00: movaps  xmm1, xmm0
0x8EAF03: shufps  xmm1, xmm0, 0
0x8EAF07: movaps  xmm0, xmmword ptr [ecx+10h]
0x8EAF0B: mulps   xmm0, xmm1
0x8EAF0E: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8EAF15: addps   xmm0, xmm3
0x8EAF18: addps   xmm0, xmm2
0x8EAF1B: addps   xmm1, xmm0
0x8EAF1E: movaps  xmmword ptr [ecx+0E0h], xmm1
0x8EAF25: mov     esp, ebp
0x8EAF27: pop     ebp
0x8EAF28: retn    8
