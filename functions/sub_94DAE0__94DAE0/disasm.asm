0x94DAE0: mov     eax, ecx
0x94DAE2: mov     word ptr [eax+6], 1
0x94DAE8: mov     dword ptr [eax+54h], 4
0x94DAEF: xor     ecx, ecx
0x94DAF1: mov     [eax+50h], ecx
0x94DAF4: xorps   xmm0, xmm0
0x94DAF7: movaps  xmmword ptr [eax+10h], xmm0
0x94DAFB: movaps  xmmword ptr [eax+20h], xmm0
0x94DAFF: movaps  xmmword ptr [eax+30h], xmm0
0x94DB03: mov     edx, 3F800000h
0x94DB08: mov     [eax+10h], edx
0x94DB0B: mov     [eax+24h], edx
0x94DB0E: mov     [eax+38h], edx
0x94DB11: movaps  xmmword ptr [eax+40h], xmm0
0x94DB15: mov     dword ptr [eax], offset off_AA2C2C
0x94DB1B: mov     [eax+80h], ecx
0x94DB21: mov     [eax+84h], ecx
0x94DB27: mov     [eax+88h], ecx
0x94DB2D: movaps  xmmword ptr [eax+60h], xmm0
0x94DB31: movaps  xmmword ptr [eax+70h], xmm0
0x94DB35: retn
