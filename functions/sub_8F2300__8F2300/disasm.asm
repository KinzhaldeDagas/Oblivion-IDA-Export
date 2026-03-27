0x8F2300: push    ebp
0x8F2301: mov     ebp, esp
0x8F2303: and     esp, 0FFFFFFF0h
0x8F2306: sub     esp, 18h
0x8F2309: push    esi
0x8F230A: push    edi
0x8F230B: movaps  xmm0, xmmword ptr [ecx+20h]
0x8F230F: movaps  xmm2, xmmword ptr [ecx+30h]
0x8F2313: subps   xmm2, xmm0
0x8F2316: movaps  xmm0, xmm2
0x8F2319: mulps   xmm0, xmm2
0x8F231C: movaps  xmm1, xmm0
0x8F231F: shufps  xmm1, xmm0, 55h ; 'U'
0x8F2323: addss   xmm1, xmm0
0x8F2327: movaps  xmm3, xmm0
0x8F232A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F232E: movaps  xmm0, xmm3
0x8F2331: addss   xmm0, xmm1
0x8F2335: movaps  [esp+20h+var_10], xmm0
0x8F233A: rsqrtss xmm1, xmm0
0x8F233E: movss   dword ptr [esp+20h+var_10], xmm1
0x8F2344: movaps  xmm1, [esp+20h+var_10]
0x8F2349: mulss   xmm0, xmm1
0x8F234D: mulss   xmm0, xmm1
0x8F2351: mov     [esp+20h+var_18], 40400000h
0x8F2359: movss   xmm3, [esp+20h+var_18]
0x8F235F: mov     [esp+20h+var_18], 3F000000h
0x8F2367: movss   xmm4, [esp+20h+var_18]
0x8F236D: movaps  xmm5, xmm3
0x8F2370: subss   xmm5, xmm0
0x8F2374: movaps  xmm0, xmm4
0x8F2377: mulss   xmm0, xmm1
0x8F237B: mulss   xmm0, xmm5
0x8F237F: movaps  xmm1, xmm0
0x8F2382: shufps  xmm1, xmm0, 0
0x8F2386: mulps   xmm1, xmm2
0x8F2389: movaps  [esp+20h+var_10], xmm1
0x8F238E: fld     dword ptr [esp+20h+var_10]
0x8F2392: fabs
0x8F2394: fld     dword ptr [esp+20h+var_10+4]
0x8F2398: fabs
0x8F239A: xor     edx, edx
0x8F239C: fst     [esp+20h+var_18]
0x8F23A0: fld     dword ptr [esp+20h+var_10+8]
0x8F23A4: fabs
0x8F23A6: mov     esi, 1
0x8F23AB: fstp    [esp+20h+var_14]
0x8F23AF: mov     edi, 2
0x8F23B4: fcomp   st(1)
0x8F23B6: fnstsw  ax
0x8F23B8: test    ah, 5
0x8F23BB: jp      short loc_8F23CA
0x8F23BD: fstp    st
0x8F23BF: xor     esi, esi
0x8F23C1: fld     [esp+20h+var_18]
0x8F23C5: mov     edx, 1
0x8F23CA: fld     [esp+20h+var_14]
0x8F23CE: fcomp   st(1)
0x8F23D0: fnstsw  ax
0x8F23D2: fstp    st
0x8F23D4: test    ah, 5
0x8F23D7: jp      short loc_8F23E0
0x8F23D9: mov     edi, edx
0x8F23DB: mov     edx, 2
0x8F23E0: mov     dword ptr [ecx+edx*4+40h], 0
0x8F23E8: lea     edx, ds:0[esi*4]
0x8F23EF: fld     dword ptr [esp+edx+20h+var_10]
0x8F23F3: mov     dword ptr [ecx+4Ch], 0
0x8F23FA: lea     eax, ds:0[edi*4]
0x8F2401: fchs
0x8F2403: mov     esi, dword ptr [esp+eax+20h+var_10]
0x8F2407: mov     [edx+ecx+40h], esi
0x8F240B: fstp    dword ptr [eax+ecx+40h]
0x8F240F: movaps  xmm2, xmmword ptr [ecx+40h]
0x8F2413: movaps  xmm0, xmm2
0x8F2416: mulps   xmm0, xmm2
0x8F2419: movaps  xmm5, xmm0
0x8F241C: shufps  xmm5, xmm0, 55h ; 'U'
0x8F2420: addss   xmm5, xmm0
0x8F2424: movaps  xmm6, xmm0
0x8F2427: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F242B: movaps  xmm0, xmm6
0x8F242E: addss   xmm0, xmm5
0x8F2432: movaps  [esp+20h+var_10], xmm0
0x8F2437: rsqrtss xmm5, xmm0
0x8F243B: movss   dword ptr [esp+20h+var_10], xmm5
0x8F2441: movaps  xmm5, [esp+20h+var_10]
0x8F2446: mulss   xmm0, xmm5
0x8F244A: mulss   xmm0, xmm5
0x8F244E: subss   xmm3, xmm0
0x8F2452: mulss   xmm4, xmm5
0x8F2456: movaps  xmm0, xmm4
0x8F2459: mulss   xmm0, xmm3
0x8F245D: movaps  xmm3, xmm0
0x8F2460: shufps  xmm3, xmm0, 0
0x8F2464: mulps   xmm3, xmm2
0x8F2467: movaps  xmmword ptr [ecx+40h], xmm3
0x8F246B: movaps  xmm0, xmmword ptr [ecx+40h]
0x8F246F: movaps  xmm2, xmm0
0x8F2472: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F2476: movaps  xmm3, xmm1
0x8F2479: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8F247D: mulps   xmm3, xmm2
0x8F2480: movaps  xmm2, xmm0
0x8F2483: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8F2487: movaps  xmm0, xmm1
0x8F248A: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8F248E: mulps   xmm0, xmm2
0x8F2491: pop     edi
0x8F2492: subps   xmm0, xmm3
0x8F2495: movaps  xmmword ptr [ecx+50h], xmm0
0x8F2499: pop     esi
0x8F249A: mov     esp, ebp
0x8F249C: pop     ebp
0x8F249D: retn
