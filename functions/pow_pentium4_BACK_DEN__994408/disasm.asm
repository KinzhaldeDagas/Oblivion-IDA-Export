0x994408: andpd   xmm7, xmm0
0x99440C: movsd   xmm4, xmm0
0x994410: andpd   xmm0, ds:xmmword_AAB960
0x994418: psrlq   xmm0, 2Ch ; ','
0x99441D: pextrw  eax, xmm0, 0
0x994422: orpd    xmm7, xmm2
0x994426: and     eax, 0FFh
0x99442B: add     eax, 1
0x99442E: and     eax, 1FEh
0x994433: mulsd   xmm7, ds:qword_AA80B0[eax*4]
0x99443C: movlpd  xmm5, ds:qword_AA80B0[eax*4]
0x994445: add     eax, eax
0x994447: movapd  xmm6, ds:xmmword_AA84C0[eax*4]
0x994450: mov     edx, 43E7Fh
0x994455: jmp     __pow_pentium4___BACK_MAIN
