0x539B00: fldz
0x539B02: mov     eax, ecx
0x539B04: fst     dword ptr [eax]
0x539B06: xorps   xmm0, xmm0
0x539B09: fstp    dword ptr [eax+4]
0x539B0C: movaps  xmmword ptr [eax+10h], xmm0
0x539B10: fld1
0x539B12: movaps  xmmword ptr [eax+20h], xmm0
0x539B16: movaps  xmmword ptr [eax+30h], xmm0
0x539B1A: movaps  xmmword ptr [eax+40h], xmm0
0x539B1E: movaps  xmmword ptr [eax+50h], xmm0
0x539B22: movaps  xmmword ptr [eax+60h], xmm0
0x539B26: movaps  xmmword ptr [eax+70h], xmm0
0x539B2A: fst     dword ptr [eax+50h]
0x539B2D: fst     dword ptr [eax+64h]
0x539B30: fstp    dword ptr [eax+78h]
0x539B33: movaps  xmmword ptr [eax+80h], xmm0
0x539B3A: retn
