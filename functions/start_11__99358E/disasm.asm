0x99358E: movlpd  xmm4, ds:qword_AA8000
0x993596: movlpd  xmm3, ds:qword_AA8010
0x99359E: xorpd   xmm5, xmm5
0x9935A2: movlpd  xmm2, ds:qword_AA8008
0x9935AA: movsd   xmm1, xmm0
0x9935AE: psrlq   xmm0, 2Ch ; ','
0x9935B3: movd    edx, xmm0
0x9935B7: movsd   xmm7, xmm1
0x9935BB: mov     ecx, 2000h
0x9935C0: pinsrw  xmm5, ecx, 2
0x9935C5: movsd   xmm0, xmm1
0x9935C9: mov     eax, 7FFFFh
0x9935CE: and     eax, edx
0x9935D0: sub     eax, 3FB00h
0x9935D5: cmp     eax, 3BBh
0x9935DA: jnb     start_11___LARGE_SMALL_INPUT
0x9935E0: mulsd   xmm1, xmm1
0x9935E4: and     edx, 0FFFFh
0x9935EA: subsd   xmm3, xmm1
0x9935EE: sqrtsd  xmm3, xmm3
0x9935F2: andpd   xmm2, xmm7
0x9935F6: and     edx, 0FFFFFFFCh
0x9935F9: sub     edx, 0FB00h
0x9935FF: movlpd  xmm1, ds:qword_AA7770[edx*2]
0x993608: orpd    xmm2, xmm5
0x99360C: movapd  xmm4, ds:xmmword_AA6870[edx*4]
0x993615: movsd   xmm6, xmm7
0x993619: addsd   xmm7, xmm2
0x99361D: subsd   xmm0, xmm2
0x993621: mulsd   xmm0, xmm7
0x993625: mulsd   xmm6, xmm1
0x993629: mulsd   xmm3, xmm2
0x99362D: movsd   xmm1, xmm6
0x993631: addsd   xmm6, xmm3
0x993635: divsd   xmm0, xmm6
0x993639: movlpd  xmm7, ds:qword_AA7FB8
0x993641: movlpd  xmm5, ds:qword_AA7FA8
0x993649: subsd   xmm1, xmm3
0x99364D: psrlq   xmm2, 3Fh ; '?'
0x993652: movsd   xmm3, xmm1
0x993656: psllq   xmm2, 3Fh ; '?'
0x99365B: mulsd   xmm1, xmm1
0x99365F: pshufd  xmm2, xmm2, 44h ; 'D'
0x993664: movlpd  xmm6, ds:qword_AA7FB0
0x99366C: mulsd   xmm3, xmm1
0x993670: mulsd   xmm7, xmm1
0x993674: sub     esp, 10h
0x993677: xorpd   xmm4, xmm2
0x99367B: mulsd   xmm5, xmm3
0x99367F: mulsd   xmm3, xmm1
0x993683: addsd   xmm6, xmm7
0x993687: mulsd   xmm6, xmm3
0x99368B: addsd   xmm5, xmm4
0x99368F: pshufd  xmm4, xmm4, 0EEh ; 'î'
0x993694: addsd   xmm6, xmm5
0x993698: addsd   xmm0, xmm6
0x99369C: addsd   xmm0, xmm4
0x9936A0: movlpd  [esp+10h+var_C], xmm0
0x9936A6: fld     [esp+10h+var_C]
0x9936AA: add     esp, 10h
0x9936AD: retn
