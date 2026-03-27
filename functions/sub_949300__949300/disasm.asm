0x949300: mov     eax, ecx
0x949302: mov     word ptr [eax+6], 1
0x949308: mov     dword ptr [eax+50h], 0
0x94930F: mov     dword ptr [eax+54h], 3
0x949316: xorps   xmm0, xmm0
0x949319: movaps  xmmword ptr [eax+10h], xmm0
0x94931D: movaps  xmmword ptr [eax+20h], xmm0
0x949321: movaps  xmmword ptr [eax+30h], xmm0
0x949325: mov     ecx, 3F800000h
0x94932A: mov     [eax+10h], ecx
0x94932D: mov     [eax+24h], ecx
0x949330: mov     [eax+38h], ecx
0x949333: movaps  xmmword ptr [eax+40h], xmm0
0x949337: mov     dword ptr [eax], offset off_A9D2F4
0x94933D: movaps  xmmword ptr [eax+60h], xmm0
0x949341: movaps  xmmword ptr [eax+70h], xmm0
0x949345: retn
