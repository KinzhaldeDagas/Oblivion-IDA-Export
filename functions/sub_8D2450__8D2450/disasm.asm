0x8D2450: push    ebp
0x8D2451: mov     ebp, esp
0x8D2453: and     esp, 0FFFFFFF0h
0x8D2456: movaps  xmm0, xmmword ptr [ecx+20h]
0x8D245A: mov     edx, [ebp+arg_0]
0x8D245D: movaps  xmm1, xmmword ptr [edx+30h]
0x8D2461: movaps  xmm2, xmmword ptr [ecx+10h]
0x8D2465: mov     eax, [ebp+arg_8]
0x8D2468: addps   xmm1, xmm0
0x8D246B: movss   xmm0, [ebp+arg_4]
0x8D2470: shufps  xmm0, xmm0, 0
0x8D2474: addps   xmm0, xmm2
0x8D2477: movaps  xmm2, xmm1
0x8D247A: subps   xmm2, xmm0
0x8D247D: addps   xmm0, xmm1
0x8D2480: movaps  xmmword ptr [eax], xmm2
0x8D2483: movaps  xmmword ptr [eax+10h], xmm0
0x8D2487: mov     esp, ebp
0x8D2489: pop     ebp
0x8D248A: retn    0Ch
