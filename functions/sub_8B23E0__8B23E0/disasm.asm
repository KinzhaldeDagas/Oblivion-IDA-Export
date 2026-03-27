0x8B23E0: push    ebp
0x8B23E1: mov     ebp, esp
0x8B23E3: and     esp, 0FFFFFFF0h
0x8B23E6: sub     esp, 64h
0x8B23E9: mov     eax, [ebp+arg_C]
0x8B23EC: push    ebx
0x8B23ED: push    esi
0x8B23EE: mov     ebx, [ebp+arg_0]
0x8B23F1: mov     esi, ecx
0x8B23F3: mov     ecx, [eax]
0x8B23F5: mov     edx, [eax+4]
0x8B23F8: mov     dword ptr [esp+6Ch+var_50], ecx
0x8B23FC: mov     ecx, [eax+8]
0x8B23FF: mov     dword ptr [esp+6Ch+var_50+4], edx
0x8B2403: mov     edx, [eax+0Ch]
0x8B2406: mov     dword ptr [esp+6Ch+var_50+8], ecx
0x8B240A: mov     dword ptr [esp+6Ch+var_50+0Ch], edx
0x8B240E: movaps  xmm2, [esp+6Ch+var_50]
0x8B2413: movaps  xmm0, xmm2
0x8B2416: mulps   xmm0, xmm2
0x8B2419: movaps  xmm1, xmm0
0x8B241C: shufps  xmm1, xmm0, 55h ; 'U'
0x8B2420: addss   xmm1, xmm0
0x8B2424: movaps  xmm3, xmm0
0x8B2427: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8B242B: movaps  xmm0, xmm3
0x8B242E: addss   xmm0, xmm1
0x8B2432: movaps  [esp+6Ch+var_40], xmm0
0x8B2437: rsqrtss xmm1, xmm0
0x8B243B: movss   dword ptr [esp+6Ch+var_40], xmm1
0x8B2441: movaps  xmm1, [esp+6Ch+var_40]
0x8B2446: mov     [esp+6Ch+var_5C], 40400000h
0x8B244E: movss   xmm3, [esp+6Ch+var_5C]
0x8B2454: mulss   xmm0, xmm1
0x8B2458: mulss   xmm0, xmm1
0x8B245C: mov     [esp+6Ch+var_5C], 3F000000h
0x8B2464: movss   xmm4, [esp+6Ch+var_5C]
0x8B246A: push    edi
0x8B246B: movaps  [esp+70h+var_30], xmm3
0x8B2470: movaps  [esp+70h+var_20], xmm4
0x8B2475: mulss   xmm4, xmm1
0x8B2479: subss   xmm3, xmm0
0x8B247D: movaps  xmm0, xmm4
0x8B2480: mulss   xmm0, xmm3
0x8B2484: lea     eax, [esp+70h+var_50]
0x8B2488: movaps  xmm1, xmm0
0x8B248B: push    eax
0x8B248C: shufps  xmm1, xmm0, 0
0x8B2490: lea     edi, [esi+30h]
0x8B2493: mulps   xmm1, xmm2
0x8B2496: push    ebx
0x8B2497: mov     ecx, edi
0x8B2499: movaps  [esp+78h+var_50], xmm1
0x8B249E: call    sub_88FD90
0x8B24A3: mov     edx, [ebp+arg_4]
0x8B24A6: lea     ecx, [esp+70h+var_50]
0x8B24AA: push    ecx
0x8B24AB: push    edx
0x8B24AC: lea     ecx, [esi+70h]
0x8B24AF: call    sub_88FD90
0x8B24B4: mov     eax, [ebp+arg_8]
0x8B24B7: push    eax
0x8B24B8: push    ebx
0x8B24B9: lea     ecx, [esi+20h]
0x8B24BC: call    sub_88FD10
0x8B24C1: mov     ecx, [ebp+arg_8]
0x8B24C4: mov     edx, [ebp+arg_4]
0x8B24C7: push    ecx
0x8B24C8: push    edx
0x8B24C9: lea     ecx, [esi+60h]
0x8B24CC: call    sub_88FD10
0x8B24D1: fld     dword ptr [edi]
0x8B24D3: fabs
0x8B24D5: xor     ecx, ecx
0x8B24D7: fld     dword ptr [edi+4]
0x8B24DA: mov     edx, 1
0x8B24DF: fabs
0x8B24E1: mov     [esp+70h+var_54], 2
0x8B24E9: fst     [esp+70h+var_5C]
0x8B24ED: fld     dword ptr [edi+8]
0x8B24F0: fabs
0x8B24F2: fstp    [esp+70h+var_58]
0x8B24F6: fcomp   st(1)
0x8B24F8: fnstsw  ax
0x8B24FA: test    ah, 5
0x8B24FD: jp      short loc_8B250C
0x8B24FF: fstp    st
0x8B2501: xor     edx, edx
0x8B2503: fld     [esp+70h+var_5C]
0x8B2507: mov     ecx, 1
0x8B250C: fld     [esp+70h+var_58]
0x8B2510: fcomp   st(1)
0x8B2512: fnstsw  ax
0x8B2514: fstp    st
0x8B2516: test    ah, 5
0x8B2519: jp      short loc_8B2524
0x8B251B: mov     eax, ecx
0x8B251D: mov     ecx, 2
0x8B2522: jmp     short loc_8B2528
0x8B2524: mov     eax, [esp+70h+var_54]
0x8B2528: mov     dword ptr [esi+ecx*4+40h], 0
0x8B2530: mov     dword ptr [esi+4Ch], 0
0x8B2537: shl     eax, 2
0x8B253A: lea     ecx, ds:0[edx*4]
0x8B2541: mov     edx, [eax+edi]
0x8B2544: mov     [ecx+esi+40h], edx
0x8B2548: fld     dword ptr [ecx+edi]
0x8B254B: fchs
0x8B254D: lea     ecx, [esp+70h+var_10]
0x8B2551: fstp    dword ptr [eax+esi+40h]
0x8B2555: movaps  xmm1, xmmword ptr [esi+40h]
0x8B2559: movaps  xmm0, xmm1
0x8B255C: mulps   xmm0, xmm1
0x8B255F: movaps  xmm2, xmm0
0x8B2562: shufps  xmm2, xmm0, 55h ; 'U'
0x8B2566: addss   xmm2, xmm0
0x8B256A: movaps  xmm3, xmm0
0x8B256D: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8B2571: movaps  xmm0, xmm3
0x8B2574: addss   xmm0, xmm2
0x8B2578: movaps  [esp+70h+var_40], xmm0
0x8B257D: rsqrtss xmm2, xmm0
0x8B2581: movss   dword ptr [esp+70h+var_40], xmm2
0x8B2587: movaps  xmm2, [esp+70h+var_40]
0x8B258C: mulss   xmm0, xmm2
0x8B2590: mulss   xmm0, xmm2
0x8B2594: movaps  xmm3, xmm0
0x8B2597: movaps  xmm0, [esp+70h+var_30]
0x8B259C: subss   xmm0, xmm3
0x8B25A0: movaps  xmm3, xmm0
0x8B25A3: movaps  xmm0, [esp+70h+var_20]
0x8B25A8: mulss   xmm0, xmm2
0x8B25AC: mulss   xmm0, xmm3
0x8B25B0: movaps  xmm2, xmm0
0x8B25B3: shufps  xmm2, xmm0, 0
0x8B25B7: mulps   xmm2, xmm1
0x8B25BA: movaps  xmmword ptr [esi+40h], xmm2
0x8B25BE: movaps  xmm0, xmmword ptr [esi+40h]
0x8B25C2: movaps  xmm1, xmmword ptr [edi]
0x8B25C5: movaps  xmm2, xmm0
0x8B25C8: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8B25CC: movaps  xmm3, xmm1
0x8B25CF: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8B25D3: mulps   xmm3, xmm2
0x8B25D6: movaps  xmm2, xmm0
0x8B25D9: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8B25DD: lea     eax, [esi+50h]
0x8B25E0: movaps  xmm0, xmm1
0x8B25E3: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8B25E7: push    eax
0x8B25E8: mulps   xmm0, xmm2
0x8B25EB: subps   xmm0, xmm3
0x8B25EE: push    ebx
0x8B25EF: movaps  xmmword ptr [eax], xmm0
0x8B25F2: call    sub_88FE00
0x8B25F7: mov     ecx, [ebp+arg_4]
0x8B25FA: lea     eax, [esp+70h+var_10]
0x8B25FE: push    eax
0x8B25FF: push    ecx
0x8B2600: lea     ecx, [esi+80h]
0x8B2606: call    sub_88FD90
0x8B260B: mov     edx, [esi]
0x8B260D: lea     eax, [esp+70h+var_5D]
0x8B2611: push    eax
0x8B2612: mov     ecx, esi
0x8B2614: call    dword ptr [edx+8]
0x8B2617: pop     edi
0x8B2618: pop     esi
0x8B2619: pop     ebx
0x8B261A: mov     esp, ebp
0x8B261C: pop     ebp
0x8B261D: retn    10h
