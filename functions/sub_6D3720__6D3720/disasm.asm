0x6D3720: push    ecx
0x6D3721: fld     [esp+4+arg_C]
0x6D3725: mov     eax, [esp+4+arg_8]
0x6D3729: fsub    [esp+4+arg_0]
0x6D372D: mov     ecx, [esp+4+arg_14]
0x6D3731: mov     edx, [esp+4+arg_20]
0x6D3735: push    esi
0x6D3736: fstp    [esp+8+var_4]
0x6D373A: mov     esi, [esp+8+arg_24]
0x6D373E: fld     [esp+8+arg_10]
0x6D3742: fld     st
0x6D3744: fld     [esp+8+arg_4]
0x6D3748: fld     st
0x6D374A: fsubp   st(2), st
0x6D374C: fxch    st(1)
0x6D374E: fstp    [esp+8+arg_0]
0x6D3752: fld     [esp+8+arg_18]
0x6D3756: fld     st
0x6D3758: fsubrp  st(2), st
0x6D375A: fxch    st(1)
0x6D375C: fstp    [esp+8+arg_C]
0x6D3760: fsubp   st(1), st
0x6D3762: fstp    [esp+8+arg_10]
0x6D3766: fld     [esp+8+arg_C]
0x6D376A: fld     st
0x6D376C: fld     [esp+8+arg_0]
0x6D3770: fld     st
0x6D3772: fdivp   st(2), st
0x6D3774: fxch    st(1)
0x6D3776: fst     [esp+8+arg_C]
0x6D377A: fld     [esp+8+var_4]
0x6D377E: fld     st
0x6D3780: fld     qword ptr ds:0A3D0C0h
0x6D3786: fmul    st(1), st
0x6D3788: fxch    st(1)
0x6D378A: fsubr   dword ptr [eax]
0x6D378C: fxch    st(1)
0x6D378E: fxch    st(2)
0x6D3790: fxch    st(1)
0x6D3792: fadd    dword ptr [ecx]
0x6D3794: fstp    [esp+8+arg_0]
0x6D3798: fld     [esp+8+arg_0]
0x6D379C: fld     qword ptr ds:0A30E48h
0x6D37A2: fmul    st(1), st
0x6D37A4: fld     [esp+8+arg_C]
0x6D37A8: fmulp   st(2), st
0x6D37AA: fmulp   st(2), st
0x6D37AC: fld     dword ptr [eax]
0x6D37AE: fmul    st, st(3)
0x6D37B0: fsubp   st(2), st
0x6D37B2: fld     dword ptr [ecx]
0x6D37B4: fsubp   st(2), st
0x6D37B6: fxch    st(1)
0x6D37B8: fstp    [esp+8+arg_0]
0x6D37BC: fld     [esp+8+arg_0]
0x6D37C0: fmulp   st(2), st
0x6D37C2: faddp   st(1), st
0x6D37C4: fmul    [esp+8+arg_C]
0x6D37C8: fadd    dword ptr [eax]
0x6D37CA: fdiv    st, st(2)
0x6D37CC: fstp    [esp+8+arg_C]
0x6D37D0: fld     [esp+8+arg_C]
0x6D37D4: fst     dword ptr [edx]
0x6D37D6: fld     [esp+8+arg_10]
0x6D37DA: fld     st
0x6D37DC: fmulp   st(2), st
0x6D37DE: fxch    st(1)
0x6D37E0: fstp    dword ptr [esi]
0x6D37E2: pop     esi
0x6D37E3: fld     dword ptr [edx]
0x6D37E5: fmulp   st(4), st
0x6D37E7: fxch    st(3)
0x6D37E9: fstp    dword ptr [edx]
0x6D37EB: fmul    dword ptr [eax]
0x6D37ED: fstp    dword ptr [eax]
0x6D37EF: fdivp   st(1), st
0x6D37F1: fmul    dword ptr [ecx]
0x6D37F3: fstp    dword ptr [ecx]
0x6D37F5: pop     ecx
0x6D37F6: retn
