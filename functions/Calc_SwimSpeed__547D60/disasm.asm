0x547D60: mov     eax, [esp+arg_C]
0x547D64: fld     [esp+arg_4]
0x547D68: mov     ecx, [esp+arg_8]
0x547D6C: push    eax
0x547D6D: push    ecx
0x547D6E: push    0
0x547D70: sub     esp, 8
0x547D73: fstp    [esp+14h+var_10]
0x547D77: fld     [esp+14h+arg_0]
0x547D7B: fstp    [esp+14h+var_14]
0x547D7E: call    Calc_WalkSpeed
0x547D83: fld     [esp+14h+arg_14]
0x547D87: add     esp, 14h
0x547D8A: fdiv    qword ptr ds:0A309F0h
0x547D90: fadd    qword ptr ds:0A2F928h
0x547D96: fmulp   st(1), st
0x547D98: fstp    [esp+arg_14]
0x547D9C: fld     [esp+arg_14]
0x547DA0: fld     dword ptr ds:0B37438h
0x547DA6: fmul    [esp+arg_10]
0x547DAA: fmul    qword ptr ds:0A3B150h
0x547DB0: fadd    dword ptr ds:0B37430h
0x547DB6: fmulp   st(1), st
0x547DB8: fstp    [esp+arg_14]
0x547DBC: fld     [esp+arg_14]
0x547DC0: retn
