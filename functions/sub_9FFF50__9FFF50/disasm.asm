0x9FFF50: push    ecx
0x9FFF51: fld     ds:dbl_A784A0
0x9FFF57: call    __CIcos
0x9FFF5C: fstp    [esp+4+var_4]
0x9FFF5F: fld     [esp+4+var_4]
0x9FFF62: fadd    st, st
0x9FFF64: fld1
0x9FFF66: fdivrp  st(1), st
0x9FFF68: fstp    flt_B3C1D0
0x9FFF6E: pop     ecx
0x9FFF6F: retn
