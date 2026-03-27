0x890970: fldz
0x890972: fcomp   dword ptr [ecx+300h]
0x890978: fnstsw  ax
0x89097A: test    ah, 5
0x89097D: jp      short loc_8909BD
0x89097F: test    dword ptr [ecx+1F4h], 1800h
0x890989: movss   xmm1, dword ptr [ecx+300h]
0x890991: xorps   xmm0, xmm0
0x890994: movss   xmm0, xmm1
0x890998: jnz     short locret_8909CB
0x89099A: movaps  xmm1, xmm0
0x89099D: shufps  xmm1, xmm0, 0
0x8909A1: movaps  xmm0, xmmword ptr [ecx+2F0h]
0x8909A8: mulps   xmm1, xmm0
0x8909AB: movaps  xmm0, xmmword ptr [ecx+2E0h]
0x8909B2: addps   xmm1, xmm0
0x8909B5: movaps  xmmword ptr [ecx+2E0h], xmm1
0x8909BC: retn
0x8909BD: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8909C4: movaps  xmmword ptr [ecx+2F0h], xmm0
0x8909CB: retn
