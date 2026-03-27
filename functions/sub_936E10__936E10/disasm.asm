0x936E10: push    ebp
0x936E11: mov     ebp, esp
0x936E13: and     esp, 0FFFFFFF0h
0x936E16: sub     esp, 0Ch
0x936E19: mov     eax, [ebp+arg_4]
0x936E1C: mov     ax, [eax+2]
0x936E20: mov     edx, [ebp+arg_0]
0x936E23: mov     [edx+20h], ax
0x936E27: mov     eax, [ecx+14h]
0x936E2A: movaps  xmm1, xmmword ptr [eax+30h]
0x936E2E: movaps  xmm3, xmmword ptr [eax+20h]
0x936E32: push    esi
0x936E33: mov     esi, [ebp+arg_8]
0x936E36: movaps  xmm0, xmmword ptr [esi]
0x936E39: movaps  xmm2, xmm0
0x936E3C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x936E40: mulps   xmm3, xmm2
0x936E43: movaps  xmm2, xmmword ptr [eax+10h]
0x936E47: addps   xmm3, xmm1
0x936E4A: movaps  xmm1, xmm0
0x936E4D: shufps  xmm1, xmm0, 55h ; 'U'
0x936E51: mulps   xmm2, xmm1
0x936E54: movaps  xmm1, xmm0
0x936E57: shufps  xmm1, xmm0, 0
0x936E5B: movaps  xmm0, xmmword ptr [eax]
0x936E5E: mulps   xmm0, xmm1
0x936E61: addps   xmm0, xmm2
0x936E64: addps   xmm0, xmm3
0x936E67: movaps  xmmword ptr [edx], xmm0
0x936E6A: movaps  xmm0, xmmword ptr [esi+20h]
0x936E6E: mov     eax, [ecx+14h]
0x936E71: movaps  xmm2, xmmword ptr [eax+20h]
0x936E75: movaps  xmm3, xmmword ptr [eax+10h]
0x936E79: movaps  xmm1, xmm0
0x936E7C: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x936E80: mulps   xmm2, xmm1
0x936E83: movaps  xmm1, xmm0
0x936E86: shufps  xmm1, xmm0, 55h ; 'U'
0x936E8A: mulps   xmm3, xmm1
0x936E8D: movaps  xmm1, xmm0
0x936E90: shufps  xmm1, xmm0, 0
0x936E94: movaps  xmm0, xmmword ptr [eax]
0x936E97: mulps   xmm0, xmm1
0x936E9A: addps   xmm0, xmm3
0x936E9D: addps   xmm0, xmm2
0x936EA0: movaps  xmmword ptr [edx+10h], xmm0
0x936EA4: mov     ecx, [esi+34h]
0x936EA7: mov     [edx+1Ch], ecx
0x936EAA: pop     esi
0x936EAB: mov     esp, ebp
0x936EAD: pop     ebp
0x936EAE: retn    0Ch
