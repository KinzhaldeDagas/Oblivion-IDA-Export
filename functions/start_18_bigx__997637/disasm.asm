0x997637: movq    xmm0, xmm2
0x99763B: movq    xmm3, ds:qword_AAFA80
0x997643: andpd   xmm0, xmm3
0x997647: ucomisd xmm0, xmm3
0x99764B: jp      short start_18___x_nan
0x99764D: mov     eax, [esp+arg_4]
0x997651: shr     eax, 1Fh
0x997654: fld     ds:dbl_AAFBC8
0x99765A: fadd    ds:dbl_AAFAA0[eax*8]
0x997661: retn
