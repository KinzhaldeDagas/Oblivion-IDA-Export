0x8B36D0: mov     ecx, [esp+arg_0]
0x8B36D4: fld     dword ptr [ecx+8]
0x8B36D7: mov     eax, [esp+arg_8]
0x8B36DB: fld     dword ptr [ecx+4]
0x8B36DE: fld     st
0x8B36E0: fmul    st, st(1)
0x8B36E2: fld     st(2)
0x8B36E4: fmul    st, st(3)
0x8B36E6: faddp   st(1), st
0x8B36E8: fmul    [esp+arg_4]
0x8B36EC: fsubr   dword ptr [eax]
0x8B36EE: fstp    dword ptr [eax]
0x8B36F0: fstp    st
0x8B36F2: fstp    st
0x8B36F4: fld     dword ptr [ecx+8]
0x8B36F7: fld     dword ptr [ecx]
0x8B36F9: fld     st
0x8B36FB: fmul    st, st(1)
0x8B36FD: fld     st(2)
0x8B36FF: fmul    st, st(3)
0x8B3701: faddp   st(1), st
0x8B3703: fmul    [esp+arg_4]
0x8B3707: fsubr   dword ptr [eax+14h]
0x8B370A: fstp    dword ptr [eax+14h]
0x8B370D: fstp    st
0x8B370F: fstp    st
0x8B3711: fld     dword ptr [ecx+4]
0x8B3714: fld     dword ptr [ecx]
0x8B3716: fld     st
0x8B3718: fmul    st, st(1)
0x8B371A: fld     st(2)
0x8B371C: fmul    st, st(3)
0x8B371E: faddp   st(1), st
0x8B3720: fmul    [esp+arg_4]
0x8B3724: fsubr   dword ptr [eax+28h]
0x8B3727: fstp    dword ptr [eax+28h]
0x8B372A: fstp    st
0x8B372C: fstp    st
0x8B372E: fld     [esp+arg_4]
0x8B3732: fmul    dword ptr [ecx]
0x8B3734: fmul    dword ptr [ecx+4]
0x8B3737: fadd    dword ptr [eax+4]
0x8B373A: fst     dword ptr [eax+4]
0x8B373D: fstp    dword ptr [eax+10h]
0x8B3740: fld     [esp+arg_4]
0x8B3744: fmul    dword ptr [ecx+8]
0x8B3747: fmul    dword ptr [ecx+4]
0x8B374A: fadd    dword ptr [eax+18h]
0x8B374D: fst     dword ptr [eax+18h]
0x8B3750: fstp    dword ptr [eax+24h]
0x8B3753: fld     [esp+arg_4]
0x8B3757: fmul    dword ptr [ecx]
0x8B3759: fmul    dword ptr [ecx+8]
0x8B375C: fadd    dword ptr [eax+20h]
0x8B375F: fst     dword ptr [eax+20h]
0x8B3762: fstp    dword ptr [eax+8]
0x8B3765: retn
