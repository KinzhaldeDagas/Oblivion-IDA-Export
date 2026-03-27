0x9949EC: pshufd  xmm4, xmm1, 44h ; 'D'
0x9949F1: mulpd   xmm4, xmm6
0x9949F5: pextrw  eax, xmm4, 3
0x9949FA: and     eax, 7FF0h
0x9949FF: mov     edx, 40A0h
0x994A04: sub     edx, eax
0x994A06: sub     eax, 3C70h
0x994A0B: or      edx, eax
0x994A0D: cmp     edx, 80000000h
0x994A13: jb      __pow_pentium4___BACK_XY_CHECK
