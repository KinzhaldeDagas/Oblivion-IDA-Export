0x997113: movapd  xmm5, xmm0
0x997117: unpcklpd xmm0, xmm0
0x99711B: psrlq   xmm5, 34h ; '4'
0x997120: pextrw  ecx, xmm5, 0
0x997125: movapd  xmm1, ds:xmmword_AAF160
0x99712D: movapd  xmm2, ds:xmmword_AAF170
0x997135: movapd  xmm3, ds:xmmword_AAF1D0
0x99713D: movapd  xmm4, ds:xmmword_AAF180
0x997145: movapd  xmm6, ds:xmmword_AAF190
0x99714D: andpd   xmm0, xmm1
0x997151: orpd    xmm0, xmm3
0x997155: addpd   xmm4, xmm0
0x997159: pextrw  eax, xmm4, 0
0x99715E: and     eax, 7F0h
0x997163: movapd  xmm4, xmmword ptr [eax+0AAF670h]
0x99716B: movapd  xmm7, xmmword ptr [eax+0AAF260h]
0x997173: andpd   xmm6, xmm0
0x997177: subpd   xmm0, xmm6
0x99717B: mulpd   xmm6, xmm4
0x99717F: subpd   xmm6, xmm2
0x997183: addsd   xmm7, xmm6
0x997187: mulpd   xmm0, xmm4
0x99718B: movapd  xmm4, xmm0
0x99718F: addpd   xmm0, xmm6
0x997193: and     ecx, 0FFFh
0x997199: sub     ecx, 1
0x99719C: cmp     ecx, 7FDh
0x9971A2: ja      start_17___SPECIAL_CASES_1
0x9971A8: sub     ecx, 3FEh
0x9971AE: add     ecx, edx
0x9971B0: cvtsi2sd xmm6, ecx
0x9971B4: unpcklpd xmm6, xmm6
0x9971B8: shl     ecx, 0Ah
0x9971BB: add     eax, ecx
0x9971BD: mov     ecx, 10h
0x9971C2: mov     edx, 0
0x9971C7: cmp     eax, 0
0x9971CA: cmovz   edx, ecx
0x9971CD: movapd  xmm1, ds:xmmword_AAF220
0x9971D5: movapd  xmm3, xmm0
0x9971D9: movapd  xmm2, ds:xmmword_AAF230
0x9971E1: mulpd   xmm1, xmm0
0x9971E5: mulpd   xmm3, xmm3
0x9971E9: addpd   xmm1, xmm2
0x9971ED: movapd  xmm2, ds:xmmword_AAF240
0x9971F5: mulsd   xmm3, xmm3
0x9971F9: movapd  xmm5, ds:xmmword_AAF1A0
0x997201: mulpd   xmm6, xmm5
0x997205: movapd  xmm5, xmmword ptr [edx+0AAF1B0h]
0x99720D: andpd   xmm4, xmm5
0x997211: addpd   xmm7, xmm6
0x997215: addpd   xmm7, xmm4
0x997219: mulpd   xmm1, xmm0
0x99721D: mulsd   xmm3, xmm0
0x997221: addpd   xmm1, xmm2
0x997225: movapd  xmm2, ds:xmmword_AAF250
0x99722D: mulpd   xmm2, xmm0
0x997231: movapd  xmm6, xmm7
0x997235: unpckhpd xmm6, xmm6
0x997239: mulpd   xmm1, xmm3
0x99723D: sub     esp, 10h
0x997240: movapd  xmm0, xmm1
0x997244: addpd   xmm1, xmm2
0x997248: unpckhpd xmm0, xmm0
0x99724C: addsd   xmm0, xmm1
0x997250: addsd   xmm0, xmm6
0x997254: addsd   xmm0, xmm7
0x997258: movlpd  [esp+10h+var_C], xmm0
0x99725E: fld     [esp+10h+var_C]
0x997262: add     esp, 10h
0x997265: retn
