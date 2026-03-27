0x99445A: mov     edx, eax
0x99445C: and     edx, 7FFFFFFFh
0x994462: cmp     edx, 0
0x994465: jnz     short __pow_pentium4___BACK_DEN
0x994467: mov     edx, [esp+arg_C]
0x99446B: and     edx, 80000000h
0x994471: cmp     edx, 0
0x994474: jz      short __pow_pentium4___ZERO_X_POS_Y
0x994476: shl     ecx, 0Dh
0x994479: and     eax, ecx
0x99447B: mov     edx, 7FF00000h
0x994480: or      edx, eax
0x994482: movd    xmm0, edx
0x994486: psllq   xmm0, 20h ; ' '
0x99448B: movlpd  xmm1, qword ptr ds:xmmword_AAB950
0x994493: movlpd  xmm2, [esp+arg_0]
0x994499: divsd   xmm1, xmm2
0x99449D: mov     edx, 1Bh
0x9944A2: jmp     __pow_pentium4___CALL_LIBM_ERROR_0
