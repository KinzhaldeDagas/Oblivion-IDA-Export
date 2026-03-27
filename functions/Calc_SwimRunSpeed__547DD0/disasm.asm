0x547DD0: push    ecx
0x547DD1: mov     eax, [esp+4+arg_C]
0x547DD5: fld     [esp+4+arg_4]
0x547DD9: mov     ecx, [esp+4+arg_8]
0x547DDD: push    eax
0x547DDE: push    ecx
0x547DDF: push    0
0x547DE1: sub     esp, 8
0x547DE4: fstp    [esp+18h+var_14]
0x547DE8: fld     [esp+18h+arg_0]
0x547DEC: fstp    [esp+18h+var_18]
0x547DEF: call    Calc_WalkSpeed
0x547DF4: fadd    qword ptr ds:0A2FC68h
0x547DFA: fstp    [esp+18h+var_4]
0x547DFE: fld     [esp+18h+var_4]
0x547E02: fld     dword ptr ds:0B373E0h
0x547E08: fld     [esp+18h+arg_10]
0x547E0C: fld     st
0x547E0E: fmulp   st(2), st
0x547E10: fld     qword ptr ds:0A3B150h
0x547E16: fmul    st(2), st
0x547E18: fld     dword ptr ds:0B373E8h
0x547E1E: faddp   st(3), st
0x547E20: fxch    st(3)
0x547E22: fmulp   st(2), st
0x547E24: fxch    st(1)
0x547E26: fstp    [esp+18h+arg_10]
0x547E2A: fld     [esp+18h+arg_10]
0x547E2E: fld     [esp+18h+arg_14]
0x547E32: fdiv    qword ptr ds:0A309F0h
0x547E38: fadd    qword ptr ds:0A2F928h
0x547E3E: fmulp   st(1), st
0x547E40: fstp    [esp+18h+arg_10]
0x547E44: fld     dword ptr ds:0B37448h
0x547E4A: fmulp   st(1), st
0x547E4C: fmulp   st(1), st
0x547E4E: fld     dword ptr ds:0B37440h
0x547E54: faddp   st(1), st
0x547E56: fmul    [esp+18h+arg_10]
0x547E5A: fstp    [esp+18h+arg_10]
0x547E5E: fld     [esp+18h+arg_10]
0x547E62: add     esp, 18h
0x547E65: retn
