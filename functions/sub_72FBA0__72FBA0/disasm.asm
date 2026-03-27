0x72FBA0: fld     [esp+arg_4]
0x72FBA4: fmul    qword ptr ds:0A80548h
0x72FBAA: fld1
0x72FBAC: fld     st
0x72FBAE: fsubrp  st(2), st
0x72FBB0: fxch    st(1)
0x72FBB2: fstp    [esp+arg_4]
0x72FBB6: fld     [esp+arg_4]
0x72FBBA: fmul    st, st
0x72FBBC: fstp    [esp+arg_4]
0x72FBC0: fld     [esp+arg_4]
0x72FBC4: fmul    qword ptr ds:0A80540h
0x72FBCA: fstp    [esp+arg_4]
0x72FBCE: fld     [esp+arg_4]
0x72FBD2: fld     st
0x72FBD4: fld     [esp+arg_0]
0x72FBD8: fld     st
0x72FBDA: fmulp   st(2), st
0x72FBDC: fld     st
0x72FBDE: fadd    st, st(1)
0x72FBE0: fsub    qword ptr ds:0A30E48h
0x72FBE6: fmulp   st(2), st
0x72FBE8: fxch    st(1)
0x72FBEA: faddp   st(3), st
0x72FBEC: fxch    st(2)
0x72FBEE: faddp   st(1), st
0x72FBF0: fmulp   st(1), st
0x72FBF2: fstp    [esp+arg_4]
0x72FBF6: fld     [esp+arg_4]
0x72FBFA: retn
