0x9947C3: addsd   xmm4, xmm0
0x9947C7: movsd   xmm0, xmm3
0x9947CB: addsd   xmm3, ds:qword_AAB930
0x9947D3: mov     esi, edx
0x9947D5: sub     esi, 1FF80h
0x9947DB: mulpd   xmm2, xmm7
0x9947DF: subsd   xmm3, ds:qword_AAB930
0x9947E7: mulpd   xmm7, xmm7
0x9947EB: subsd   xmm0, xmm3
0x9947EF: add     eax, eax
0x9947F1: add     eax, eax
0x9947F3: add     eax, eax
0x9947F5: add     eax, eax
0x9947F7: movapd  xmm3, xmmword ptr [eax+0AAB130h]
0x9947FF: movapd  xmm6, ds:xmmword_AAB970
0x994807: mulpd   xmm1, xmm7
0x99480B: addpd   xmm2, xmm1
0x99480F: pshufd  xmm1, xmm2, 0EEh ; 'î'
0x994814: mulsd   xmm2, xmm7
0x994818: addsd   xmm2, xmm1
0x99481C: addsd   xmm2, xmm4
0x994820: movlpd  xmm4, ds:qword_AAB990
0x994828: movd    xmm1, edx
0x99482C: sub     edx, 1FF80h
0x994832: neg     edx
0x994834: sar     edx, 7
0x994837: add     edx, 2
0x99483A: mov     eax, edx
0x99483C: and     eax, 20h
0x99483F: add     edx, eax
0x994841: xorpd   xmm7, xmm7
0x994845: mov     eax, 3F80h
0x99484A: pinsrw  xmm7, eax, 3
0x99484F: mulsd   xmm2, [esp+arg_10]
0x994855: mulsd   xmm0, xmm7
0x994859: psllq   xmm1, 2Dh ; '-'
0x99485E: pshufd  xmm1, xmm1, 44h ; 'D'
0x994863: movapd  xmm7, ds:xmmword_AAB980
0x99486B: addsd   xmm5, xmm2
0x99486F: mulpd   xmm3, xmm1
0x994873: addsd   xmm0, xmm5
0x994877: unpcklpd xmm0, xmm0
0x99487B: mulpd   xmm6, xmm0
0x99487F: mulsd   xmm4, xmm0
0x994883: mulpd   xmm0, xmm0
0x994887: addpd   xmm7, xmm6
0x99488B: mulpd   xmm7, xmm0
0x99488F: mulsd   xmm0, xmm3
0x994893: pshufd  xmm6, xmm7, 0EEh ; 'î'
0x994898: mulsd   xmm0, xmm7
0x99489C: pshufd  xmm5, xmm3, 0EEh ; 'î'
0x9948A1: mulsd   xmm6, xmm3
0x9948A5: mulsd   xmm4, xmm3
0x9948A9: movd    xmm7, ecx
0x9948AD: psllq   xmm7, 2Dh ; '-'
0x9948B2: movd    xmm2, edx
0x9948B6: pcmpeqd xmm1, xmm1
0x9948BA: psllq   xmm1, xmm2
0x9948BE: addsd   xmm0, xmm5
0x9948C2: addsd   xmm0, xmm6
0x9948C6: andpd   xmm1, xmm3
0x9948CA: addsd   xmm0, xmm4
0x9948CE: xorpd   xmm6, xmm6
0x9948D2: pcmpeqd xmm4, xmm4
0x9948D6: psllq   xmm4, xmm2
0x9948DA: subsd   xmm3, xmm1
0x9948DE: movsd   xmm2, xmm1
0x9948E2: addsd   xmm1, xmm0
0x9948E6: andpd   xmm1, xmm4
0x9948EA: pinsrw  xmm6, edi, 3
0x9948EF: pop     edi
0x9948F0: subsd   xmm2, xmm1
0x9948F4: addsd   xmm0, xmm2
0x9948F8: addsd   xmm0, xmm3
0x9948FC: cmp     esi, 0
0x9948FF: jg      short __pow_pentium4___SCALE2
0x994901: pop     esi
0x994902: mulsd   xmm0, xmm7
0x994906: mulsd   xmm1, xmm7
0x99490A: addsd   xmm0, xmm1
0x99490E: mulsd   xmm6, xmm0
0x994912: addsd   xmm0, xmm6
0x994916: pextrw  eax, xmm0, 3
0x99491B: and     eax, 7FF0h
0x994920: mov     edx, 18h
0x994925: cmp     eax, 7FF0h
0x99492A: jz      __pow_pentium4___CALL_LIBM_ERROR_0
0x994930: mov     edx, 19h
0x994935: cmp     eax, 0
0x994938: jz      __pow_pentium4___CALL_LIBM_ERROR_0
0x99493E: sub     esp, 10h
0x994941: movlpd  qword ptr [esp+4], xmm0
0x994947: fld     qword ptr [esp+4]
0x99494B: add     esp, 10h
0x99494E: retn
