0x9945F8: movlpd  xmm4, [esp+arg_0]
0x9945FE: movlpd  xmm2, [esp+arg_8]
0x994604: movlpd  xmm3, qword ptr ds:xmmword_AAB940
0x99460C: xorpd   xmm1, xmm1
0x994610: andpd   xmm3, xmm2
0x994614: pcmpeqd xmm1, xmm3
0x994618: pmovmskb eax, xmm1
0x99461C: and     eax, 0FFh
0x994621: cmp     eax, 0FFh
0x994626: jnz     __pow_pentium4___RET_Y_NAN
0x99462C: movd    eax, xmm4
0x994630: cmp     eax, 0
0x994633: jnz     short __pow_pentium4___Y_INF_NAN
0x994635: psrlq   xmm4, 20h ; ' '
0x99463A: movd    edx, xmm4
0x99463E: cmp     edx, 3FF00000h
0x994644: jz      __pow_pentium4___RET_ONE
0x99464A: cmp     edx, 0BFF00000h
0x994650: jnz     short __pow_pentium4___Y_INF_NAN
0x994652: fld1
0x994654: retn
