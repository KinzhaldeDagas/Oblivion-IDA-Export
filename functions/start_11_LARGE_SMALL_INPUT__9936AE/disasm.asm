0x9936AE: sub     eax, 3BBh
0x9936B3: cmp     eax, 43h ; 'C'
0x9936B6: jnb     start_11___VERY_SMALL_OR_LARGE
0x9936BC: mulsd   xmm1, xmm1
0x9936C0: subsd   xmm3, xmm1
0x9936C4: sqrtsd  xmm3, xmm3
0x9936C8: pmovmskb eax, xmm7
0x9936CC: psllq   xmm0, 1
0x9936D1: andpd   xmm7, xmmword ptr ds:unk_AA7FA0
0x9936D9: psrlq   xmm0, 1
0x9936DE: movsd   xmm1, xmm0
0x9936E2: movlpd  xmm4, ds:qword_AA8010
0x9936EA: movsd   xmm6, xmm7
0x9936EE: subsd   xmm1, xmm7
0x9936F2: mulsd   xmm7, xmm7
0x9936F6: addsd   xmm0, xmm6
0x9936FA: subsd   xmm4, xmm7
0x9936FE: mulsd   xmm0, xmm1
0x993702: movsd   xmm7, xmm3
0x993706: andpd   xmm2, xmm3
0x99370A: psllq   xmm3, 2
0x99370F: pextrw  edx, xmm3, 3
0x993714: orpd    xmm2, xmm5
0x993718: sub     edx, 0FEC0h
0x99371E: add     edx, edx
0x993720: mulsd   xmm7, ds:qword_AA7770[edx*4]
0x993729: mulsd   xmm6, xmm2
0x99372D: movapd  xmm3, ds:xmmword_AA7F70
0x993735: mulsd   xmm1, xmm2
0x993739: mulsd   xmm2, xmm2
0x99373D: subsd   xmm6, xmm7
0x993741: addsd   xmm6, xmm1
0x993745: subsd   xmm4, xmm2
0x993749: addsd   xmm7, xmm7
0x99374D: movlpd  xmm5, ds:qword_AA7FA8
0x993755: subsd   xmm4, xmm0
0x993759: addsd   xmm7, xmm6
0x99375D: movlpd  xmm0, ds:qword_AA7FB8
0x993765: divsd   xmm4, xmm7
0x993769: movlpd  xmm2, ds:qword_AA7FB0
0x993771: subpd   xmm3, ds:xmmword_AA6870[edx*8]
0x99377A: movsd   xmm1, xmm6
0x99377E: mulsd   xmm6, xmm6
0x993782: and     eax, 80h
0x993787: shl     eax, 8
0x99378A: mulsd   xmm0, xmm6
0x99378E: mulsd   xmm1, xmm6
0x993792: sub     esp, 10h
0x993795: mulsd   xmm5, xmm1
0x993799: mulsd   xmm1, xmm6
0x99379D: addsd   xmm0, xmm2
0x9937A1: pxor    xmm6, xmm6
0x9937A5: mulsd   xmm0, xmm1
0x9937A9: addsd   xmm5, xmm3
0x9937AD: pinsrw  xmm6, eax, 3
0x9937B2: addsd   xmm0, xmm5
0x9937B6: pshufd  xmm3, xmm3, 0EEh ; 'î'
0x9937BB: subsd   xmm0, xmm4
0x9937BF: addsd   xmm0, xmm3
0x9937C3: orpd    xmm0, xmm6
0x9937C7: movlpd  [esp+10h+var_C], xmm0
0x9937CD: fld     [esp+10h+var_C]
0x9937D1: add     esp, 10h
0x9937D4: retn
