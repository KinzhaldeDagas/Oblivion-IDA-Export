0x995A71: sub     eax, 3BFCh
0x995A76: cmp     eax, 4
0x995A79: jnb     start_13___RETURN_INVALID_0
0x995A7F: xorpd   xmm6, xmm6
0x995A83: andpd   xmm7, ds:xmmword_AADA70
0x995A8B: movlpd  xmm4, ds:qword_AADA88
0x995A93: movapd  xmm1, ds:xmmword_AADA30
0x995A9B: mulsd   xmm7, xmm4
0x995A9F: movapd  xmm2, ds:xmmword_AADA40
0x995AA7: subsd   xmm4, xmm7
0x995AAB: movapd  xmm3, ds:xmmword_AADA50
0x995AB3: pshufd  xmm7, xmm4, 44h ; 'D'
0x995AB8: sqrtsd  xmm4, xmm4
0x995ABC: mulpd   xmm1, xmm7
0x995AC0: pshufd  xmm5, xmm7, 44h ; 'D'
0x995AC5: pextrw  eax, xmm0, 3
0x995ACA: mulpd   xmm7, xmm7
0x995ACE: addpd   xmm2, xmm1
0x995AD2: movlpd  xmm1, ds:qword_AAD9F0
0x995ADA: mulpd   xmm3, xmm7
0x995ADE: cmpltsd xmm0, xmm6
0x995AE3: mulsd   xmm7, xmm5
0x995AE7: addpd   xmm2, xmm3
0x995AEB: pshufd  xmm0, xmm0, 44h ; 'D'
0x995AF0: mulsd   xmm2, xmm7
0x995AF4: andpd   xmm0, ds:xmmword_AAD9C0
0x995AFC: mulpd   xmm2, xmm5
0x995B00: andpd   xmm1, xmm4
0x995B04: pshufd  xmm3, xmm4, 44h ; 'D'
0x995B09: subsd   xmm4, xmm1
0x995B0D: addsd   xmm3, xmm3
0x995B11: mulsd   xmm1, xmm1
0x995B15: subsd   xmm3, xmm4
0x995B19: subsd   xmm5, xmm1
0x995B1D: mulsd   xmm4, xmm3
0x995B21: pshufd  xmm3, xmm3, 0EEh ; 'î'
0x995B26: subsd   xmm5, xmm4
0x995B2A: divsd   xmm5, xmm3
0x995B2E: sub     esp, 10h
0x995B31: addpd   xmm3, xmm3
0x995B35: mulpd   xmm2, xmm3
0x995B39: pshufd  xmm4, xmm2, 0EEh ; 'î'
0x995B3E: addsd   xmm2, xmm0
0x995B42: and     eax, 8000h
0x995B47: pinsrw  xmm6, eax, 3
0x995B4C: pshufd  xmm0, xmm0, 0EEh ; 'î'
0x995B51: addsd   xmm2, xmm4
0x995B55: addsd   xmm2, xmm5
0x995B59: addsd   xmm2, xmm3
0x995B5D: addsd   xmm0, xmm2
0x995B61: xorpd   xmm0, xmm6
0x995B65: movlpd  [esp+10h+var_C], xmm0
0x995B6B: fld     [esp+10h+var_C]
0x995B6F: add     esp, 10h
0x995B72: retn
