0x5464AE: fld     [esp+arg_4C]
0x5464B2: fmul    [esp+arg_1C]
0x5464B6: fadd    dword ptr [esp+0]
0x5464B9: fld     [esp+arg_8]
0x5464BD: fld     st
0x5464BF: fmulp   st(2), st
0x5464C1: fld     [esp+arg_0]
0x5464C5: fmulp   st(2), st
0x5464C7: fld     dword ptr ds:0B36740h
0x5464CD: fmulp   st(2), st
0x5464CF: fxch    st(1)
0x5464D1: fstp    [esp+arg_1C]; int
0x5464D5: fxch    st(1)
0x5464D7: fcom    [esp+arg_1C]
0x5464DB: fnstsw  ax
0x5464DD: test    ah, 41h
0x5464E0: jnz     short Calc_DetectionLevel___CalcLightFactor
0x5464E2: fst     [esp+arg_1C]
