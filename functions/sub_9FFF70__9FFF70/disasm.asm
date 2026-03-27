0x9FFF70: push    ecx
0x9FFF71: fld     ds:dbl_A784A8
0x9FFF77: call    __CIcos
0x9FFF7C: fstp    [esp+4+var_4]
0x9FFF7F: fld     [esp+4+var_4]
0x9FFF82: fadd    st, st
0x9FFF84: fld1
0x9FFF86: fdivrp  st(1), st
0x9FFF88: fstp    flt_B3C1D4
0x9FFF8E: pop     ecx
0x9FFF8F: retn
