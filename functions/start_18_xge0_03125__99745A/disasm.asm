0x99745A: comisd  xmm2, ds:qword_AAFBA0
0x997462: jnb     start_18___xge0_375
0x997468: movapd  xmm1, xmm2
0x99746C: mulpd   xmm1, xmm2
0x997470: movapd  xmm3, xmm1
0x997474: mulpd   xmm3, xmm1
0x997478: movapd  xmm5, ds:xmmword_AAFB20
0x997480: mulpd   xmm5, xmm3
0x997484: addpd   xmm5, ds:xmmword_AAFB10
0x99748C: mulpd   xmm5, xmm3
0x997490: addpd   xmm5, ds:xmmword_AAFB00
0x997498: mulpd   xmm5, xmm3
0x99749C: addpd   xmm5, ds:xmmword_AAFAF0
0x9974A4: mulpd   xmm5, xmm3
0x9974A8: addpd   xmm5, ds:xmmword_AAFAE0
0x9974B0: mulpd   xmm5, xmm3
0x9974B4: addpd   xmm5, ds:xmmword_AAFAD0
0x9974BC: mulpd   xmm5, xmm3
0x9974C0: addpd   xmm5, ds:xmmword_AAFAC0
0x9974C8: mulpd   xmm5, xmm3
0x9974CC: addpd   xmm5, ds:xmmword_AAFAB0
0x9974D4: mulsd   xmm5, xmm1
0x9974D8: movapd  xmm3, xmm5
0x9974DC: shufpd  xmm3, xmm3, 1
0x9974E1: addsd   xmm5, xmm3
0x9974E5: mulsd   xmm5, xmm7
0x9974E9: subsd   xmm7, xmm5
0x9974ED: movq    [esp+arg_0], xmm7
0x9974F3: fld     [esp+arg_0]
0x9974F7: retn
