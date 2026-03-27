0x9937D5: add     eax, 3BBBh
0x9937DA: cmp     eax, 3800h
0x9937DF: jnb     short start_11___VERY_LARGE
0x9937E1: unpcklpd xmm7, xmm7
0x9937E5: movapd  xmm6, ds:xmmword_AA7FC0
0x9937ED: unpcklpd xmm1, xmm7
0x9937F1: movapd  xmm2, ds:xmmword_AA7FD0
0x9937F9: movapd  xmm4, ds:xmmword_AA7FE0
0x993801: mulpd   xmm7, xmm7
0x993805: sub     esp, 10h
0x993808: mulpd   xmm1, xmm7
0x99380C: mulpd   xmm6, xmm7
0x993810: mulpd   xmm7, xmm7
0x993814: movsd   xmm3, xmm1
0x993818: mulsd   xmm1, xmm1
0x99381C: addpd   xmm6, xmm2
0x993820: mulpd   xmm4, xmm7
0x993824: mulsd   xmm1, xmm3
0x993828: addpd   xmm6, xmm4
0x99382C: mulpd   xmm1, xmm6
0x993830: pshufd  xmm2, xmm1, 0EEh ; 'î'
0x993835: addsd   xmm1, xmm2
0x993839: addsd   xmm0, xmm1
0x99383D: movlpd  [esp+10h+var_C], xmm0
0x993843: fld     [esp+10h+var_C]
0x993847: add     esp, 10h
0x99384A: retn
