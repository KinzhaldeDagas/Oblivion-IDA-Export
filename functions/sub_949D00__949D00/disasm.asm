0x949D00: mov     eax, ecx
0x949D02: mov     word ptr [eax+6], 1
0x949D08: mov     dword ptr [eax+50h], 0
0x949D0F: mov     dword ptr [eax+54h], 2
0x949D16: xorps   xmm0, xmm0
0x949D19: movaps  xmmword ptr [eax+10h], xmm0
0x949D1D: movaps  xmmword ptr [eax+20h], xmm0
0x949D21: movaps  xmmword ptr [eax+30h], xmm0
0x949D25: mov     ecx, 3F800000h
0x949D2A: mov     [eax+10h], ecx
0x949D2D: mov     [eax+24h], ecx
0x949D30: mov     [eax+38h], ecx
0x949D33: movaps  xmmword ptr [eax+40h], xmm0
0x949D37: mov     dword ptr [eax], offset off_A9D378
0x949D3D: movaps  xmmword ptr [eax+60h], xmm0
0x949D41: retn
