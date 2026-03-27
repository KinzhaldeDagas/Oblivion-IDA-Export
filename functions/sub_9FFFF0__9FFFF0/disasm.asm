0x9FFFF0: push    ecx
0x9FFFF1: fld     ds:dbl_A784C8
0x9FFFF7: call    __CIcos
0x9FFFFC: fstp    [esp+4+var_4]
0x9FFFFF: fld     [esp+4+var_4]
0xA00002: fadd    st, st
0xA00004: fld1
0xA00006: fdivrp  st(1), st
0xA00008: fstp    flt_B3C1E4
0xA0000E: pop     ecx
0xA0000F: retn
