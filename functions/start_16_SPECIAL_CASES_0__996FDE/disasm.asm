0x996FDE: movlpd  xmm0, [esp+arg_0]
0x996FE4: movapd  xmm1, ds:xmmword_AAE8D0
0x996FEC: cmpeqsd xmm1, xmm0
0x996FF1: pextrw  eax, xmm1, 0
0x996FF6: cmp     eax, 0
0x996FF9: ja      short start_16___INPUT_ZERO
0x996FFB: cmp     ecx, 0FFFFFFFFh
0x996FFE: jz      short start_16___INPUT_DENORM
0x997000: cmp     ecx, 7FEh
0x997006: ja      short start_16___INPUT_NEGATIVE
0x997008: movlpd  xmm0, [esp+arg_0]
0x99700E: movapd  xmm1, ds:xmmword_AAE860
0x997016: movapd  xmm2, ds:xmmword_AAE8C0
0x99701E: andpd   xmm0, xmm1
0x997022: orpd    xmm0, xmm2
0x997026: cmpeqsd xmm2, xmm0
0x99702B: pextrw  eax, xmm2, 0
0x997030: cmp     eax, 0
0x997033: jz      short start_16___INPUT_NaN
