0x944A90: mov     eax, ecx
0x944A92: mov     ecx, [esp+arg_0]
0x944A96: movaps  xmm0, xmmword ptr [ecx]
0x944A99: movaps  xmmword ptr [eax], xmm0
0x944A9C: mov     edx, [ecx+10h]
0x944A9F: mov     [eax+10h], edx
0x944AA2: mov     edx, [ecx+14h]
0x944AA5: mov     [eax+14h], edx
0x944AA8: mov     edx, [ecx+18h]
0x944AAB: mov     [eax+18h], edx
0x944AAE: mov     ecx, [ecx+1Ch]
0x944AB1: mov     [eax+1Ch], ecx
0x944AB4: retn    4
