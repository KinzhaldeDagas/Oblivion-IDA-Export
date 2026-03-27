0x94D790: mov     eax, ecx
0x94D792: xorps   xmm0, xmm0
0x94D795: mov     word ptr [eax+6], 1
0x94D79B: mov     dword ptr [eax+50h], 0
0x94D7A2: mov     dword ptr [eax+54h], 7
0x94D7A9: movaps  xmmword ptr [eax+10h], xmm0
0x94D7AD: movaps  xmmword ptr [eax+20h], xmm0
0x94D7B1: movaps  xmmword ptr [eax+30h], xmm0
0x94D7B5: mov     ecx, 3F800000h
0x94D7BA: mov     [eax+10h], ecx
0x94D7BD: mov     [eax+24h], ecx
0x94D7C0: mov     [eax+38h], ecx
0x94D7C3: movaps  xmmword ptr [eax+40h], xmm0
0x94D7C7: mov     dword ptr [eax], offset off_AA2C14
0x94D7CD: movaps  xmmword ptr [eax+90h], xmm0
0x94D7D4: movaps  xmmword ptr [eax+60h], xmm0
0x94D7D8: movaps  xmmword ptr [eax+70h], xmm0
0x94D7DC: movaps  xmmword ptr [eax+80h], xmm0
0x94D7E3: retn
