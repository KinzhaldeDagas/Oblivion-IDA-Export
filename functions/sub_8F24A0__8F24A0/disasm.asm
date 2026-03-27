0x8F24A0: push    ebp
0x8F24A1: mov     ebp, esp
0x8F24A3: and     esp, 0FFFFFFF0h
0x8F24A6: sub     esp, 14h
0x8F24A9: mov     eax, [ebp+arg_0]
0x8F24AC: movaps  xmm2, xmmword ptr [eax]
0x8F24AF: push    ebx
0x8F24B0: push    esi
0x8F24B1: mov     esi, ecx
0x8F24B3: movaps  xmm0, xmmword ptr [esi+20h]
0x8F24B7: movaps  xmm1, xmmword ptr [esi+30h]
0x8F24BB: subps   xmm1, xmm0
0x8F24BE: movaps  xmm0, xmmword ptr [esi+40h]
0x8F24C2: mulps   xmm0, xmm2
0x8F24C5: movaps  xmm3, xmm0
0x8F24C8: shufps  xmm3, xmm0, 55h ; 'U'
0x8F24CC: addss   xmm3, xmm0
0x8F24D0: movaps  xmm4, xmm0
0x8F24D3: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F24D7: movaps  xmm0, xmmword ptr [esi+50h]
0x8F24DB: addss   xmm4, xmm3
0x8F24DF: mulps   xmm0, xmm2
0x8F24E2: lea     ecx, [esp+1Ch+var_8]
0x8F24E6: movss   dword ptr [ecx], xmm4
0x8F24EA: movaps  xmm3, xmm0
0x8F24ED: shufps  xmm3, xmm0, 55h ; 'U'
0x8F24F1: movaps  xmm4, xmm0
0x8F24F4: addss   xmm3, xmm0
0x8F24F8: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F24FC: lea     edx, [esp+1Ch+var_C]
0x8F2500: addss   xmm4, xmm3
0x8F2504: movss   dword ptr [edx], xmm4
0x8F2508: fld     [esp+1Ch+var_C]
0x8F250C: fmul    [esp+1Ch+var_C]
0x8F2510: push    edi
0x8F2511: fld     [esp+20h+var_8]
0x8F2515: fmul    [esp+20h+var_8]
0x8F2519: faddp   st(1), st
0x8F251B: fcom    dword ptr ds:0A97F48h
0x8F2521: fnstsw  ax
0x8F2523: test    ah, 1
0x8F2526: jnz     short loc_8F255A
0x8F2528: fsqrt
0x8F252A: fdivr   dword ptr ds:0A2F948h
0x8F2530: fstp    [esp+20h+var_4]
0x8F2534: fld     [esp+20h+var_C]
0x8F2538: fmul    [esp+20h+var_4]
0x8F253C: fld     [esp+20h+var_8]
0x8F2540: fmul    [esp+20h+var_4]
0x8F2544: fld     st(1)
0x8F2546: fcomp   dword ptr ds:0A2FAA8h
0x8F254C: fnstsw  ax
0x8F254E: test    ah, 1
0x8F2551: jnz     short loc_8F256F
0x8F2553: mov     edi, 1
0x8F2558: jmp     short loc_8F2571
0x8F255A: fstp    st
0x8F255C: mov     edi, 1
0x8F2561: fld     dword ptr ds:0A2FAA8h
0x8F2567: fld     dword ptr ds:0A2F948h
0x8F256D: jmp     short loc_8F2571
0x8F256F: xor     edi, edi
0x8F2571: fcom    dword ptr ds:0A2FAA8h
0x8F2577: fnstsw  ax
0x8F2579: test    ah, 1
0x8F257C: jnz     short loc_8F2585
0x8F257E: mov     edx, 1
0x8F2583: jmp     short loc_8F2587
0x8F2585: xor     edx, edx
0x8F2587: fxch    st(1)
0x8F2589: fabs
0x8F258B: fstp    [esp+20h+var_4]
0x8F258F: fabs
0x8F2591: fld     [esp+20h+var_4]
0x8F2595: fcomp   st(1)
0x8F2597: fnstsw  ax
0x8F2599: test    ah, 41h
0x8F259C: jp      short loc_8F25E2
0x8F259E: fstp    st
0x8F25A0: mov     ecx, 1
0x8F25A5: fld     [esp+20h+var_4]
0x8F25A9: mulps   xmm1, xmm2
0x8F25AC: movaps  xmm0, xmm1
0x8F25AF: shufps  xmm0, xmm1, 55h ; 'U'
0x8F25B3: movaps  xmm2, xmm1
0x8F25B6: lea     eax, [esp+20h+var_4]
0x8F25BA: addss   xmm0, xmm1
0x8F25BE: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x8F25C2: addss   xmm2, xmm0
0x8F25C6: movss   dword ptr [eax], xmm2
0x8F25CA: fld     [esp+20h+var_4]
0x8F25CE: fcomp   dword ptr ds:0A2FAA8h
0x8F25D4: fnstsw  ax
0x8F25D6: test    ah, 41h
0x8F25D9: jp      short loc_8F25E6
0x8F25DB: mov     eax, 1
0x8F25E0: jmp     short loc_8F25E8
0x8F25E2: xor     ecx, ecx
0x8F25E4: jmp     short loc_8F25A9
0x8F25E6: xor     eax, eax
0x8F25E8: fld     dword ptr ds:0B2FDBCh
0x8F25EE: fmul    st, st(1)
0x8F25F0: fsub    dword ptr ds:0B2FDC4h
0x8F25F6: fadd    dword ptr ds:0A43328h
0x8F25FC: fstp    [esp+20h+var_4]
0x8F2600: fstp    st
0x8F2602: fld     [esp+20h+var_4]
0x8F2606: fistp   [esp+20h+var_8]
0x8F260A: lea     eax, [edi+eax*2]
0x8F260D: lea     edx, [edx+eax*2]
0x8F2610: lea     eax, [ecx+edx*2]
0x8F2613: mov     edx, [esp+20h+var_8]
0x8F2617: shl     eax, 4
0x8F261A: add     eax, edx
0x8F261C: mov     bl, al
0x8F261E: shr     bl, 5
0x8F2621: and     bl, 1
0x8F2624: mov     byte ptr [esp+20h+var_C], bl
0x8F2628: xor     ebx, ebx
0x8F262A: mov     bl, al
0x8F262C: mov     dl, al
0x8F262E: mov     cl, al
0x8F2630: shr     dl, 7
0x8F2633: shr     cl, 6
0x8F2636: and     dl, 1
0x8F2639: and     cl, 1
0x8F263C: and     ebx, 0Fh
0x8F263F: mov     [esp+20h+var_4], ebx
0x8F2643: fild    [esp+20h+var_4]
0x8F2647: mov     bl, al
0x8F2649: shr     bl, 4
0x8F264C: test    bl, 1
0x8F264F: fadd    dword ptr ds:0A3D65Ch
0x8F2655: fmul    dword ptr ds:0B2FDC0h
0x8F265B: fst     [esp+20h+var_4]
0x8F265F: jz      short loc_8F2673
0x8F2661: fst     [esp+20h+var_8]
0x8F2665: fld     st
0x8F2667: fmulp   st(1), st
0x8F2669: fsubr   dword ptr ds:0A2F948h
0x8F266F: fsqrt
0x8F2671: jmp     short loc_8F2687
0x8F2673: fld     [esp+20h+var_4]
0x8F2677: fmul    [esp+20h+var_4]
0x8F267B: fsubr   dword ptr ds:0A2F948h
0x8F2681: fsqrt
0x8F2683: fstp    [esp+20h+var_8]
0x8F2687: test    cl, cl
0x8F2689: fld     [esp+20h+var_8]
0x8F268D: jnz     short loc_8F2691
0x8F268F: fchs
0x8F2691: mov     cl, byte ptr [esp+20h+var_C]
0x8F2695: test    cl, cl
0x8F2697: jnz     short loc_8F269F
0x8F2699: fxch    st(1)
0x8F269B: fchs
0x8F269D: fxch    st(1)
0x8F269F: mov     ecx, [esi+10h]
0x8F26A2: fxch    st(1)
0x8F26A4: movaps  xmm3, xmmword ptr [esi+50h]
0x8F26A8: fstp    [esp+20h+var_4]
0x8F26AC: movss   xmm0, [esp+20h+var_4]
0x8F26B2: test    dl, dl
0x8F26B4: fstp    [esp+20h+var_4]
0x8F26B8: movss   xmm1, [esp+20h+var_4]
0x8F26BE: setnz   dl
0x8F26C1: mov     [esp+20h+var_4], ecx
0x8F26C5: movss   xmm2, [esp+20h+var_4]
0x8F26CB: movzx   ecx, dl
0x8F26CE: movaps  xmm4, xmm1
0x8F26D1: shufps  xmm4, xmm1, 0
0x8F26D5: movaps  xmm1, xmmword ptr [esi+40h]
0x8F26D9: mulps   xmm4, xmm3
0x8F26DC: movaps  xmm3, xmm0
0x8F26DF: shufps  xmm3, xmm0, 0
0x8F26E3: mov     edx, 3
0x8F26E8: sub     edx, ecx
0x8F26EA: mov     ecx, [ebp+arg_4]
0x8F26ED: mulps   xmm3, xmm1
0x8F26F0: shl     edx, 4
0x8F26F3: movaps  xmm1, xmmword ptr [edx+esi]
0x8F26F7: movaps  xmm0, xmm2
0x8F26FA: pop     edi
0x8F26FB: addps   xmm3, xmm4
0x8F26FE: shufps  xmm0, xmm2, 0
0x8F2702: mulps   xmm0, xmm3
0x8F2705: addps   xmm1, xmm0
0x8F2708: or      eax, 3F000000h
0x8F270D: pop     esi
0x8F270E: movaps  xmmword ptr [ecx], xmm1
0x8F2711: mov     [ecx+0Ch], eax
0x8F2714: pop     ebx
0x8F2715: mov     esp, ebp
0x8F2717: pop     ebp
0x8F2718: retn    8
