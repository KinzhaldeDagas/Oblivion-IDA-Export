0x9FFF30: push    ecx
0x9FFF31: fld     ds:dbl_A78498
0x9FFF37: call    __CIcos
0x9FFF3C: fstp    [esp+4+var_4]
0x9FFF3F: fld     [esp+4+var_4]
0x9FFF42: fadd    st, st
0x9FFF44: fld1
0x9FFF46: fdivrp  st(1), st
0x9FFF48: fstp    flt_B3C1CC
0x9FFF4E: pop     ecx
0x9FFF4F: retn
