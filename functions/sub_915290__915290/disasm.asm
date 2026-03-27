0x915290: push    ebp
0x915291: mov     ebp, esp
0x915293: and     esp, 0FFFFFFF0h
0x915296: sub     esp, 30h
0x915299: mov     edx, [ebp+arg_0]
0x91529C: movaps  xmm1, xmmword ptr [ecx+10h]
0x9152A0: fld     dword ptr [edx+30h]
0x9152A3: movaps  xmm2, xmmword ptr [edx]
0x9152A6: movaps  xmm0, xmm1
0x9152A9: movaps  xmm3, xmm1
0x9152AC: shufps  xmm3, xmm1, 0FFh
0x9152B0: mulps   xmm0, xmm2
0x9152B3: movaps  xmm1, xmm0
0x9152B6: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x9152BA: addss   xmm1, xmm3
0x9152BE: movaps  xmm3, xmm0
0x9152C1: shufps  xmm3, xmm0, 55h ; 'U'
0x9152C5: addss   xmm3, xmm0
0x9152C9: addps   xmm3, xmm1
0x9152CC: movaps  xmm1, xmmword ptr [ecx+10h]
0x9152D0: lea     eax, [esp+30h+var_24]
0x9152D4: movss   dword ptr [eax], xmm3
0x9152D8: fld     [esp+30h+var_24]
0x9152DC: movaps  xmm3, xmmword ptr [edx+10h]
0x9152E0: fsub    st, st(1)
0x9152E2: movaps  xmm0, xmm1
0x9152E5: mulps   xmm0, xmm3
0x9152E8: movaps  xmm4, xmm1
0x9152EB: fstp    [esp+30h+var_28]
0x9152EF: shufps  xmm4, xmm1, 0FFh
0x9152F3: movaps  xmm1, xmm0
0x9152F6: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x9152FA: addss   xmm1, xmm4
0x9152FE: movaps  xmm4, xmm0
0x915301: shufps  xmm4, xmm0, 55h ; 'U'
0x915305: lea     eax, [esp+30h+var_24]
0x915309: addss   xmm4, xmm0
0x91530D: addps   xmm4, xmm1
0x915310: movss   dword ptr [eax], xmm4
0x915314: fsubr   [esp+30h+var_24]
0x915318: fcom    dword ptr ds:0A2FAA8h
0x91531E: fnstsw  ax
0x915320: test    ah, 1
0x915323: jz      loc_9153DB
0x915329: fld     [esp+30h+var_28]
0x91532D: fsub    st, st(1)
0x91532F: fstp    [esp+30h+var_24]
0x915333: fstp    st
0x915335: fld     [esp+30h+var_24]
0x915339: fcomp   dword ptr [edx+34h]
0x91533C: fnstsw  ax
0x91533E: test    ah, 5
0x915341: jnp     loc_9153DD
0x915347: fld     [esp+30h+var_28]
0x91534B: fcomp   dword ptr ds:0A2FAA8h
0x915351: fnstsw  ax
0x915353: test    ah, 41h
0x915356: jp      short loc_915360
0x915358: fld     dword ptr ds:0A2FAA8h
0x91535E: jmp     short loc_915368
0x915360: fld     [esp+30h+var_28]
0x915364: fdiv    [esp+30h+var_24]
0x915368: movaps  xmm5, xmmword ptr [ecx+20h]
0x91536C: fst     [esp+30h+var_24]
0x915370: movss   xmm0, [esp+30h+var_24]
0x915376: movaps  xmm4, xmmword ptr ds:0A372D0h
0x91537D: movaps  xmm1, xmmword ptr [ecx+30h]
0x915381: shufps  xmm0, xmm0, 0
0x915385: movaps  xmm6, xmm0
0x915388: mulps   xmm6, xmm3
0x91538B: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x915392: subps   xmm3, xmm0
0x915395: mulps   xmm3, xmm2
0x915398: addps   xmm3, xmm6
0x91539B: subps   xmm3, xmm5
0x91539E: andps   xmm3, xmm4
0x9153A1: cmpleps xmm3, xmm1
0x9153A5: movmskps edx, xmm3
0x9153A8: and     edx, 7
0x9153AB: cmp     dl, 7
0x9153AE: jnz     short loc_9153DB
0x9153B0: movaps  xmm0, xmmword ptr [ecx+10h]
0x9153B4: fstp    [esp+30h+var_C]
0x9153B8: mov     ecx, [ebp+arg_8]
0x9153BB: mov     eax, [ecx]
0x9153BD: lea     edx, [esp+30h+var_20]
0x9153C1: push    edx
0x9153C2: mov     edx, [ebp+arg_4]
0x9153C5: push    edx
0x9153C6: movaps  [esp+38h+var_20], xmm0
0x9153CB: mov     [esp+38h+var_10], 0FFFFFFFFh
0x9153D3: call    dword ptr [eax]
0x9153D5: mov     esp, ebp
0x9153D7: pop     ebp
0x9153D8: retn    0Ch
0x9153DB: fstp    st
0x9153DD: mov     esp, ebp
0x9153DF: pop     ebp
0x9153E0: retn    0Ch
