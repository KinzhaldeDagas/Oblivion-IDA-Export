0x9949BC: mov     edx, 18h
0x9949C1: cmp     ecx, 0
0x9949C4: jz      short __pow_pentium4___RET_INF_OF2
0x9949C6: movlpd  xmm0, ds:qword_AAB9C8
0x9949CE: mulsd   xmm0, ds:qword_AAB9D0
0x9949D6: jmp     __pow_pentium4___CALL_LIBM_ERROR_0
