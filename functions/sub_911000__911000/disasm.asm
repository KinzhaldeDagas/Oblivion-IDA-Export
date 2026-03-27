0x911000: mov     eax, ecx
0x911002: xorps   xmm0, xmm0
0x911005: mov     ecx, 1
0x91100A: mov     [eax+6], cx
0x91100E: mov     dword ptr [eax], offset off_A9CCB8
0x911014: mov     dword ptr [eax+70h], 3F800000h
0x91101B: mov     dword ptr [eax+74h], 0BCCCCCCDh
0x911022: mov     dword ptr [eax+78h], 3CCCCCCDh
0x911029: mov     dword ptr [eax+7Ch], 0BF060AA6h
0x911030: mov     dword ptr [eax+80h], 3F060AA6h
0x91103A: mov     dword ptr [eax+84h], 0
0x911044: movaps  xmmword ptr [eax+10h], xmm0
0x911048: movaps  xmmword ptr [eax+20h], xmm0
0x91104C: movaps  xmmword ptr [eax+30h], xmm0
0x911050: movaps  xmmword ptr [eax+40h], xmm0
0x911054: movaps  xmmword ptr [eax+50h], xmm0
0x911058: movaps  xmmword ptr [eax+60h], xmm0
0x91105C: mov     [eax+0Ch], cl
0x91105F: retn
