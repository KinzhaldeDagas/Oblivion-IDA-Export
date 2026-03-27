0x4D6830: movss   xmm4, dword ptr ds:0A46C30h
0x4D6838: mov     eax, ecx
0x4D683A: movaps  xmm2, xmmword ptr [eax]
0x4D683D: movaps  xmm0, xmm2
0x4D6840: mulps   xmm0, xmm2
0x4D6843: movaps  xmm1, xmm0
0x4D6846: shufps  xmm1, xmm0, 4Eh ; 'N'
0x4D684A: addps   xmm1, xmm0
0x4D684D: movaps  xmm0, xmm1
0x4D6850: shufps  xmm0, xmm1, 0B1h ; '±'
0x4D6854: addps   xmm0, xmm1
0x4D6857: movaps  xmm1, xmm0
0x4D685A: rsqrtss xmm1, xmm1
0x4D685E: mulss   xmm0, xmm1
0x4D6862: mulss   xmm0, xmm1
0x4D6866: xorps   xmm3, xmm3
0x4D6869: movss   xmm3, xmm4
0x4D686D: movss   xmm4, dword ptr ds:0A3D65Ch
0x4D6875: subss   xmm3, xmm0
0x4D6879: xorps   xmm0, xmm0
0x4D687C: movss   xmm0, xmm4
0x4D6880: mulss   xmm0, xmm1
0x4D6884: mulss   xmm0, xmm3
0x4D6888: movaps  xmm1, xmm0
0x4D688B: shufps  xmm1, xmm0, 0
0x4D688F: mulps   xmm1, xmm2
0x4D6892: movaps  xmmword ptr [eax], xmm1
0x4D6895: retn
