0x8D29E0: push    ebp
0x8D29E1: mov     ebp, esp
0x8D29E3: mov     eax, [ebp+arg_0]
0x8D29E6: movaps  xmm0, xmmword ptr [eax]
0x8D29E9: movaps  xmm1, xmmword ptr [ecx]
0x8D29EC: addps   xmm1, xmm0
0x8D29EF: movaps  xmmword ptr [ecx], xmm1
0x8D29F2: movaps  xmm0, xmmword ptr [eax+10h]
0x8D29F6: movaps  xmm1, xmmword ptr [ecx+10h]
0x8D29FA: addps   xmm1, xmm0
0x8D29FD: movaps  xmmword ptr [ecx+10h], xmm1
0x8D2A01: movaps  xmm0, xmmword ptr [eax+20h]
0x8D2A05: movaps  xmm1, xmmword ptr [ecx+20h]
0x8D2A09: addps   xmm1, xmm0
0x8D2A0C: and     esp, 0FFFFFFF0h
0x8D2A0F: movaps  xmmword ptr [ecx+20h], xmm1
0x8D2A13: mov     esp, ebp
0x8D2A15: pop     ebp
0x8D2A16: retn    4
