0x8B3770: mov     ecx, [esp+arg_0]
0x8B3774: fld     dword ptr [ecx+8]
0x8B3777: mov     eax, [esp+arg_8]
0x8B377B: fld     dword ptr [ecx+4]
0x8B377E: fld     st
0x8B3780: fmul    st, st(1)
0x8B3782: fld     st(2)
0x8B3784: fmul    st, st(3)
0x8B3786: faddp   st(1), st
0x8B3788: fmul    [esp+arg_4]
0x8B378C: fadd    dword ptr [eax]
0x8B378E: fstp    dword ptr [eax]
0x8B3790: fstp    st
0x8B3792: fstp    st
0x8B3794: fld     dword ptr [ecx+8]
0x8B3797: fld     dword ptr [ecx]
0x8B3799: fld     st
0x8B379B: fmul    st, st(1)
0x8B379D: fld     st(2)
0x8B379F: fmul    st, st(3)
0x8B37A1: faddp   st(1), st
0x8B37A3: fmul    [esp+arg_4]
0x8B37A7: fadd    dword ptr [eax+14h]
0x8B37AA: fstp    dword ptr [eax+14h]
0x8B37AD: fstp    st
0x8B37AF: fstp    st
0x8B37B1: fld     dword ptr [ecx+4]
0x8B37B4: fld     dword ptr [ecx]
0x8B37B6: fld     st
0x8B37B8: fmul    st, st(1)
0x8B37BA: fld     st(2)
0x8B37BC: fmul    st, st(3)
0x8B37BE: faddp   st(1), st
0x8B37C0: fmul    [esp+arg_4]
0x8B37C4: fadd    dword ptr [eax+28h]
0x8B37C7: fstp    dword ptr [eax+28h]
0x8B37CA: fstp    st
0x8B37CC: fstp    st
0x8B37CE: fld     [esp+arg_4]
0x8B37D2: fmul    dword ptr [ecx]
0x8B37D4: fmul    dword ptr [ecx+4]
0x8B37D7: fsubr   dword ptr [eax+4]
0x8B37DA: fst     dword ptr [eax+4]
0x8B37DD: fstp    dword ptr [eax+10h]
0x8B37E0: fld     [esp+arg_4]
0x8B37E4: fmul    dword ptr [ecx+8]
0x8B37E7: fmul    dword ptr [ecx+4]
0x8B37EA: fsubr   dword ptr [eax+18h]
0x8B37ED: fst     dword ptr [eax+18h]
0x8B37F0: fstp    dword ptr [eax+24h]
0x8B37F3: fld     [esp+arg_4]
0x8B37F7: fmul    dword ptr [ecx]
0x8B37F9: fmul    dword ptr [ecx+8]
0x8B37FC: fsubr   dword ptr [eax+20h]
0x8B37FF: fst     dword ptr [eax+20h]
0x8B3802: fstp    dword ptr [eax+8]
0x8B3805: retn
