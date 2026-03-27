0x8FDAF0: movaps  xmm0, xmmword ptr [ecx+50h]
0x8FDAF4: movaps  xmmword ptr [ecx+0C0h], xmm0
0x8FDAFB: movaps  xmm3, xmmword ptr [ecx+40h]
0x8FDAFF: movaps  xmm1, xmmword ptr [ecx+0C0h]
0x8FDB06: movaps  xmm2, xmmword ptr [ecx+20h]
0x8FDB0A: movaps  xmm5, xmmword ptr [ecx+30h]
0x8FDB0E: movaps  xmm4, xmm3
0x8FDB11: shufps  xmm4, xmm3, 44h ; 'D'
0x8FDB15: movaps  xmm7, xmm3
0x8FDB18: movaps  xmm0, xmm2
0x8FDB1B: shufps  xmm0, xmm5, 44h ; 'D'
0x8FDB1F: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8FDB23: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8FDB27: movaps  xmm5, xmm0
0x8FDB2A: movaps  xmm3, xmm1
0x8FDB2D: shufps  xmm3, xmm1, 55h ; 'U'
0x8FDB31: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8FDB35: mulps   xmm5, xmm3
0x8FDB38: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x8FDB3C: movaps  xmm3, xmm1
0x8FDB3F: movaps  xmm6, xmm1
0x8FDB42: shufps  xmm3, xmm1, 0
0x8FDB46: mulps   xmm0, xmm3
0x8FDB49: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8FDB4D: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8FDB51: mulps   xmm2, xmm6
0x8FDB54: addps   xmm0, xmm5
0x8FDB57: addps   xmm0, xmm2
0x8FDB5A: movaps  xmmword ptr [ecx+0D0h], xmm0
0x8FDB61: retn
