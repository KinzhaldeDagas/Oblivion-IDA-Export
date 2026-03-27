0x9FFE10: push    ecx
0x9FFE11: fld     ds:dbl_A78450
0x9FFE17: call    __CIcos
0x9FFE1C: fstp    [esp+4+var_4]
0x9FFE1F: fld     [esp+4+var_4]
0x9FFE22: fadd    st, st
0x9FFE24: fld1
0x9FFE26: fdivrp  st(1), st
0x9FFE28: fstp    flt_B3C1A8
0x9FFE2E: pop     ecx
0x9FFE2F: retn
