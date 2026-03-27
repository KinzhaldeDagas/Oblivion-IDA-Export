0x9973BE: unpcklpd xmm7, xmm7
0x9973C2: movapd  xmm2, xmm7
0x9973C6: andpd   xmm2, ds:xmmword_AAFA90
0x9973CE: comisd  xmm2, ds:qword_AAFBB8
0x9973D6: jp      start_18___x_nan
0x9973DC: jnb     start_18___bigx
0x9973E2: comisd  xmm2, ds:qword_AAFBA8
0x9973EA: jnb     short start_18___xge0_03125
0x9973EC: comisd  xmm2, ds:qword_AAFBB0
0x9973F4: jb      start_18___retx
0x9973FA: movapd  xmm1, xmm2
0x9973FE: mulpd   xmm1, xmm2
0x997402: movapd  xmm3, xmm1
0x997406: mulpd   xmm3, xmm1
0x99740A: movapd  xmm5, ds:xmmword_AAFB60
0x997412: mulpd   xmm5, xmm3
0x997416: addpd   xmm5, ds:xmmword_AAFB50
0x99741E: mulpd   xmm5, xmm3
0x997422: addpd   xmm5, ds:xmmword_AAFB40
0x99742A: mulpd   xmm5, xmm3
0x99742E: addpd   xmm5, ds:xmmword_AAFB30
0x997436: mulsd   xmm5, xmm1
0x99743A: movapd  xmm3, xmm5
0x99743E: shufpd  xmm3, xmm3, 1
0x997443: addsd   xmm5, xmm3
0x997447: mulsd   xmm5, xmm7
0x99744B: subsd   xmm7, xmm5
0x99744F: movq    [esp+arg_0], xmm7
0x997455: fld     [esp+arg_0]
0x997459: retn
