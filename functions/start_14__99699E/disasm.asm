0x99699E: pextrw  eax, xmm0, 3
0x9969A3: and     ax, 7FFFh
0x9969A7: sub     ax, 3030h
0x9969AB: cmp     ax, 10C5h
0x9969AF: ja      start_14___special_1
0x9969B5: movlpd  xmm1, ds:qword_AAE300
0x9969BD: mulsd   xmm1, xmm0
0x9969C1: movlpd  xmm2, ds:qword_AAE308
0x9969C9: cvtsd2si edx, xmm1
0x9969CD: addsd   xmm1, xmm2
0x9969D1: movlpd  xmm3, ds:qword_AAE320
0x9969D9: subsd   xmm1, xmm2
0x9969DD: movapd  xmm2, ds:xmmword_AAE310
0x9969E5: mulsd   xmm3, xmm1
0x9969E9: unpcklpd xmm1, xmm1
0x9969ED: add     edx, 1C7600h
0x9969F3: movsd   xmm4, xmm0
0x9969F7: and     edx, 3Fh
0x9969FA: movapd  xmm5, ds:xmmword_AAE2F0
0x996A02: lea     eax, unk_AADAC0
0x996A08: shl     edx, 5
0x996A0B: add     eax, edx
0x996A0D: mulpd   xmm2, xmm1
0x996A11: subsd   xmm0, xmm3
0x996A15: mulsd   xmm1, ds:qword_AAE328
0x996A1D: subsd   xmm4, xmm3
0x996A21: movlpd  xmm7, qword ptr [eax+8]
0x996A26: unpcklpd xmm0, xmm0
0x996A2A: movsd   xmm3, xmm4
0x996A2E: subsd   xmm4, xmm2
0x996A32: mulpd   xmm5, xmm0
0x996A36: subpd   xmm0, xmm2
0x996A3A: movapd  xmm6, ds:xmmword_AAE2D0
0x996A42: mulsd   xmm7, xmm4
0x996A46: subsd   xmm3, xmm4
0x996A4A: mulpd   xmm5, xmm0
0x996A4E: mulpd   xmm0, xmm0
0x996A52: subsd   xmm3, xmm2
0x996A56: movapd  xmm2, xmmword ptr [eax]
0x996A5A: subsd   xmm1, xmm3
0x996A5E: movlpd  xmm3, qword ptr [eax+18h]
0x996A63: addsd   xmm2, xmm3
0x996A67: subsd   xmm7, xmm2
0x996A6B: mulsd   xmm2, xmm4
0x996A6F: mulpd   xmm6, xmm0
0x996A73: mulsd   xmm3, xmm4
0x996A77: mulpd   xmm2, xmm0
0x996A7B: mulpd   xmm0, xmm0
0x996A7F: addpd   xmm5, ds:xmmword_AAE2E0
0x996A87: mulsd   xmm4, qword ptr [eax]
0x996A8B: addpd   xmm6, ds:xmmword_AAE2C0
0x996A93: mulpd   xmm5, xmm0
0x996A97: movsd   xmm0, xmm3
0x996A9B: addsd   xmm3, qword ptr [eax+8]
0x996AA0: mulpd   xmm1, xmm7
0x996AA4: movsd   xmm7, xmm4
0x996AA8: addsd   xmm4, xmm3
0x996AAC: addpd   xmm6, xmm5
0x996AB0: movlpd  xmm5, qword ptr [eax+8]
0x996AB5: subsd   xmm5, xmm3
0x996AB9: subsd   xmm3, xmm4
0x996ABD: addsd   xmm1, qword ptr [eax+10h]
0x996AC2: mulpd   xmm6, xmm2
0x996AC6: addsd   xmm5, xmm0
0x996ACA: addsd   xmm3, xmm7
0x996ACE: addsd   xmm1, xmm5
0x996AD2: addsd   xmm1, xmm3
0x996AD6: addsd   xmm1, xmm6
0x996ADA: unpckhpd xmm6, xmm6
0x996ADE: addsd   xmm1, xmm6
0x996AE2: sub     esp, 10h
0x996AE5: addsd   xmm4, xmm1
0x996AE9: movlpd  [esp+10h+var_C], xmm4
0x996AEF: fld     [esp+10h+var_C]
0x996AF3: add     esp, 10h
0x996AF6: retn
