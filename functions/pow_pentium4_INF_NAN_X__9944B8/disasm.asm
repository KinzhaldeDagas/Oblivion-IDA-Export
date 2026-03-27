0x9944B8: movlpd  xmm3, qword ptr ds:xmmword_AAB940
0x9944C0: xorpd   xmm1, xmm1
0x9944C4: andpd   xmm3, xmm4
0x9944C8: pcmpeqd xmm1, xmm3
0x9944CC: pmovmskb ecx, xmm1
0x9944D0: and     ecx, 0FFh
0x9944D6: cmp     ecx, 0FFh
0x9944DC: jnz     __pow_pentium4___X_NAN
0x9944E2: pextrw  ecx, xmm4, 3
0x9944E7: and     ecx, 8000h
0x9944ED: cmp     ecx, 0
0x9944F0: jz      __pow_pentium4___X_INF
0x9944F6: and     eax, 0FFh
0x9944FB: cmp     eax, 0FFh
0x994500: jnz     short __pow_pentium4___X_NINF
0x994502: movlpd  xmm1, [esp+arg_8]
0x994508: movlpd  xmm2, [esp+arg_8]
0x99450E: mov     ecx, 3F4h
0x994513: movd    xmm3, ecx
0x994517: andpd   xmm1, ds:xmmword_AAB960
0x99451F: psrlq   xmm1, 34h ; '4'
0x994524: psubd   xmm1, xmm3
0x994528: pxor    xmm3, xmm3
0x99452C: psllq   xmm2, xmm1
0x994530: pcmpeqd xmm2, xmm3
0x994534: pmovmskb eax, xmm2
0x994538: and     eax, 0FFh
0x99453D: cmp     eax, 0FFh
0x994542: jz      short __pow_pentium4___X_NINF
0x994544: movlpd  xmm1, [esp+arg_8]
0x99454A: pextrw  eax, xmm1, 3
0x99454F: and     eax, 8000h
0x994554: cmp     eax, 0
0x994557: jz      short __pow_pentium4___RET_NINF
