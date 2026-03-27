0x995717: jg      short start_12___large_0
0x995719: pextrw  eax, xmm0, 3
0x99571E: and     ax, 7FFFh
0x995722: pinsrw  xmm0, eax, 3
0x995727: sub     esp, 10h
0x99572A: movlpd  xmm1, ds:qword_AAC280
0x995732: subsd   xmm1, xmm0
0x995736: movlpd  [esp+10h+var_C], xmm1
0x99573C: fld     [esp+10h+var_C]
0x995740: add     esp, 10h
0x995743: retn
