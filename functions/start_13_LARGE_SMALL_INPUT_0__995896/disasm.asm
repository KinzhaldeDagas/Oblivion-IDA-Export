0x995896: sub     eax, 3BBh
0x99589B: cmp     eax, 41h ; 'A'
0x99589E: jnb     start_13___VERY_SMALL_OR_LARGE_0
0x9958A4: psrlq   xmm7, 26h ; '&'
0x9958A9: psllq   xmm7, 26h ; '&'
0x9958AE: pmovmskb eax, xmm0
0x9958B2: andnpd  xmm4, xmm0
0x9958B6: subsd   xmm1, xmm7
0x9958BA: movsd   xmm6, xmm7
0x9958BE: mulsd   xmm7, xmm7
0x9958C2: addsd   xmm0, xmm6
0x9958C6: orpd    xmm5, xmm4
0x9958CA: subsd   xmm3, xmm7
0x9958CE: mulsd   xmm0, xmm1
0x9958D2: movsd   xmm4, xmm3
0x9958D6: subsd   xmm3, xmm0
0x9958DA: sqrtsd  xmm3, xmm3
0x9958DE: and     eax, 80h
0x9958E3: shr     eax, 7
0x9958E6: neg     eax
0x9958E8: movsd   xmm7, xmm3
0x9958EC: andpd   xmm2, xmm3
0x9958F0: psllq   xmm3, 2
0x9958F5: pextrw  edx, xmm3, 3
0x9958FA: orpd    xmm2, xmm5
0x9958FE: movd    xmm3, eax
0x995902: pshufd  xmm3, xmm3, 0
0x995907: sub     edx, 0FEC0h
0x99590D: add     edx, edx
0x99590F: mulsd   xmm7, ds:qword_AAD1B0[edx*4]
0x995918: mulsd   xmm6, xmm2
0x99591C: mulsd   xmm1, xmm2
0x995920: mulsd   xmm2, xmm2
0x995924: subsd   xmm6, xmm7
0x995928: andpd   xmm3, ds:xmmword_AAD9C0
0x995930: addsd   xmm6, xmm1
0x995934: subsd   xmm4, xmm2
0x995938: addsd   xmm7, xmm7
0x99593C: movlpd  xmm5, ds:qword_AADA18
0x995944: subsd   xmm4, xmm0
0x995948: addsd   xmm7, xmm6
0x99594C: movlpd  xmm0, ds:qword_AADA28
0x995954: divsd   xmm4, xmm7
0x995958: movlpd  xmm2, ds:qword_AADA20
0x995960: addpd   xmm3, ds:xmmword_AAC2B0[edx*8]
0x995969: movsd   xmm1, xmm6
0x99596D: mulsd   xmm6, xmm6
0x995971: mulsd   xmm0, xmm6
0x995975: mulsd   xmm1, xmm6
0x995979: sub     esp, 10h
0x99597C: mulsd   xmm5, xmm1
0x995980: mulsd   xmm1, xmm6
0x995984: addsd   xmm0, xmm2
0x995988: pxor    xmm6, xmm6
0x99598C: mulsd   xmm0, xmm1
0x995990: addsd   xmm5, xmm3
0x995994: addsd   xmm0, xmm5
0x995998: and     eax, 8000h
0x99599D: pinsrw  xmm6, eax, 3
0x9959A2: movsd   xmm5, xmm4
0x9959A6: pshufd  xmm3, xmm3, 0EEh ; 'î'
0x9959AB: addsd   xmm4, xmm3
0x9959AF: subsd   xmm3, xmm4
0x9959B3: addsd   xmm5, xmm3
0x9959B7: addsd   xmm0, xmm5
0x9959BB: addsd   xmm0, xmm4
0x9959BF: xorpd   xmm0, xmm6
0x9959C3: movlpd  [esp+10h+var_C], xmm0
0x9959C9: fld     [esp+10h+var_C]
0x9959CD: add     esp, 10h
0x9959D0: retn
