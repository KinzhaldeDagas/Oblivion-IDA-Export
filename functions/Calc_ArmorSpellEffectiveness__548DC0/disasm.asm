0x548DC0: push    ecx
0x548DC1: mov     eax, [esp+4+arg_C]
0x548DC5: mov     ecx, [esp+4+arg_4]
0x548DC9: add     ecx, eax
0x548DCB: mov     [esp+4+var_4], ecx
0x548DCE: fild    [esp+4+var_4]
0x548DD1: fdiv    qword ptr ds:0A309F0h
0x548DD7: fstp    [esp+4+var_4]
0x548DDA: fld     [esp+4+var_4]
0x548DDD: fcomp   dword ptr ds:0A2FAA8h
0x548DE3: fnstsw  ax
0x548DE5: test    ah, 41h
0x548DE8: jp      short loc_548DEE
0x548DEA: fld1
0x548DEC: pop     ecx
0x548DED: retn
0x548DEE: push    2
0x548DF0: call    ActorValue_GetMasterySkill
0x548DF5: fldz
0x548DF7: mov     ecx, [esp+8+arg_0]
0x548DFB: mov     edx, eax
0x548DFD: add     esp, 4
0x548E00: cmp     ecx, edx
0x548E02: jl      short loc_548E0E
0x548E04: fld     st
0x548E06: fld     qword ptr ds:0A309F0h
0x548E0C: jmp     short loc_548E39
0x548E0E: cmp     ecx, 64h ; 'd'
0x548E11: jl      short loc_548E18
0x548E13: mov     ecx, 64h ; 'd'
0x548E18: mov     eax, 32h ; '2'
0x548E1D: sub     eax, ecx
0x548E1F: add     eax, eax
0x548E21: mov     [esp+4+var_4], eax
0x548E24: fild    [esp+4+var_4]
0x548E27: fild    [esp+4+arg_4]
0x548E2B: fld     qword ptr ds:0A309F0h
0x548E31: fdiv    st(1), st
0x548E33: fxch    st(2)
0x548E35: fmulp   st(1), st
0x548E37: fxch    st(1)
0x548E39: mov     eax, [esp+4+arg_8]
0x548E3D: fxch    st(1)
0x548E3F: cmp     eax, edx
0x548E41: fstp    [esp+4+var_4]
0x548E44: jge     short loc_548E6D
0x548E46: cmp     eax, 64h ; 'd'
0x548E49: fstp    st(1)
0x548E4B: jl      short loc_548E52
0x548E4D: mov     eax, 64h ; 'd'
0x548E52: mov     ecx, 32h ; '2'
0x548E57: sub     ecx, eax
0x548E59: add     ecx, ecx
0x548E5B: mov     [esp+4+arg_4], ecx
0x548E5F: fild    [esp+4+arg_4]
0x548E63: fild    [esp+4+arg_C]
0x548E67: fdiv    st, st(2)
0x548E69: fmulp   st(1), st
0x548E6B: fxch    st(1)
0x548E6D: fxch    st(1)
0x548E6F: fstp    [esp+4+arg_4]
0x548E73: fld     [esp+4+arg_4]
0x548E77: fadd    [esp+4+var_4]
0x548E7A: fld     dword ptr ds:0B37F58h
0x548E80: fld     dword ptr ds:0B37F50h
0x548E86: fld     st
0x548E88: fsubp   st(2), st
0x548E8A: fxch    st(2)
0x548E8C: fmulp   st(1), st
0x548E8E: fdivrp  st(2), st
0x548E90: fld1
0x548E92: fsubrp  st(2), st
0x548E94: fsubp   st(1), st
0x548E96: fstp    [esp+4+arg_4]
0x548E9A: fld     [esp+4+arg_4]
0x548E9E: pop     ecx
0x548E9F: retn
