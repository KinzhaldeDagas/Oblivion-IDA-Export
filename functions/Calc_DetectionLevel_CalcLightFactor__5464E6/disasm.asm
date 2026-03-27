0x5464E6: fild    [esp+arg_24]
0x5464EA: fadd    dword ptr ds:0B36CB8h
0x5464F0: fld     [esp+arg_4]
0x5464F4: fmul    st, st(3)
0x5464F6: fmulp   st(1), st
0x5464F8: fild    [esp+arg_20]
0x5464FC: fld     qword ptr ds:0A309F0h
0x546502: fld     st
0x546504: fsubrp  st(2), st
0x546506: fxch    st(2)
0x546508: fmulp   st(1), st
0x54650A: fdiv    st, st(1)
0x54650C: fild    [esp+arg_28]
0x546510: fsubr   st, st(2)
0x546512: fdivrp  st(2), st
0x546514: fmulp   st(1), st
0x546516: fmul    dword ptr ds:0B36738h
0x54651C: fstp    [esp+arg_4C]
0x546520: fcom    [esp+arg_4C]
0x546524: fnstsw  ax
0x546526: test    ah, 41h
0x546529: jnz     short Calc_DetectionLevel___CalcSneakFactor
0x54652B: fst     [esp+arg_4C]
