0x94D710: push    ebp
0x94D711: mov     ebp, esp
0x94D713: mov     edx, [ebp+arg_8]
0x94D716: mov     eax, ecx
0x94D718: mov     word ptr [eax+6], 1
0x94D71E: mov     dword ptr [eax+50h], 0
0x94D725: mov     dword ptr [eax+54h], 7
0x94D72C: xorps   xmm0, xmm0
0x94D72F: movaps  xmmword ptr [eax+10h], xmm0
0x94D733: movaps  xmmword ptr [eax+20h], xmm0
0x94D737: movaps  xmmword ptr [eax+30h], xmm0
0x94D73B: mov     ecx, 3F800000h
0x94D740: mov     [eax+10h], ecx
0x94D743: mov     [eax+24h], ecx
0x94D746: mov     [eax+38h], ecx
0x94D749: mov     ecx, [ebp+arg_0]
0x94D74C: movaps  xmmword ptr [eax+40h], xmm0
0x94D750: mov     dword ptr [eax], offset off_AA2C14
0x94D756: movaps  xmm0, xmmword ptr [ecx]
0x94D759: mov     ecx, [ebp+arg_4]
0x94D75C: movaps  xmmword ptr [eax+60h], xmm0
0x94D760: movaps  xmm0, xmmword ptr [edx]
0x94D763: mov     edx, [ebp+arg_C]
0x94D766: movaps  xmmword ptr [eax+70h], xmm0
0x94D76A: movaps  xmm0, xmmword ptr [ecx]
0x94D76D: movaps  xmmword ptr [eax+80h], xmm0
0x94D774: movaps  xmm0, xmmword ptr [edx]
0x94D777: and     esp, 0FFFFFFF0h
0x94D77A: movaps  xmmword ptr [eax+90h], xmm0
0x94D781: mov     esp, ebp
0x94D783: pop     ebp
0x94D784: retn    10h
