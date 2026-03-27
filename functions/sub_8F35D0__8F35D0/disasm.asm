0x8F35D0: push    ebp
0x8F35D1: mov     ebp, esp
0x8F35D3: and     esp, 0FFFFFFF0h
0x8F35D6: sub     esp, 24h
0x8F35D9: mov     ecx, [ebp+arg_0]
0x8F35DC: mov     edx, [ebp+arg_8]
0x8F35DF: movaps  xmm0, xmmword ptr [ecx]
0x8F35E2: movaps  xmm1, xmmword ptr [edx]
0x8F35E5: subps   xmm1, xmm0
0x8F35E8: push    ebx
0x8F35E9: push    esi
0x8F35EA: mov     esi, [ebp+arg_C]
0x8F35ED: movaps  xmm2, xmmword ptr [esi]
0x8F35F0: push    edi
0x8F35F1: mov     edi, [ebp+arg_4]
0x8F35F4: movaps  xmm3, xmmword ptr [edi]
0x8F35F7: movaps  xmm0, xmm3
0x8F35FA: mulps   xmm0, xmm2
0x8F35FD: movaps  xmm4, xmm0
0x8F3600: shufps  xmm4, xmm0, 55h ; 'U'
0x8F3604: addss   xmm4, xmm0
0x8F3608: movaps  xmm5, xmm0
0x8F360B: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F360F: addss   xmm5, xmm4
0x8F3613: movaps  xmm0, xmm3
0x8F3616: mulps   xmm0, xmm1
0x8F3619: movaps  xmm4, xmm0
0x8F361C: shufps  xmm4, xmm0, 55h ; 'U'
0x8F3620: addss   xmm4, xmm0
0x8F3624: lea     eax, [esp+30h+var_18]
0x8F3628: movss   dword ptr [eax], xmm5
0x8F362C: movaps  xmm5, xmm0
0x8F362F: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F3633: movaps  xmm0, xmm2
0x8F3636: mulps   xmm0, xmm1
0x8F3639: movaps  xmm1, xmm0
0x8F363C: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3640: addss   xmm1, xmm0
0x8F3644: addss   xmm5, xmm4
0x8F3648: movaps  xmm4, xmm0
0x8F364B: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F364F: addss   xmm4, xmm1
0x8F3653: movaps  xmm0, xmm3
0x8F3656: mulps   xmm0, xmm3
0x8F3659: lea     eax, [esp+30h+var_4]
0x8F365D: movss   dword ptr [eax], xmm5
0x8F3661: movaps  xmm1, xmm0
0x8F3664: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3668: addss   xmm1, xmm0
0x8F366C: movaps  xmm3, xmm0
0x8F366F: lea     eax, [esp+30h+var_8]
0x8F3673: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F3677: movaps  xmm0, xmm2
0x8F367A: mulps   xmm0, xmm2
0x8F367D: addss   xmm3, xmm1
0x8F3681: movss   dword ptr [eax], xmm4
0x8F3685: lea     eax, [esp+30h+var_C]
0x8F3689: movss   dword ptr [eax], xmm3
0x8F368D: movaps  xmm1, xmm0
0x8F3690: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3694: movaps  xmm2, xmm0
0x8F3697: addss   xmm1, xmm0
0x8F369B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F369F: lea     eax, [esp+30h+var_14]
0x8F36A3: addss   xmm2, xmm1
0x8F36A7: movss   dword ptr [eax], xmm2
0x8F36AB: fld     [esp+30h+var_14]
0x8F36AF: fmul    [esp+30h+var_C]
0x8F36B3: fld     [esp+30h+var_18]
0x8F36B7: fmul    [esp+30h+var_18]
0x8F36BB: fst     [esp+30h+var_10]
0x8F36BF: fsubr   st, st(1)
0x8F36C1: fst     [esp+30h+var_C]
0x8F36C5: fabs
0x8F36C7: fxch    st(1)
0x8F36C9: fabs
0x8F36CB: fxch    st(1)
0x8F36CD: fxch    st(1)
0x8F36CF: fadd    [esp+30h+var_10]
0x8F36D3: fmul    dword ptr ds:0A99EFCh
0x8F36D9: fcompp
0x8F36DB: fnstsw  ax
0x8F36DD: test    ah, 5
0x8F36E0: mov     eax, [ebp+arg_14]
0x8F36E3: jp      short loc_8F36FF
0x8F36E5: fld     [esp+30h+var_14]
0x8F36E9: fmul    [esp+30h+var_4]
0x8F36ED: fld     [esp+30h+var_8]
0x8F36F1: fmul    [esp+30h+var_18]
0x8F36F5: fsubp   st(1), st
0x8F36F7: fdiv    [esp+30h+var_C]
0x8F36FB: fstp    dword ptr [eax]
0x8F36FD: jmp     short loc_8F3705
0x8F36FF: mov     dword ptr [eax], 0
0x8F3705: fld     [esp+30h+var_18]
0x8F3709: mov     ebx, [ebp+arg_18]
0x8F370C: fmul    dword ptr [eax]
0x8F370E: fsub    [esp+30h+var_8]
0x8F3712: fdiv    [esp+30h+var_14]
0x8F3716: fld     st
0x8F3718: fstp    dword ptr [ebx]
0x8F371A: mov     eax, [eax]
0x8F371C: movaps  xmm1, xmmword ptr [edi]
0x8F371F: mov     [esp+30h+var_4], eax
0x8F3723: movss   xmm0, [esp+30h+var_4]
0x8F3729: fstp    [esp+30h+var_4]
0x8F372D: movaps  xmm2, xmm0
0x8F3730: shufps  xmm2, xmm0, 0
0x8F3734: movss   xmm0, [esp+30h+var_4]
0x8F373A: mulps   xmm2, xmm1
0x8F373D: movaps  xmm1, xmmword ptr [ecx]
0x8F3740: mov     ecx, [ebp+arg_1C]
0x8F3743: addps   xmm1, xmm2
0x8F3746: movaps  xmm2, xmmword ptr [esi]
0x8F3749: movaps  xmm3, xmm0
0x8F374C: shufps  xmm3, xmm0, 0
0x8F3750: mulps   xmm3, xmm2
0x8F3753: movaps  xmm2, xmmword ptr [edx]
0x8F3756: mov     edx, [ebp+arg_20]
0x8F3759: addps   xmm2, xmm3
0x8F375C: movaps  xmm0, xmm1
0x8F375F: movaps  xmmword ptr [ecx], xmm1
0x8F3762: mov     ecx, [ebp+arg_10]
0x8F3765: subps   xmm0, xmm2
0x8F3768: mulps   xmm0, xmm0
0x8F376B: movaps  xmmword ptr [edx], xmm2
0x8F376E: movaps  xmm1, xmm0
0x8F3771: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3775: movaps  xmm2, xmm0
0x8F3778: addss   xmm1, xmm0
0x8F377C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F3780: lea     eax, [esp+30h+var_4]
0x8F3784: pop     edi
0x8F3785: addss   xmm2, xmm1
0x8F3789: movss   dword ptr [eax], xmm2
0x8F378D: fld     [esp+2Ch+var_4]
0x8F3791: pop     esi
0x8F3792: fstp    dword ptr [ecx]
0x8F3794: pop     ebx
0x8F3795: mov     esp, ebp
0x8F3797: pop     ebp
0x8F3798: retn
