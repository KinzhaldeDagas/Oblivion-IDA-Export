0x9943D4: xorpd   xmm0, xmm0
0x9943D8: mov     eax, 43F0h
0x9943DD: pinsrw  xmm0, eax, 3
0x9943E2: movlpd  xmm7, qword ptr ds:xmmword_AAB940
0x9943EA: movlpd  xmm2, qword ptr ds:xmmword_AAB950
0x9943F2: mulsd   xmm0, xmm4
0x9943F6: movd    edx, xmm4
0x9943FA: psrlq   xmm4, 20h ; ' '
0x9943FF: movd    eax, xmm4
0x994403: cmp     edx, 0
0x994406: jz      short __pow_pentium4___ZERO_X
