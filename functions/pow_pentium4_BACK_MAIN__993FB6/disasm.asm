0x993FB6: movd    xmm1, edx
0x993FBA: psubq   xmm0, xmm1
0x993FBE: psrlq   xmm0, 8
0x993FC3: cvtdq2pd xmm0, xmm0
0x993FC7: movlpd  xmm1, ds:qword_AAB998
0x993FCF: movsd   xmm3, xmm7
0x993FD3: psrlq   xmm7, 26h ; '&'
0x993FD8: pextrw  eax, xmm7, 0
0x993FDD: andpd   xmm4, ds:xmmword_AAB940
0x993FE5: and     eax, 0FFh
0x993FEA: add     eax, 1
0x993FED: and     eax, 1FEh
0x993FF2: mulsd   xmm3, ds:qword_AA8CD0[eax*4]
0x993FFB: mulsd   xmm5, ds:qword_AA8CD0[eax*4]
0x994004: add     eax, eax
0x994006: addpd   xmm6, ds:xmmword_AA90E0[eax*4]
0x99400F: orpd    xmm4, ds:xmmword_AAB950
0x994017: addsd   xmm6, xmm0
0x99401B: andpd   xmm1, xmm4
0x99401F: movsd   xmm2, xmm3
0x994023: psrlq   xmm3, 1Fh
0x994028: pextrw  eax, xmm3, 0
0x99402D: movlpd  xmm0, ds:qword_AAB998
0x994035: subsd   xmm4, xmm1
0x994039: movlpd  xmm7, ds:qword_AAB9A0
0x994041: and     eax, 1FFh
0x994046: add     eax, 1
0x994049: and     eax, 3FEh
0x99404E: mulsd   xmm5, ds:qword_AA98F0[eax*4]
0x994057: mulsd   xmm2, ds:qword_AA98F0[eax*4]
0x994060: addpd   xmm6, ds:xmmword_AAA100[eax*8]
0x994069: andpd   xmm0, xmm5
0x99406D: subsd   xmm5, xmm0
0x994071: addsd   xmm7, xmm2
0x994075: movsd   xmm3, xmm0
0x994079: mulsd   xmm0, xmm1
0x99407D: mulsd   xmm1, xmm5
0x994081: mulsd   xmm3, xmm4
0x994085: subsd   xmm2, xmm0
0x994089: mulsd   xmm4, xmm5
0x99408D: movsd   xmm0, xmm6
0x994091: subsd   xmm2, xmm1
0x994095: addsd   xmm6, xmm7
0x994099: movlpd  xmm1, [esp+arg_8]
0x99409F: pextrw  eax, xmm1, 3
0x9940A4: subsd   xmm2, xmm3
0x9940A8: subsd   xmm0, xmm6
0x9940AC: movlpd  xmm3, ds:qword_AAB998
0x9940B4: pextrw  edx, xmm6, 3
0x9940B9: subsd   xmm2, xmm4
0x9940BD: movsd   xmm4, xmm6
0x9940C1: addsd   xmm0, xmm7
0x9940C5: subsd   xmm7, xmm2
0x9940C9: subsd   xmm6, xmm2
0x9940CD: unpcklpd xmm7, xmm7
0x9940D1: and     eax, 7FF0h
0x9940D6: cmp     eax, 7FF0h
0x9940DB: jnb     __pow_pentium4___SPECIAL_Y
0x9940E1: and     edx, 7FF0h
0x9940E7: sub     eax, 3FF0h
0x9940EC: add     eax, edx
0x9940EE: mov     edx, 40A0h
0x9940F3: sub     edx, eax
0x9940F5: sub     eax, 3C70h
0x9940FA: or      edx, eax
0x9940FC: cmp     edx, 80000000h
0x994102: jnb     __pow_pentium4___RETURN_ONE
