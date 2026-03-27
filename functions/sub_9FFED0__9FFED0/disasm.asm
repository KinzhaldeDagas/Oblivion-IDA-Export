0x9FFED0: push    ecx
0x9FFED1: fld     ds:dbl_A78480
0x9FFED7: call    __CIcos
0x9FFEDC: fstp    [esp+4+var_4]
0x9FFEDF: fld     [esp+4+var_4]
0x9FFEE2: fadd    st, st
0x9FFEE4: fld1
0x9FFEE6: fdivrp  st(1), st
0x9FFEE8: fstp    flt_B3C1C0
0x9FFEEE: pop     ecx
0x9FFEEF: retn
