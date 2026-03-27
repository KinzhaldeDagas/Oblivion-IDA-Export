0x994999: movlpd  xmm0, ds:qword_AAB9D8
0x9949A1: movd    xmm1, ecx
0x9949A5: mulsd   xmm0, xmm0
0x9949A9: psllq   xmm1, 2Dh ; '-'
0x9949AE: orpd    xmm0, xmm1
0x9949B2: mov     edx, 19h
0x9949B7: jmp     __pow_pentium4___CALL_LIBM_ERROR_0
