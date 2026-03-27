0x99384B: sub     eax, 3BFEh
0x993850: cmp     eax, 2
0x993853: jnb     start_11___RETURN_INVALID
0x993859: mulsd   xmm1, xmm1
0x99385D: subsd   xmm3, xmm1
0x993861: sqrtsd  xmm3, xmm3
0x993865: pextrw  eax, xmm7, 3
0x99386A: andpd   xmm7, ds:xmmword_AA7F90
0x993872: pshufd  xmm5, xmm3, 44h ; 'D'
0x993877: andpd   xmm3, ds:xmmword_AA7F90
0x99387F: movsd   xmm1, xmm7
0x993883: movlpd  xmm4, ds:qword_AA8010
0x99388B: movsd   xmm6, xmm7
0x99388F: subsd   xmm0, xmm7
0x993893: mulsd   xmm7, xmm7
0x993897: addsd   xmm1, xmm1
0x99389B: mulsd   xmm1, xmm0
0x99389F: subsd   xmm4, xmm7
0x9938A3: movsd   xmm6, xmm3
0x9938A7: mulsd   xmm3, xmm3
0x9938AB: mulsd   xmm0, xmm0
0x9938AF: subsd   xmm4, xmm1
0x9938B3: subsd   xmm6, xmm5
0x9938B7: addsd   xmm5, xmm5
0x9938BB: subsd   xmm4, xmm3
0x9938BF: movapd  xmm2, ds:xmmword_AA7FC0
0x9938C7: pshufd  xmm3, xmm5, 0EEh ; 'î'
0x9938CC: subsd   xmm4, xmm0
0x9938D0: addsd   xmm5, xmm6
0x9938D4: pshufd  xmm7, xmm3, 0EEh ; 'î'
0x9938D9: addsd   xmm3, xmm3
0x9938DD: mulsd   xmm5, xmm6
0x9938E1: addsd   xmm4, xmm5
0x9938E5: pshufd  xmm6, xmm7, 0EEh ; 'î'
0x9938EA: divsd   xmm4, xmm3
0x9938EE: movapd  xmm1, ds:xmmword_AA7FF0
0x9938F6: movapd  xmm5, ds:xmmword_AA7FD0
0x9938FE: movapd  xmm0, ds:xmmword_AA7FE0
0x993906: mulpd   xmm7, xmm7
0x99390A: movsd   xmm3, xmm6
0x99390E: mulpd   xmm2, xmm7
0x993912: mulpd   xmm6, xmm7
0x993916: and     eax, 8000h
0x99391B: mulsd   xmm1, xmm7
0x99391F: mulpd   xmm7, xmm7
0x993923: addpd   xmm5, xmm2
0x993927: movapd  xmm2, xmm6
0x99392B: mulsd   xmm6, xmm6
0x99392F: mulpd   xmm7, xmm0
0x993933: movapd  xmm0, ds:xmmword_AA7F70
0x99393B: mulsd   xmm2, xmm6
0x99393F: addpd   xmm7, xmm5
0x993943: pshufd  xmm5, xmm1, 0EEh ; 'î'
0x993948: mulsd   xmm6, xmm2
0x99394C: sub     esp, 10h
0x99394F: mulpd   xmm7, xmm2
0x993953: addsd   xmm1, xmm5
0x993957: xorpd   xmm5, xmm5
0x99395B: pshufd  xmm2, xmm7, 0EEh ; 'î'
0x993960: mulsd   xmm1, xmm6
0x993964: pshufd  xmm6, xmm0, 0EEh ; 'î'
0x993969: addsd   xmm7, xmm2
0x99396D: movsd   xmm2, xmm3
0x993971: pinsrw  xmm5, eax, 3
0x993976: subsd   xmm3, xmm6
0x99397A: addsd   xmm0, xmm1
0x99397E: addsd   xmm6, xmm3
0x993982: addsd   xmm7, xmm4
0x993986: subsd   xmm2, xmm6
0x99398A: subsd   xmm0, xmm7
0x99398E: subsd   xmm0, xmm2
0x993992: subsd   xmm0, xmm3
0x993996: orpd    xmm0, xmm5
0x99399A: movlpd  [esp+10h+var_C], xmm0
0x9939A0: fld     [esp+10h+var_C]
0x9939A4: add     esp, 10h
0x9939A7: retn
