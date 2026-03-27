0x9FFEF0: push    ecx
0x9FFEF1: fld     ds:dbl_A78488
0x9FFEF7: call    __CIcos
0x9FFEFC: fstp    [esp+4+var_4]
0x9FFEFF: fld     [esp+4+var_4]
0x9FFF02: fadd    st, st
0x9FFF04: fld1
0x9FFF06: fdivrp  st(1), st
0x9FFF08: fstp    flt_B3C1C4
0x9FFF0E: pop     ecx
0x9FFF0F: retn
