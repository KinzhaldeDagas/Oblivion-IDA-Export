0x8D20C0: push    ebp
0x8D20C1: mov     ebp, esp
0x8D20C3: and     esp, 0FFFFFFF0h
0x8D20C6: sub     esp, 34h
0x8D20C9: push    ebx
0x8D20CA: push    esi
0x8D20CB: push    edi
0x8D20CC: mov     ebx, [ebp+arg_0]
0x8D20CF: movaps  xmm5, xmmword ptr [ebx]
0x8D20D2: mov     esi, [ebp+arg_4]
0x8D20D5: movaps  xmm2, xmmword ptr [esi+10h]
0x8D20D9: movaps  xmm0, xmmword ptr [esi]
0x8D20DC: movaps  xmm3, xmm2
0x8D20DF: subps   xmm0, xmm2
0x8D20E2: subps   xmm3, xmm5
0x8D20E5: movaps  xmm1, xmm3
0x8D20E8: mulps   xmm1, xmm0
0x8D20EB: movaps  xmm4, xmm1
0x8D20EE: shufps  xmm4, xmm1, 55h ; 'U'
0x8D20F2: addss   xmm4, xmm1
0x8D20F6: movaps  xmm6, xmm1
0x8D20F9: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8D20FD: movaps  xmm1, xmmword ptr [esi+20h]
0x8D2101: addss   xmm6, xmm4
0x8D2105: subps   xmm1, xmm2
0x8D2108: lea     eax, [esp+40h+var_24]
0x8D210C: movss   dword ptr [eax], xmm6
0x8D2110: mov     eax, [ebp+arg_8]
0x8D2113: movaps  xmm2, xmm3
0x8D2116: mulps   xmm2, xmm1
0x8D2119: movaps  xmm4, xmm2
0x8D211C: shufps  xmm4, xmm2, 55h ; 'U'
0x8D2120: addss   xmm4, xmm2
0x8D2124: movaps  xmm6, xmm2
0x8D2127: shufps  xmm6, xmm2, 0AAh ; 'ª'
0x8D212B: addss   xmm6, xmm4
0x8D212F: lea     ecx, [esp+40h+var_28]
0x8D2133: movss   dword ptr [ecx], xmm6
0x8D2137: fld     [esp+40h+var_28]
0x8D213B: fmul    dword ptr [eax+8]
0x8D213E: movaps  xmm4, xmmword ptr ds:0BA7A40h
0x8D2145: fld     [esp+40h+var_24]
0x8D2149: mov     dword ptr [esp+40h+var_20+0Ch], 3A83126Fh
0x8D2151: fmul    dword ptr [eax+4]
0x8D2154: fsubp   st(1), st
0x8D2156: fld     [esp+40h+var_24]
0x8D215A: fmul    dword ptr [eax+8]
0x8D215D: fld     [esp+40h+var_28]
0x8D2161: fmul    dword ptr [eax]
0x8D2163: fsubp   st(1), st
0x8D2165: fld     st(1)
0x8D2167: fadd    dword ptr ds:0A37080h
0x8D216D: fstp    dword ptr [esp+40h+var_20]
0x8D2171: fld     dword ptr ds:0A7B17Ch
0x8D2177: fsub    st, st(2)
0x8D2179: fsub    st, st(1)
0x8D217B: fstp    dword ptr [esp+40h+var_20+4]
0x8D217F: fadd    dword ptr ds:0A37080h
0x8D2185: fstp    dword ptr [esp+40h+var_20+8]
0x8D2189: movaps  xmm2, [esp+40h+var_20]
0x8D218E: cmpltps xmm4, xmm2
0x8D2192: movmskps ecx, xmm4
0x8D2195: fstp    st
0x8D2197: and     ecx, 7
0x8D219A: cmp     ecx, 7
0x8D219D: jnz     loc_8D2252
0x8D21A3: mov     ecx, [ebp+arg_C]
0x8D21A6: movaps  xmm2, xmm1
0x8D21A9: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8D21AD: movaps  xmm4, xmm0
0x8D21B0: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8D21B4: mulps   xmm4, xmm2
0x8D21B7: movaps  xmm2, xmm1
0x8D21BA: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8D21BE: movaps  xmm1, xmm0
0x8D21C1: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8D21C5: movaps  xmm0, xmm1
0x8D21C8: mulps   xmm0, xmm2
0x8D21CB: subps   xmm0, xmm4
0x8D21CE: movaps  xmmword ptr [ecx], xmm0
0x8D21D1: mov     edx, [eax+0Ch]
0x8D21D4: mov     [esp+40h+var_24], edx
0x8D21D8: movss   xmm1, [esp+40h+var_24]
0x8D21DE: movaps  xmm2, xmm1
0x8D21E1: shufps  xmm2, xmm1, 0
0x8D21E5: movaps  xmm1, xmm2
0x8D21E8: mulps   xmm1, xmm0
0x8D21EB: movaps  xmm0, xmm1
0x8D21EE: mulps   xmm0, xmm3
0x8D21F1: movaps  xmm2, xmm0
0x8D21F4: shufps  xmm2, xmm0, 55h ; 'U'
0x8D21F8: movaps  xmm3, xmm0
0x8D21FB: lea     eax, [esp+40h+var_28]
0x8D21FF: addss   xmm2, xmm0
0x8D2203: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D2207: addss   xmm3, xmm2
0x8D220B: movss   dword ptr [eax], xmm3
0x8D220F: fld     [esp+40h+var_28]
0x8D2213: fcomp   dword ptr ds:0A2FAA8h
0x8D2219: mov     edx, [esp+40h+var_28]
0x8D221D: movaps  xmmword ptr [ecx], xmm1
0x8D2220: mov     [ecx+10h], edx
0x8D2223: fnstsw  ax
0x8D2225: test    ah, 41h
0x8D2228: jnz     short loc_8D2240
0x8D222A: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8D2231: xorps   xmm1, xmm0
0x8D2234: movaps  xmmword ptr [ecx], xmm1
0x8D2237: xor     eax, eax
0x8D2239: pop     edi
0x8D223A: pop     esi
0x8D223B: pop     ebx
0x8D223C: mov     esp, ebp
0x8D223E: pop     ebp
0x8D223F: retn
0x8D2240: fld     [esp+40h+var_28]
0x8D2244: xor     eax, eax
0x8D2246: fchs
0x8D2248: fstp    dword ptr [ecx+10h]
0x8D224B: pop     edi
0x8D224C: pop     esi
0x8D224D: pop     ebx
0x8D224E: mov     esp, ebp
0x8D2250: pop     ebp
0x8D2251: retn
0x8D2252: movsx   edi, ds:byte_A99F04[ecx]
0x8D2259: test    edi, edi
0x8D225B: jge     loc_8D232C
0x8D2261: movsx   ecx, ds:byte_A99F14[edi]
0x8D2268: movsx   edx, ds:byte_A99F16[edi]
0x8D226F: add     edi, 8
0x8D2272: lea     eax, [esp+40h+var_20]
0x8D2276: push    eax
0x8D2277: shl     ecx, 4
0x8D227A: add     ecx, esi
0x8D227C: shl     edx, 4
0x8D227F: push    ecx
0x8D2280: add     edx, esi
0x8D2282: push    edx
0x8D2283: push    ebx
0x8D2284: call    sub_8D1CD0
0x8D2289: movaps  xmm0, [esp+50h+var_20]
0x8D228E: mov     eax, [ebp+arg_C]
0x8D2291: subps   xmm5, xmm0
0x8D2294: movaps  xmm0, xmm5
0x8D2297: mulps   xmm0, xmm5
0x8D229A: movaps  xmm1, xmm0
0x8D229D: shufps  xmm1, xmm0, 55h ; 'U'
0x8D22A1: addss   xmm1, xmm0
0x8D22A5: movaps  xmm2, xmm0
0x8D22A8: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D22AC: movaps  xmm0, xmm2
0x8D22AF: addss   xmm0, xmm1
0x8D22B3: movaps  [esp+50h+var_20], xmm0
0x8D22B8: rsqrtss xmm1, xmm0
0x8D22BC: movss   dword ptr [esp+50h+var_20], xmm1
0x8D22C2: movaps  xmm1, [esp+50h+var_20]
0x8D22C7: movaps  xmm2, xmm0
0x8D22CA: mulss   xmm2, xmm1
0x8D22CE: mulss   xmm2, xmm1
0x8D22D2: mov     [esp+50h+var_24], 40400000h
0x8D22DA: movss   xmm3, [esp+50h+var_24]
0x8D22E0: subss   xmm3, xmm2
0x8D22E4: mov     [esp+50h+var_24], 3F000000h
0x8D22EC: movss   xmm2, [esp+50h+var_24]
0x8D22F2: mulss   xmm2, xmm1
0x8D22F6: movaps  xmm1, xmm2
0x8D22F9: mulss   xmm1, xmm3
0x8D22FD: shufps  xmm1, xmm1, 0
0x8D2301: lea     ecx, [esp+50h+var_24]
0x8D2305: mulss   xmm0, xmm1
0x8D2309: movss   dword ptr [ecx], xmm0
0x8D230D: mov     edx, [esp+50h+var_24]
0x8D2311: movaps  xmm2, xmm1
0x8D2314: mulps   xmm2, xmm5
0x8D2317: movaps  xmmword ptr [eax], xmm2
0x8D231A: mov     [eax+10h], edx
0x8D231D: add     esp, 10h
0x8D2320: mov     eax, 1
0x8D2325: pop     edi
0x8D2326: pop     esi
0x8D2327: pop     ebx
0x8D2328: mov     esp, ebp
0x8D232A: pop     ebp
0x8D232B: retn
0x8D232C: movsx   edx, ds:byte_A99F0E[edi]
0x8D2333: lea     ecx, [esp+40h+var_20]
0x8D2337: push    ecx
0x8D2338: shl     edx, 4
0x8D233B: mov     eax, edi
0x8D233D: shl     eax, 4
0x8D2340: add     edx, esi
0x8D2342: add     eax, esi
0x8D2344: push    edx
0x8D2345: push    eax
0x8D2346: push    ebx
0x8D2347: mov     [esp+50h+var_24], eax
0x8D234B: call    sub_8D1CD0
0x8D2350: movsx   edx, ds:byte_A99F0C[edi]
0x8D2357: mov     ecx, [esp+50h+var_24]
0x8D235B: lea     eax, [esp+50h+var_10]
0x8D235F: push    eax
0x8D2360: shl     edx, 4
0x8D2363: push    ecx
0x8D2364: add     edx, esi
0x8D2366: push    edx
0x8D2367: push    ebx
0x8D2368: call    sub_8D1CD0
0x8D236D: movaps  xmm0, [esp+60h+var_20]
0x8D2372: movaps  xmm1, xmm5
0x8D2375: subps   xmm1, xmm0
0x8D2378: movaps  xmm0, [esp+60h+var_10]
0x8D237D: subps   xmm5, xmm0
0x8D2380: movaps  xmm0, xmm1
0x8D2383: mulps   xmm0, xmm1
0x8D2386: movaps  xmm2, xmm0
0x8D2389: shufps  xmm2, xmm0, 55h ; 'U'
0x8D238D: addss   xmm2, xmm0
0x8D2391: movaps  xmm3, xmm0
0x8D2394: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D2398: addss   xmm3, xmm2
0x8D239C: lea     eax, [esp+60h+var_28]
0x8D23A0: movss   dword ptr [eax], xmm3
0x8D23A4: fld     [esp+60h+var_28]
0x8D23A8: movaps  xmm0, xmm5
0x8D23AB: mulps   xmm0, xmm5
0x8D23AE: movaps  xmm2, xmm0
0x8D23B1: shufps  xmm2, xmm0, 55h ; 'U'
0x8D23B5: movaps  xmm3, xmm0
0x8D23B8: addss   xmm2, xmm0
0x8D23BC: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D23C0: lea     ecx, [esp+60h+var_24]
0x8D23C4: addss   xmm3, xmm2
0x8D23C8: movss   dword ptr [ecx], xmm3
0x8D23CC: fcomp   [esp+60h+var_24]
0x8D23D0: add     esp, 20h
0x8D23D3: fnstsw  ax
0x8D23D5: test    ah, 5
0x8D23D8: mov     eax, [ebp+arg_C]
0x8D23DB: jp      short loc_8D2415
0x8D23DD: fld     [esp+40h+var_28]
0x8D23E1: fsqrt
0x8D23E3: fdivr   dword ptr ds:0A2F948h
0x8D23E9: fld     [esp+40h+var_28]
0x8D23ED: fmul    st, st(1)
0x8D23EF: fstp    dword ptr [eax+10h]
0x8D23F2: fstp    [esp+40h+var_24]
0x8D23F6: movss   xmm0, [esp+40h+var_24]
0x8D23FC: movaps  xmm2, xmm0
0x8D23FF: shufps  xmm2, xmm0, 0
0x8D2403: mulps   xmm2, xmm1
0x8D2406: movaps  xmmword ptr [eax], xmm2
0x8D2409: mov     eax, 1
0x8D240E: pop     edi
0x8D240F: pop     esi
0x8D2410: pop     ebx
0x8D2411: mov     esp, ebp
0x8D2413: pop     ebp
0x8D2414: retn
0x8D2415: fld     [esp+40h+var_24]
0x8D2419: pop     edi
0x8D241A: fsqrt
0x8D241C: pop     esi
0x8D241D: pop     ebx
0x8D241E: fdivr   dword ptr ds:0A2F948h
0x8D2424: fld     [esp+34h+var_24]
0x8D2428: fmul    st, st(1)
0x8D242A: fstp    dword ptr [eax+10h]
0x8D242D: fstp    [esp+34h+var_24]
0x8D2431: movss   xmm0, [esp+34h+var_24]
0x8D2437: movaps  xmm1, xmm0
0x8D243A: shufps  xmm1, xmm0, 0
0x8D243E: mulps   xmm1, xmm5
0x8D2441: movaps  xmmword ptr [eax], xmm1
0x8D2444: mov     eax, 1
0x8D2449: mov     esp, ebp
0x8D244B: pop     ebp
0x8D244C: retn
