0x547E70: fld     dword ptr ds:0B37458h
0x547E76: fld     dword ptr ds:0B37450h
0x547E7C: fld     st
0x547E7E: fsubp   st(2), st
0x547E80: fld     [esp+arg_0]
0x547E84: fmul    qword ptr ds:0A3B150h
0x547E8A: fstp    [esp+arg_0]
0x547E8E: fld     [esp+arg_0]
0x547E92: fmulp   st(2), st
0x547E94: faddp   st(1), st
0x547E96: fstp    [esp+arg_0]
0x547E9A: fld     [esp+arg_0]
0x547E9E: fld     dword ptr ds:0B373D0h
0x547EA4: fmul    [esp+arg_4]
0x547EA8: fld1
0x547EAA: fsubrp  st(1), st
0x547EAC: fmulp   st(1), st
0x547EAE: fstp    [esp+arg_0]
0x547EB2: fldz
0x547EB4: fld     [esp+arg_0]
0x547EB8: fcom    st(1)
0x547EBA: fnstsw  ax
0x547EBC: test    ah, 5
0x547EBF: jp      short loc_547EC4
0x547EC1: fstp    st
0x547EC3: retn
0x547EC4: fstp    st(1)
0x547EC6: retn
