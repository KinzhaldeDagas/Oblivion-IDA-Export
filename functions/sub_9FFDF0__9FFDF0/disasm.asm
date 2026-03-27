0x9FFDF0: push    ecx
0x9FFDF1: fld     ds:dbl_A78448
0x9FFDF7: call    __CIcos
0x9FFDFC: fstp    [esp+4+var_4]
0x9FFDFF: fld     [esp+4+var_4]
0x9FFE02: fadd    st, st
0x9FFE04: fld1
0x9FFE06: fdivrp  st(1), st
0x9FFE08: fstp    flt_B3C1A4
0x9FFE0E: pop     ecx
0x9FFE0F: retn
