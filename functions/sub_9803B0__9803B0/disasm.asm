0x9803B0: sub     esp, 24h
0x9803B3: fld     dword ptr ds:0A3B888h
0x9803B9: mov     eax, [esp+24h+arg_0]
0x9803BD: fstp    [esp+24h+var_20]
0x9803C1: push    esi
0x9803C2: fld     dword ptr ds:0A32048h
0x9803C8: mov     esi, [esp+28h+arg_4]
0x9803CC: fstp    [esp+28h+var_24]
0x9803D0: xor     edx, edx
0x9803D2: fld     dword ptr [ecx+6Ch]
0x9803D5: add     ecx, 50h ; 'P'
0x9803D8: fabs
0x9803DA: fstp    [esp+28h+var_1C]
0x9803DE: fld     [esp+28h+var_1C]
0x9803E2: fstp    [esp+28h+var_C]
0x9803E6: fld     dword ptr [ecx+20h]
0x9803E9: fabs
0x9803EB: fstp    [esp+28h+var_1C]
0x9803EF: fld     [esp+28h+var_1C]
0x9803F3: fstp    [esp+28h+var_8]
0x9803F7: fld     dword ptr [ecx+24h]
0x9803FA: fabs
0x9803FC: fstp    [esp+28h+var_1C]
0x980400: fld     [esp+28h+var_1C]
0x980404: fstp    [esp+28h+var_4]
0x980408: fld     dword ptr [ecx-14h]
0x98040B: fsub    dword ptr [eax]
0x98040D: fstp    [esp+28h+var_18]
0x980411: fld     dword ptr [ecx-10h]
0x980414: fsub    dword ptr [eax+4]
0x980417: fstp    [esp+28h+var_14]
0x98041B: fld     dword ptr [ecx-0Ch]
0x98041E: fsub    dword ptr [eax+8]
0x980421: fstp    [esp+28h+var_10]
0x980425: fld     [esp+28h+var_10]
0x980429: fld     [esp+28h+var_14]
0x98042D: fld1
0x98042F: fld     [esp+28h+var_24]
0x980433: fld     st(2)
0x980435: fmul    dword ptr [ecx-4]
0x980438: fld     [esp+28h+var_18]
0x98043C: fmul    dword ptr [ecx-8]
0x98043F: faddp   st(1), st
0x980441: fld     st(4)
0x980443: fmul    dword ptr [ecx]
0x980445: faddp   st(1), st
0x980447: fstp    [esp+28h+arg_0]
0x98044B: fld     dword ptr [esi]
0x98044D: fmul    dword ptr [ecx-8]
0x980450: fld     dword ptr [ecx-4]
0x980453: fmul    dword ptr [esi+4]
0x980456: faddp   st(1), st
0x980458: fld     dword ptr [esi+8]
0x98045B: fmul    dword ptr [ecx]
0x98045D: faddp   st(1), st
0x98045F: fstp    [esp+28h+arg_4]
0x980463: fld     [esp+28h+arg_4]
0x980467: fld     st
0x980469: fabs
0x98046B: fstp    [esp+28h+arg_4]
0x98046F: fld     [esp+28h+arg_4]
0x980473: fcomp   qword ptr ds:0A7C398h
0x980479: fnstsw  ax
0x98047B: test    ah, 41h
0x98047E: jnz     loc_980530
0x980484: fdivr   st, st(2)
0x980486: fstp    [esp+28h+arg_4]
0x98048A: fld     [esp+edx*4+28h+var_C]
0x98048E: fld     [esp+28h+arg_0]
0x980492: fld     st
0x980494: faddp   st(2), st
0x980496: fld     [esp+28h+arg_4]
0x98049A: fld     st
0x98049C: fmulp   st(3), st
0x98049E: fxch    st(2)
0x9804A0: fstp    [esp+28h+arg_0]
0x9804A4: fsub    [esp+edx*4+28h+var_C]
0x9804A8: fmulp   st(1), st
0x9804AA: fstp    [esp+28h+arg_4]
0x9804AE: fld     [esp+28h+arg_0]
0x9804B2: fld     [esp+28h+arg_4]
0x9804B6: fcom    st(1)
0x9804B8: fnstsw  ax
0x9804BA: test    ah, 5
0x9804BD: jp      short loc_9804D9
0x9804BF: fxch    st(1)
0x9804C1: fstp    [esp+28h+arg_4]
0x9804C5: fstp    [esp+28h+arg_0]
0x9804C9: fld     [esp+28h+arg_4]
0x9804CD: fstp    [esp+28h+arg_4]
0x9804D1: fld     [esp+28h+arg_0]
0x9804D5: fld     [esp+28h+arg_4]
0x9804D9: fld     [esp+28h+var_20]
0x9804DD: fcomp   st(2)
0x9804DF: fnstsw  ax
0x9804E1: test    ah, 5
0x9804E4: jp      short loc_9804EE
0x9804E6: fxch    st(1)
0x9804E8: fstp    [esp+28h+var_20]
0x9804EC: jmp     short loc_9804F0
0x9804EE: fstp    st(1)
0x9804F0: fcom    st(1)
0x9804F2: fnstsw  ax
0x9804F4: test    ah, 5
0x9804F7: jp      short loc_980505
0x9804F9: fstp    st(1)
0x9804FB: fstp    [esp+28h+var_24]
0x9804FF: fld     [esp+28h+var_24]
0x980503: jmp     short loc_980507
0x980505: fstp    st
0x980507: fld     [esp+28h+var_20]
0x98050B: fcomp   st(1)
0x98050D: fnstsw  ax
0x98050F: test    ah, 41h
0x980512: jz      short loc_98051F
0x980514: fldz
0x980516: fcomp   st(1)
0x980518: fnstsw  ax
0x98051A: test    ah, 41h
0x98051D: jnz     short loc_98054D
0x98051F: fstp    st
0x980521: xor     eax, eax
0x980523: fstp    st
0x980525: pop     esi
0x980526: fstp    st(1)
0x980528: fstp    st
0x98052A: add     esp, 24h
0x98052D: retn    8
0x980530: fstp    st
0x980532: fld     [esp+28h+arg_0]
0x980536: fabs
0x980538: fstp    [esp+28h+arg_0]
0x98053C: fld     [esp+28h+arg_0]
0x980540: fld     [esp+edx*4+28h+var_C]
0x980544: fcompp
0x980546: fnstsw  ax
0x980548: test    ah, 5
0x98054B: jnp     short loc_98051F
0x98054D: add     edx, 1
0x980550: add     ecx, 0Ch
0x980553: cmp     edx, 3
0x980556: jl      loc_980433
0x98055C: fstp    st
0x98055E: mov     eax, 1
0x980563: fstp    st
0x980565: pop     esi
0x980566: fstp    st(1)
0x980568: fstp    st
0x98056A: add     esp, 24h
0x98056D: retn    8
