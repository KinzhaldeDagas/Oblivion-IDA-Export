0x8D2A60: push    ebp
0x8D2A61: mov     ebp, esp
0x8D2A63: mov     eax, [ebp+arg_0]
0x8D2A66: movaps  xmm0, xmmword ptr [eax]
0x8D2A69: movaps  xmm1, xmmword ptr [ecx]
0x8D2A6C: movaps  xmm2, xmm0
0x8D2A6F: shufps  xmm2, xmm0, 0
0x8D2A73: mulps   xmm2, xmm1
0x8D2A76: movaps  xmmword ptr [ecx], xmm2
0x8D2A79: movaps  xmm0, xmmword ptr [eax]
0x8D2A7C: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D2A80: movaps  xmm2, xmm0
0x8D2A83: shufps  xmm2, xmm0, 0
0x8D2A87: mulps   xmm2, xmm1
0x8D2A8A: movaps  xmmword ptr [ecx+10h], xmm2
0x8D2A8E: movaps  xmm0, xmmword ptr [eax]
0x8D2A91: movaps  xmm1, xmmword ptr [ecx+20h]
0x8D2A95: movaps  xmm2, xmm0
0x8D2A98: shufps  xmm2, xmm0, 0
0x8D2A9C: mulps   xmm2, xmm1
0x8D2A9F: and     esp, 0FFFFFFF0h
0x8D2AA2: movaps  xmmword ptr [ecx+20h], xmm2
0x8D2AA6: mov     esp, ebp
0x8D2AA8: pop     ebp
0x8D2AA9: retn    4
