0x8D2A20: push    ebp
0x8D2A21: mov     ebp, esp
0x8D2A23: mov     eax, [ebp+arg_0]
0x8D2A26: movaps  xmm0, xmmword ptr [eax]
0x8D2A29: movaps  xmm1, xmmword ptr [ecx]
0x8D2A2C: subps   xmm1, xmm0
0x8D2A2F: movaps  xmmword ptr [ecx], xmm1
0x8D2A32: movaps  xmm0, xmmword ptr [eax+10h]
0x8D2A36: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D2A3A: subps   xmm1, xmm0
0x8D2A3D: movaps  xmmword ptr [ecx+10h], xmm1
0x8D2A41: movaps  xmm0, xmmword ptr [eax+20h]
0x8D2A45: movaps  xmm1, xmmword ptr [ecx+20h]
0x8D2A49: subps   xmm1, xmm0
0x8D2A4C: and     esp, 0FFFFFFF0h
0x8D2A4F: movaps  xmmword ptr [ecx+20h], xmm1
0x8D2A53: mov     esp, ebp
0x8D2A55: pop     ebp
0x8D2A56: retn    4
