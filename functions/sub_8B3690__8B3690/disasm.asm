0x8B3690: mov     eax, ecx
0x8B3692: mov     ecx, [esp+arg_0]
0x8B3696: mov     edx, [ecx]
0x8B3698: mov     [eax], edx
0x8B369A: mov     edx, [ecx+4]
0x8B369D: mov     [eax+4], edx
0x8B36A0: movaps  xmm0, xmmword ptr [ecx+10h]
0x8B36A4: movaps  xmmword ptr [eax+10h], xmm0
0x8B36A8: movaps  xmm0, xmmword ptr [ecx+20h]
0x8B36AC: movaps  xmmword ptr [eax+20h], xmm0
0x8B36B0: movaps  xmm0, xmmword ptr [ecx+30h]
0x8B36B4: movaps  xmmword ptr [eax+30h], xmm0
0x8B36B8: movaps  xmm0, xmmword ptr [ecx+40h]
0x8B36BC: movaps  xmmword ptr [eax+40h], xmm0
0x8B36C0: retn    4
