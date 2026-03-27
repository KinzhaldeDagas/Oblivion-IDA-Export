0x9FFEB0: push    ecx
0x9FFEB1: fld     ds:dbl_A78478
0x9FFEB7: call    __CIcos
0x9FFEBC: fstp    [esp+4+var_4]
0x9FFEBF: fld     [esp+4+var_4]
0x9FFEC2: fadd    st, st
0x9FFEC4: fld1
0x9FFEC6: fdivrp  st(1), st
0x9FFEC8: fstp    flt_B3C1BC
0x9FFECE: pop     ecx
0x9FFECF: retn
