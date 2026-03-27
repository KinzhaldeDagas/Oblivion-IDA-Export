0x9FFE90: push    ecx
0x9FFE91: fld     ds:dbl_A78470
0x9FFE97: call    __CIcos
0x9FFE9C: fstp    [esp+4+var_4]
0x9FFE9F: fld     [esp+4+var_4]
0x9FFEA2: fadd    st, st
0x9FFEA4: fld1
0x9FFEA6: fdivrp  st(1), st
0x9FFEA8: fstp    flt_B3C1B8
0x9FFEAE: pop     ecx
0x9FFEAF: retn
