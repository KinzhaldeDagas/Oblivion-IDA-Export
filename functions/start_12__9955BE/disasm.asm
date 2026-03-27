0x9955BE: pextrw  eax, xmm0, 3
0x9955C3: and     ax, 7FFFh
0x9955C7: sub     ax, 3030h
0x9955CB: cmp     ax, 10C5h
0x9955CF: ja      start_12___special_0
0x9955D5: movlpd  xmm1, ds:qword_AAC230
0x9955DD: mulsd   xmm1, xmm0
0x9955E1: movlpd  xmm2, ds:qword_AAC238
0x9955E9: cvtsd2si edx, xmm1
0x9955ED: addsd   xmm1, xmm2
0x9955F1: movlpd  xmm3, ds:qword_AAC250
0x9955F9: subsd   xmm1, xmm2
0x9955FD: movapd  xmm2, ds:xmmword_AAC240
0x995605: mulsd   xmm3, xmm1
0x995609: unpcklpd xmm1, xmm1
0x99560D: add     edx, 1C7610h
0x995613: movsd   xmm4, xmm0
0x995617: and     edx, 3Fh
0x99561A: movapd  xmm5, ds:xmmword_AAC220
0x995622: lea     eax, unk_AAB9F0
0x995628: shl     edx, 5
0x99562B: add     eax, edx
0x99562D: mulpd   xmm2, xmm1
0x995631: subsd   xmm0, xmm3
0x995635: mulsd   xmm1, ds:qword_AAC258
0x99563D: subsd   xmm4, xmm3
0x995641: movlpd  xmm7, qword ptr [eax+8]
0x995646: unpcklpd xmm0, xmm0
0x99564A: movsd   xmm3, xmm4
0x99564E: subsd   xmm4, xmm2
0x995652: mulpd   xmm5, xmm0
0x995656: subpd   xmm0, xmm2
0x99565A: movapd  xmm6, ds:xmmword_AAC200
0x995662: mulsd   xmm7, xmm4
0x995666: subsd   xmm3, xmm4
0x99566A: mulpd   xmm5, xmm0
0x99566E: mulpd   xmm0, xmm0
0x995672: subsd   xmm3, xmm2
0x995676: movapd  xmm2, xmmword ptr [eax]
0x99567A: subsd   xmm1, xmm3
0x99567E: movlpd  xmm3, qword ptr [eax+18h]
0x995683: addsd   xmm2, xmm3
0x995687: subsd   xmm7, xmm2
0x99568B: mulsd   xmm2, xmm4
0x99568F: mulpd   xmm6, xmm0
0x995693: mulsd   xmm3, xmm4
0x995697: mulpd   xmm2, xmm0
0x99569B: mulpd   xmm0, xmm0
0x99569F: addpd   xmm5, ds:xmmword_AAC210
0x9956A7: mulsd   xmm4, qword ptr [eax]
0x9956AB: addpd   xmm6, ds:xmmword_AAC1F0
0x9956B3: mulpd   xmm5, xmm0
0x9956B7: movsd   xmm0, xmm3
0x9956BB: addsd   xmm3, qword ptr [eax+8]
0x9956C0: mulpd   xmm1, xmm7
0x9956C4: movsd   xmm7, xmm4
0x9956C8: addsd   xmm4, xmm3
0x9956CC: addpd   xmm6, xmm5
0x9956D0: movlpd  xmm5, qword ptr [eax+8]
0x9956D5: subsd   xmm5, xmm3
0x9956D9: subsd   xmm3, xmm4
0x9956DD: addsd   xmm1, qword ptr [eax+10h]
0x9956E2: mulpd   xmm6, xmm2
0x9956E6: addsd   xmm5, xmm0
0x9956EA: addsd   xmm3, xmm7
0x9956EE: addsd   xmm1, xmm5
0x9956F2: addsd   xmm1, xmm3
0x9956F6: addsd   xmm1, xmm6
0x9956FA: unpckhpd xmm6, xmm6
0x9956FE: addsd   xmm1, xmm6
0x995702: sub     esp, 10h
0x995705: addsd   xmm4, xmm1
0x995709: movlpd  [esp+10h+var_C], xmm4
0x99570F: fld     [esp+10h+var_C]
0x995713: add     esp, 10h
0x995716: retn
