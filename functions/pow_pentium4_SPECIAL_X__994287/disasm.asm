0x994287: movlpd  xmm1, [esp+arg_8]
0x99428D: movlpd  xmm3, qword ptr ds:xmmword_AAB960
0x994295: movd    eax, xmm1
0x994299: movsd   xmm2, xmm1
0x99429D: andpd   xmm1, xmm3
0x9942A1: psrlq   xmm1, 20h ; ' '
0x9942A6: movd    ecx, xmm1
0x9942AA: cmp     ecx, 7FF00000h
0x9942B0: jnb     __pow_pentium4___Y_INF_NAN_CHECK_X
0x9942B6: or      eax, ecx
0x9942B8: cmp     eax, 0
0x9942BB: jz      __pow_pentium4___Y_ZERO
0x9942C1: cmp     edx, 0
0x9942C4: jge     __pow_pentium4___DENORMAL_POS_X
0x9942CA: neg     edx
0x9942CC: add     edx, 7FEFh
0x9942D2: psllq   xmm3, 34h ; '4'
0x9942D7: orpd    xmm2, xmm3
0x9942DB: mov     ecx, 3F3h
0x9942E0: movd    xmm3, ecx
0x9942E4: psrlq   xmm1, 14h
0x9942E9: psubd   xmm1, xmm3
0x9942ED: pxor    xmm3, xmm3
0x9942F1: pmaxsw  xmm1, xmm3
0x9942F5: psllq   xmm2, xmm1
0x9942F9: pcmpeqd xmm2, xmm3
0x9942FD: pmovmskb eax, xmm2
0x994301: mov     ecx, edx
0x994303: and     edx, 7FFFh
0x994309: cmp     edx, 7FF0h
0x99430F: jnb     __pow_pentium4___INF_NAN_X
0x994315: and     eax, 0FFh
0x99431A: cmp     eax, 0FFh
0x99431F: jnz     __pow_pentium4___RET_INVALID
0x994325: movlpd  xmm1, [esp+arg_8]
0x99432B: movlpd  xmm2, [esp+arg_8]
0x994331: mov     ecx, 3F4h
0x994336: movd    xmm3, ecx
0x99433A: andpd   xmm1, ds:xmmword_AAB960
0x994342: psrlq   xmm1, 34h ; '4'
0x994347: psubd   xmm1, xmm3
0x99434B: movlpd  xmm3, ds:qword_AAB9C0
0x994353: psllq   xmm2, xmm1
0x994357: pcmpeqd xmm2, xmm3
0x99435B: pmovmskb eax, xmm2
0x99435F: and     eax, 0FFh
0x994364: mov     ecx, 3FF01h
0x994369: add     ecx, eax
0x99436B: and     ecx, 40000h
0x994371: cmp     edx, 10h
0x994374: jb      short __pow_pentium4___DENORMAL_X
0x994376: mov     edx, 0BFE7Fh
0x99437B: movlpd  xmm3, qword ptr ds:xmmword_AAB940
0x994383: movlpd  xmm2, qword ptr ds:xmmword_AAB950
0x99438B: jmp     __pow_pentium4___BACK_MAIN
