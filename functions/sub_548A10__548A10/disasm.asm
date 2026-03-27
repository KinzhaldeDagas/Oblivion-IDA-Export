0x548A10: fld     [esp+arg_0]
0x548A14: fld     dword ptr ds:0B37DA0h
0x548A1A: fcom    st(1)
0x548A1C: fnstsw  ax
0x548A1E: test    ah, 5
0x548A21: jp      short loc_548A2A
0x548A23: fstp    st(1)
0x548A25: fstp    st
0x548A27: fldz
0x548A29: retn
0x548A2A: fdivp   st(1), st
0x548A2C: fld1
0x548A2E: fsubrp  st(1), st
0x548A30: fstp    [esp+arg_0]
0x548A34: fld     dword ptr ds:0B37DB0h
0x548A3A: fld     dword ptr ds:0B37DA8h
0x548A40: fld     st
0x548A42: fsubp   st(2), st
0x548A44: fxch    st(1)
0x548A46: fmul    [esp+arg_0]
0x548A4A: faddp   st(1), st
0x548A4C: fstp    [esp+arg_0]
0x548A50: fld     [esp+arg_0]
0x548A54: retn
