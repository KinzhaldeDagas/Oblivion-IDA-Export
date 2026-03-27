0x9925BE: pextrw  eax, xmm0, 3
0x9925C3: and     ax, 7FFFh
0x9925C7: sub     ax, 3820h
0x9925CB: cmp     ax, 8A8h
0x9925CF: ja      start_10___special
0x9925D5: unpcklpd xmm0, xmm0
0x9925D9: movapd  xmm1, ds:xmmword_AA6700
0x9925E1: mulpd   xmm1, xmm0
0x9925E5: cvtsd2si edx, xmm1
0x9925E9: movapd  xmm2, ds:xmmword_AA6710
0x9925F1: addpd   xmm1, xmm2
0x9925F5: movapd  xmm3, ds:xmmword_AA6720
0x9925FD: subpd   xmm1, xmm2
0x992601: movlpd  xmm5, ds:qword_AA6750
0x992609: add     edx, 72900h
0x99260F: movapd  xmm4, ds:xmmword_AA6730
0x992617: mulpd   xmm3, xmm1
0x99261B: and     edx, 1Fh
0x99261E: mulsd   xmm5, xmm1
0x992622: mov     ecx, edx
0x992624: mulpd   xmm4, xmm1
0x992628: shl     ecx, 1
0x99262A: subpd   xmm0, xmm3
0x99262E: mulpd   xmm1, ds:xmmword_AA6740
0x992636: add     edx, ecx
0x992638: shl     ecx, 2
0x99263B: add     edx, ecx
0x99263D: addsd   xmm5, xmm0
0x992641: movapd  xmm2, xmm0
0x992645: subpd   xmm0, xmm4
0x992649: movlpd  xmm6, ds:qword_AA6758
0x992651: shl     edx, 4
0x992654: lea     eax, unk_AA5100
0x99265A: andpd   xmm5, ds:xmmword_AA6760
0x992662: movapd  xmm3, xmm0
0x992666: add     eax, edx
0x992668: subpd   xmm2, xmm0
0x99266C: unpckhpd xmm0, xmm0
0x992670: divsd   xmm6, xmm5
0x992674: subpd   xmm2, xmm4
0x992678: movapd  xmm7, xmmword ptr [eax+10h]
0x99267D: subsd   xmm3, xmm5
0x992681: mulpd   xmm7, xmm0
0x992685: subpd   xmm2, xmm1
0x992689: movapd  xmm1, xmmword ptr [eax+30h]
0x99268E: mulpd   xmm1, xmm0
0x992692: movapd  xmm4, xmmword ptr [eax+60h]
0x992697: mulpd   xmm4, xmm0
0x99269B: addsd   xmm2, xmm3
0x99269F: movapd  xmm3, xmm0
0x9926A3: mulpd   xmm0, xmm0
0x9926A7: addpd   xmm7, xmmword ptr [eax]
0x9926AB: addpd   xmm1, xmmword ptr [eax+20h]
0x9926B0: mulpd   xmm1, xmm0
0x9926B4: addpd   xmm4, xmmword ptr [eax+50h]
0x9926B9: addpd   xmm7, xmm1
0x9926BD: movapd  xmm1, xmmword ptr [eax+70h]
0x9926C2: mulpd   xmm1, xmm0
0x9926C6: mulpd   xmm0, xmm0
0x9926CA: addpd   xmm4, xmm1
0x9926CE: movapd  xmm1, xmmword ptr [eax+40h]
0x9926D3: mulpd   xmm1, xmm0
0x9926D7: addpd   xmm7, xmm1
0x9926DB: movapd  xmm1, xmm3
0x9926DF: mulpd   xmm3, xmm0
0x9926E3: mulsd   xmm0, xmm0
0x9926E7: mulpd   xmm1, xmmword ptr [eax+90h]
0x9926EF: mulpd   xmm4, xmm3
0x9926F3: movsd   xmm3, xmm1
0x9926F7: addpd   xmm7, xmm4
0x9926FB: movsd   xmm4, xmm1
0x9926FF: mulsd   xmm0, xmm7
0x992703: unpckhpd xmm7, xmm7
0x992707: addsd   xmm0, xmm7
0x99270B: unpckhpd xmm1, xmm1
0x99270F: addsd   xmm3, xmm1
0x992713: subsd   xmm4, xmm3
0x992717: addsd   xmm1, xmm4
0x99271B: movsd   xmm4, xmm2
0x99271F: movlpd  xmm7, qword ptr [eax+90h]
0x992727: unpckhpd xmm2, xmm2
0x99272B: addsd   xmm7, qword ptr [eax+98h]
0x992733: mulsd   xmm7, xmm2
0x992737: addsd   xmm7, qword ptr [eax+88h]
0x99273F: addsd   xmm7, xmm1
0x992743: addsd   xmm0, xmm7
0x992747: movlpd  xmm7, ds:qword_AA6758
0x99274F: mulsd   xmm4, xmm6
0x992753: movlpd  xmm2, qword ptr [eax+0A8h]
0x99275B: andpd   xmm2, xmm6
0x99275F: mulsd   xmm5, xmm2
0x992763: mulsd   xmm6, qword ptr [eax+0A0h]
0x99276B: subsd   xmm7, xmm5
0x99276F: subsd   xmm2, qword ptr [eax+80h]
0x992777: subsd   xmm7, xmm4
0x99277B: mulsd   xmm7, xmm6
0x99277F: movsd   xmm4, xmm3
0x992783: subsd   xmm3, xmm2
0x992787: addsd   xmm2, xmm3
0x99278B: subsd   xmm4, xmm2
0x99278F: addsd   xmm0, xmm4
0x992793: subsd   xmm0, xmm7
0x992797: sub     esp, 10h
0x99279A: addsd   xmm0, xmm3
0x99279E: movlpd  [esp+10h+var_C], xmm0
0x9927A4: fld     [esp+10h+var_C]
0x9927A8: add     esp, 10h
0x9927AB: retn
