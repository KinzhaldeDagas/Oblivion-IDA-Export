0x9959D1: add     eax, 3BBBh
0x9959D6: cmp     eax, 3800h
0x9959DB: jnb     start_13___VERY_LARGE_0
0x9959E1: unpcklpd xmm0, xmm0
0x9959E5: movapd  xmm6, ds:xmmword_AADA30
0x9959ED: unpcklpd xmm1, xmm0
0x9959F1: movapd  xmm2, ds:xmmword_AADA40
0x9959F9: movapd  xmm4, ds:xmmword_AADA50
0x995A01: mulpd   xmm0, xmm0
0x995A05: movapd  xmm5, ds:xmmword_AAD9B0
0x995A0D: sub     esp, 10h
0x995A10: mulpd   xmm1, xmm0
0x995A14: mulpd   xmm6, xmm0
0x995A18: mulpd   xmm0, xmm0
0x995A1C: movsd   xmm3, xmm1
0x995A20: mulsd   xmm1, xmm1
0x995A24: addpd   xmm6, xmm2
0x995A28: mulpd   xmm4, xmm0
0x995A2C: mulsd   xmm1, xmm3
0x995A30: addpd   xmm6, xmm4
0x995A34: pshufd  xmm0, xmm5, 0EEh ; 'î'
0x995A39: mulpd   xmm1, xmm6
0x995A3D: pshufd  xmm6, xmm5, 0EEh ; 'î'
0x995A42: subsd   xmm0, xmm7
0x995A46: pshufd  xmm2, xmm1, 0EEh ; 'î'
0x995A4B: subsd   xmm5, xmm1
0x995A4F: subsd   xmm6, xmm0
0x995A53: subsd   xmm5, xmm2
0x995A57: subsd   xmm7, xmm6
0x995A5B: subsd   xmm5, xmm7
0x995A5F: addsd   xmm0, xmm5
0x995A63: movlpd  [esp+10h+var_C], xmm0
0x995A69: fld     [esp+10h+var_C]
0x995A6D: add     esp, 10h
0x995A70: retn
