0x9945B1: movlpd  xmm2, [esp+arg_0]
0x9945B7: movd    eax, xmm2
0x9945BB: psrlq   xmm2, 20h ; ' '
0x9945C0: movd    edx, xmm2
0x9945C4: and     edx, 7FFFFFFFh
0x9945CA: or      eax, edx
0x9945CC: mov     ecx, 0
0x9945D1: cmp     eax, 0
0x9945D4: jz      __pow_pentium4___ZERO_X
0x9945DA: movlpd  xmm1, ds:qword_AAB9A8
0x9945E2: movlpd  xmm0, ds:qword_AAB9E0
0x9945EA: mulsd   xmm1, xmm1
0x9945EE: mov     edx, 1Ch
0x9945F3: jmp     __pow_pentium4___CALL_LIBM_ERROR_0
