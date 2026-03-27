0x9155C0: movss   xmm4, dword ptr ds:0A46C30h
0x9155C8: mov     eax, ecx
0x9155CA: movaps  xmm2, xmmword ptr [eax+20h]
0x9155CE: movaps  xmm1, xmmword ptr [eax+10h]
0x9155D2: movaps  xmm0, xmm2
0x9155D5: subps   xmm0, xmm1
0x9155D8: movaps  xmm1, xmmword ptr [eax+30h]
0x9155DC: subps   xmm1, xmm2
0x9155DF: movaps  xmm3, xmm0
0x9155E2: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x9155E6: shufps  xmm0, xmm0, 0C9h ; 'É'
0x9155EA: movaps  xmm2, xmm1
0x9155ED: shufps  xmm2, xmm1, 0C9h ; 'É'
0x9155F1: mulps   xmm2, xmm3
0x9155F4: movaps  xmm3, xmm1
0x9155F7: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x9155FB: mulps   xmm3, xmm0
0x9155FE: subps   xmm3, xmm2
0x915601: movaps  xmmword ptr [eax+40h], xmm3
0x915605: movaps  xmm1, xmmword ptr [eax+40h]
0x915609: movaps  xmm0, xmm1
0x91560C: mulps   xmm0, xmm1
0x91560F: movaps  xmm2, xmm0
0x915612: shufps  xmm2, xmm0, 55h ; 'U'
0x915616: addss   xmm2, xmm0
0x91561A: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x91561E: addss   xmm0, xmm2
0x915622: movaps  xmm2, xmm0
0x915625: rsqrtss xmm2, xmm2
0x915629: mulss   xmm0, xmm2
0x91562D: mulss   xmm0, xmm2
0x915631: xorps   xmm3, xmm3
0x915634: movss   xmm3, xmm4
0x915638: movss   xmm4, dword ptr ds:0A3D65Ch
0x915640: subss   xmm3, xmm0
0x915644: xorps   xmm0, xmm0
0x915647: movss   xmm0, xmm4
0x91564B: mulss   xmm0, xmm2
0x91564F: mulss   xmm0, xmm3
0x915653: movaps  xmm2, xmm0
0x915656: shufps  xmm2, xmm0, 0
0x91565A: mulps   xmm2, xmm1
0x91565D: movaps  xmmword ptr [eax+40h], xmm2
0x915661: retn
