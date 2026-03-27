0x548AF1: fxch    st(2)
0x548AF3: fdiv    st, st(1)
0x548AF5: fstp    dword ptr [esp+0]
0x548AF8: fdivp   st(1), st
0x548AFA: fstp    [esp+arg_10]
0x548AFE: fld     dword ptr [esp+0]
0x548B01: fld     st
0x548B03: fld1
0x548B05: fld     st
0x548B07: fsubrp  st(2), st
0x548B09: fxch    st(1)
0x548B0B: fmul    [esp+arg_10]
0x548B0F: fxch    st(1)
0x548B11: fxch    st(2)
0x548B13: faddp   st(1), st
0x548B15: fsubp   st(1), st
0x548B17: fstp    [esp+arg_10]
0x548B1B: fld     [esp+arg_10]
0x548B1F: pop     ecx
0x548B20: retn
