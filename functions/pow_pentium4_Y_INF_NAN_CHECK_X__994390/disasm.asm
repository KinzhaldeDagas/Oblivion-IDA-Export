0x994390: movlpd  xmm7, [esp+arg_0]
0x994396: movlpd  xmm4, [esp+arg_0]
0x99439C: movd    edx, xmm7
0x9943A0: psrlq   xmm7, 20h ; ' '
0x9943A5: movd    eax, xmm7
0x9943A9: mov     ecx, eax
0x9943AB: and     eax, 7FFFFFFFh
0x9943B0: cmp     eax, 7FF00000h
0x9943B5: jb      __pow_pentium4___Y_INF_NAN
0x9943BB: ja      __pow_pentium4___X_NAN
0x9943C1: cmp     edx, 0
0x9943C4: ja      __pow_pentium4___X_NAN
0x9943CA: jmp     __pow_pentium4___Y_INF_NAN
