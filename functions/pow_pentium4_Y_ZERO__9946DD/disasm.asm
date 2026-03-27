0x9946DD: movd    eax, xmm4
0x9946E1: psrlq   xmm4, 20h ; ' '
0x9946E6: movd    edx, xmm4
0x9946EA: and     edx, 7FFFFFFFh
0x9946F0: mov     ecx, eax
0x9946F2: or      eax, edx
0x9946F4: movlpd  xmm0, qword ptr ds:xmmword_AAB950
0x9946FC: mov     edx, 1Ah
0x994701: cmp     eax, 0
0x994704: jz      short __pow_pentium4___CALL_LIBM_ERROR_0
0x994706: movd    eax, xmm4
0x99470A: mov     edx, 1Dh
0x99470F: and     eax, 7FFFFFFFh
0x994714: cmp     eax, 7FF00000h
0x994719: ja      short __pow_pentium4___CALL_LIBM_ERROR_0
0x99471B: jb      short __pow_pentium4___Y_ZERO_RET
0x99471D: cmp     ecx, 0
0x994720: ja      short __pow_pentium4___CALL_LIBM_ERROR_0
