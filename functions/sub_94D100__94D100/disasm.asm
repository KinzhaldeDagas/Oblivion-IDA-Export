0x94D100: mov     eax, [esp+arg_0]
0x94D104: push    esi
0x94D105: mov     esi, [eax+10h]
0x94D108: mov     eax, [eax+14h]
0x94D10B: mov     edx, [eax+50h]
0x94D10E: movaps  xmm0, xmmword ptr [edx+10h]
0x94D112: mov     eax, [esp+4+arg_4]
0x94D116: movaps  xmmword ptr [eax], xmm0
0x94D119: movaps  xmm0, xmmword ptr [edx+20h]
0x94D11D: movaps  xmmword ptr [eax+10h], xmm0
0x94D121: movaps  xmm0, xmmword ptr [edx+30h]
0x94D125: movaps  xmmword ptr [eax+20h], xmm0
0x94D129: movaps  xmm0, xmmword ptr [edx+40h]
0x94D12D: movaps  xmmword ptr [eax+30h], xmm0
0x94D131: mov     esi, [esi+50h]
0x94D134: movaps  xmm0, xmmword ptr [esi+10h]
0x94D138: add     edx, 10h
0x94D13B: mov     edx, [esp+4+arg_8]
0x94D13F: movaps  xmmword ptr [edx], xmm0
0x94D142: movaps  xmm0, xmmword ptr [esi+20h]
0x94D146: movaps  xmmword ptr [edx+10h], xmm0
0x94D14A: movaps  xmm0, xmmword ptr [esi+30h]
0x94D14E: movaps  xmmword ptr [edx+20h], xmm0
0x94D152: movaps  xmm0, xmmword ptr [esi+40h]
0x94D156: movaps  xmmword ptr [edx+30h], xmm0
0x94D15A: movaps  xmm0, xmmword ptr [eax]
0x94D15D: add     esi, 10h
0x94D160: movaps  xmmword ptr [ecx+90h], xmm0
0x94D167: movaps  xmm0, xmmword ptr [eax+10h]
0x94D16B: movaps  xmmword ptr [ecx+0A0h], xmm0
0x94D172: movaps  xmm0, xmmword ptr [eax+20h]
0x94D176: movaps  xmmword ptr [ecx+0B0h], xmm0
0x94D17D: movaps  xmm0, xmmword ptr [edx]
0x94D180: movaps  xmmword ptr [ecx+60h], xmm0
0x94D184: movaps  xmm0, xmmword ptr [edx+10h]
0x94D188: movaps  xmmword ptr [ecx+70h], xmm0
0x94D18C: movaps  xmm0, xmmword ptr [edx+20h]
0x94D190: movaps  xmmword ptr [ecx+80h], xmm0
0x94D197: movaps  xmm0, xmmword ptr [eax+30h]
0x94D19B: movaps  xmmword ptr [ecx+30h], xmm0
0x94D19F: movaps  xmm0, xmmword ptr [edx+30h]
0x94D1A3: movaps  xmmword ptr [ecx+20h], xmm0
0x94D1A7: pop     esi
0x94D1A8: retn    0Ch
