0x94D270: mov     eax, ecx
0x94D272: mov     word ptr [eax+6], 1
0x94D278: xor     ecx, ecx
0x94D27A: mov     [eax+50h], ecx
0x94D27D: mov     dword ptr [eax+54h], 5
0x94D284: xorps   xmm0, xmm0
0x94D287: movaps  xmmword ptr [eax+10h], xmm0
0x94D28B: movaps  xmmword ptr [eax+20h], xmm0
0x94D28F: movaps  xmmword ptr [eax+30h], xmm0
0x94D293: mov     edx, 3F800000h
0x94D298: mov     [eax+10h], edx
0x94D29B: mov     [eax+24h], edx
0x94D29E: mov     [eax+38h], edx
0x94D2A1: movaps  xmmword ptr [eax+40h], xmm0
0x94D2A5: mov     dword ptr [eax], offset off_AA2C04
0x94D2AB: mov     [eax+90h], ecx
0x94D2B1: mov     [eax+94h], ecx
0x94D2B7: mov     [eax+98h], ecx
0x94D2BD: mov     [eax+9Ch], ecx
0x94D2C3: movaps  xmmword ptr [eax+60h], xmm0
0x94D2C7: movaps  xmmword ptr [eax+80h], xmm0
0x94D2CE: movaps  xmmword ptr [eax+70h], xmm0
0x94D2D2: retn
