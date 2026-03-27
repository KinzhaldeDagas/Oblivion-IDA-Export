0x997266: movlpd  xmm0, [esp+arg_0]
0x99726C: movapd  xmm1, ds:xmmword_AAF1E0
0x997274: cmpeqsd xmm1, xmm0
0x997279: pextrw  eax, xmm1, 0
0x99727E: cmp     eax, 0
0x997281: ja      short start_17___INPUT_ZERO_0
0x997283: cmp     ecx, 0FFFFFFFFh
0x997286: jz      short start_17___INPUT_DENORM_0
0x997288: cmp     ecx, 7FEh
0x99728E: ja      short start_17___INPUT_NEGATIVE_0
0x997290: movlpd  xmm0, [esp+arg_0]
0x997296: movapd  xmm1, ds:xmmword_AAF160
0x99729E: movapd  xmm2, ds:xmmword_AAF1D0
0x9972A6: andpd   xmm0, xmm1
0x9972AA: orpd    xmm0, xmm2
0x9972AE: cmpeqsd xmm2, xmm0
0x9972B3: pextrw  eax, xmm2, 0
0x9972B8: cmp     eax, 0
0x9972BB: jz      short start_17___INPUT_NaN_0
