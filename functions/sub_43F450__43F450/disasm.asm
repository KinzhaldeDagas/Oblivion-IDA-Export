0x43F450: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x43F457: mov     eax, ecx
0x43F459: movaps  xmm1, xmmword ptr [eax+60h]
0x43F45D: movaps  xmm2, xmm1
0x43F460: subps   xmm2, xmm0
0x43F463: movaps  xmm0, xmmword ptr ds:0A372D0h
0x43F46A: andps   xmm2, xmm0
0x43F46D: movss   xmm0, dword ptr ds:0A37080h
0x43F475: shufps  xmm0, xmm0, 0
0x43F479: cmpltps xmm0, xmm2
0x43F47D: movmskps ecx, xmm0
0x43F480: test    cl, 7
0x43F483: jz      short locret_43F48F
0x43F485: movaps  xmm0, xmmword ptr [eax]
0x43F488: addps   xmm1, xmm0
0x43F48B: movaps  xmmword ptr [eax+10h], xmm1
0x43F48F: retn
