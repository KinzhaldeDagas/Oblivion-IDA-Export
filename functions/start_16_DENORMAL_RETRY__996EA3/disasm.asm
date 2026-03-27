0x996EA3: movapd  xmm5, xmm0
0x996EA7: unpcklpd xmm0, xmm0
0x996EAB: psrlq   xmm5, 34h ; '4'
0x996EB0: pextrw  ecx, xmm5, 0
0x996EB5: movapd  xmm1, ds:xmmword_AAE860
0x996EBD: movapd  xmm3, ds:xmmword_AAE8C0
0x996EC5: movapd  xmm4, ds:xmmword_AAE870
0x996ECD: movapd  xmm6, ds:xmmword_AAE880
0x996ED5: andpd   xmm0, xmm1
0x996ED9: orpd    xmm0, xmm3
0x996EDD: addpd   xmm4, xmm0
0x996EE1: pextrw  eax, xmm4, 0
0x996EE6: and     eax, 7F0h
0x996EEB: movapd  xmm4, xmmword ptr [eax+0AAE940h]
0x996EF3: movapd  xmm7, xmmword ptr [eax+0AAED50h]
0x996EFB: andpd   xmm6, xmm0
0x996EFF: subpd   xmm0, xmm6
0x996F03: mulpd   xmm6, xmm4
0x996F07: subpd   xmm6, xmm3
0x996F0B: addsd   xmm7, xmm6
0x996F0F: mulpd   xmm0, xmm4
0x996F13: movapd  xmm4, xmm0
0x996F17: addpd   xmm0, xmm6
0x996F1B: and     ecx, 0FFFh
0x996F21: sub     ecx, 1
0x996F24: cmp     ecx, 7FDh
0x996F2A: ja      start_16___SPECIAL_CASES_0
0x996F30: sub     ecx, 3FEh
0x996F36: add     ecx, edx
0x996F38: cvtsi2sd xmm6, ecx
0x996F3C: unpcklpd xmm6, xmm6
0x996F40: shl     ecx, 0Ah
0x996F43: add     eax, ecx
0x996F45: mov     ecx, 10h
0x996F4A: mov     edx, 0
0x996F4F: cmp     eax, 0
0x996F52: cmovz   edx, ecx
0x996F55: movapd  xmm1, ds:xmmword_AAE910
0x996F5D: movapd  xmm3, xmm0
0x996F61: movapd  xmm2, ds:xmmword_AAE920
0x996F69: mulpd   xmm1, xmm0
0x996F6D: mulpd   xmm3, xmm3
0x996F71: addpd   xmm1, xmm2
0x996F75: movapd  xmm2, ds:xmmword_AAE930
0x996F7D: mulsd   xmm3, xmm3
0x996F81: movapd  xmm5, ds:xmmword_AAE890
0x996F89: mulpd   xmm6, xmm5
0x996F8D: movapd  xmm5, xmmword ptr [edx+0AAE8A0h]
0x996F95: andpd   xmm4, xmm5
0x996F99: addpd   xmm7, xmm6
0x996F9D: addpd   xmm7, xmm4
0x996FA1: mulpd   xmm1, xmm0
0x996FA5: mulsd   xmm3, xmm0
0x996FA9: addpd   xmm1, xmm2
0x996FAD: movapd  xmm6, xmm7
0x996FB1: unpckhpd xmm6, xmm6
0x996FB5: mulpd   xmm1, xmm3
0x996FB9: sub     esp, 10h
0x996FBC: movapd  xmm0, xmm1
0x996FC0: unpckhpd xmm1, xmm1
0x996FC4: addsd   xmm0, xmm1
0x996FC8: addsd   xmm0, xmm6
0x996FCC: addsd   xmm0, xmm7
0x996FD0: movlpd  [esp+10h+var_C], xmm0
0x996FD6: fld     [esp+10h+var_C]
0x996FDA: add     esp, 10h
0x996FDD: retn
