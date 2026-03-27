0xA000D0: push    ecx
0xA000D1: fld     ds:dbl_A64218
0xA000D7: call    __CIcos
0xA000DC: fstp    [esp+4+var_4]
0xA000DF: fld     [esp+4+var_4]
0xA000E2: fadd    st, st
0xA000E4: fld1
0xA000E6: fdivrp  st(1), st
0xA000E8: fstp    flt_B3C200
0xA000EE: pop     ecx
0xA000EF: retn
