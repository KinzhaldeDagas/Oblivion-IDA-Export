0x994108: subsd   xmm4, xmm6
0x99410C: subsd   xmm2, xmm4
0x994110: movlpd  xmm4, ds:qword_AAB998
0x994118: andpd   xmm3, xmm1
0x99411C: andpd   xmm4, xmm6
0x994120: subsd   xmm0, xmm2
0x994124: xorpd   xmm2, xmm2
0x994128: mov     edx, 4060h
0x99412D: pinsrw  xmm2, edx, 3
0x994132: movsd   xmm5, xmm3
0x994136: mulsd   xmm3, xmm4
0x99413A: subsd   xmm6, xmm4
0x99413E: subsd   xmm1, xmm5
0x994142: mulsd   xmm3, xmm2
0x994146: mulsd   xmm5, xmm6
0x99414A: movapd  xmm2, ds:xmmword_AAB110
0x994152: mulsd   xmm4, xmm1
0x994156: cvtsd2si eax, xmm3
0x99415A: mulsd   xmm6, xmm1
0x99415E: movapd  xmm1, ds:xmmword_AAB120
0x994166: addsd   xmm5, xmm4
0x99416A: pshufd  xmm4, xmm6, 0EEh ; 'î'
0x99416F: addsd   xmm5, xmm6
0x994173: mov     edx, 1FF7Fh
0x994178: sub     edx, eax
0x99417A: add     eax, 1E1FFh
0x99417F: or      edx, eax
0x994181: sub     eax, 1E1FFh
0x994186: cmp     edx, 0
0x994189: jle     __pow_pentium4___UF_OF_CASES
0x99418F: add     ecx, eax
0x994191: and     eax, 7Fh
0x994194: and     ecx, 0FFFFFF80h
0x994197: add     ecx, 1FF80h
0x99419D: addsd   xmm4, xmm0
0x9941A1: movsd   xmm0, xmm3
0x9941A5: addsd   xmm3, ds:qword_AAB930
0x9941AD: mulpd   xmm2, xmm7
0x9941B1: subsd   xmm3, ds:qword_AAB930
0x9941B9: mulpd   xmm7, xmm7
0x9941BD: subsd   xmm0, xmm3
0x9941C1: add     eax, eax
0x9941C3: add     eax, eax
0x9941C5: add     eax, eax
0x9941C7: add     eax, eax
0x9941C9: movapd  xmm3, xmmword ptr [eax+0AAB130h]
0x9941D1: movapd  xmm6, ds:xmmword_AAB970
0x9941D9: mulpd   xmm1, xmm7
0x9941DD: addpd   xmm2, xmm1
0x9941E1: pshufd  xmm1, xmm2, 0EEh ; 'î'
0x9941E6: mulsd   xmm2, xmm7
0x9941EA: xorpd   xmm7, xmm7
0x9941EE: mov     edx, 3F80h
0x9941F3: addsd   xmm2, xmm1
0x9941F7: pinsrw  xmm7, edx, 3
0x9941FC: addsd   xmm2, xmm4
0x994200: movlpd  xmm4, ds:qword_AAB990
0x994208: movd    xmm1, ecx
