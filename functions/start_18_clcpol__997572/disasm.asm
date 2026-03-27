0x997572: movq    xmm0, ds:qword_AB0FB0[eax*8]
0x99757B: movq    xmm4, ds:qword_AB0FB8[eax*8]
0x997584: movapd  xmm1, xmm2
0x997588: mulpd   xmm1, xmm2
0x99758C: movapd  xmm3, xmm1
0x997590: mulpd   xmm3, xmm1
0x997594: movapd  xmm5, ds:xmmword_AAFB60
0x99759C: mulpd   xmm5, xmm3
0x9975A0: addpd   xmm5, ds:xmmword_AAFB50
0x9975A8: mulpd   xmm5, xmm3
0x9975AC: addpd   xmm5, ds:xmmword_AAFB40
0x9975B4: mulpd   xmm5, xmm3
0x9975B8: addpd   xmm5, ds:xmmword_AAFB30
0x9975C0: mulsd   xmm5, xmm1
0x9975C4: movapd  xmm3, xmm5
0x9975C8: shufpd  xmm3, xmm3, 1
0x9975CD: addsd   xmm5, xmm3
0x9975D1: mulsd   xmm5, xmm2
0x9975D5: subsd   xmm5, xmm4
0x9975D9: subsd   xmm5, xmm2
0x9975DD: subsd   xmm0, xmm5
0x9975E1: orpd    xmm0, xmm6
0x9975E5: movq    [esp+arg_0], xmm0
0x9975EB: fld     [esp+arg_0]
0x9975EF: retn
