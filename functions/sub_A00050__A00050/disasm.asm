0xA00050: push    ecx
0xA00051: fld     ds:dbl_A784E0
0xA00057: call    __CIcos
0xA0005C: fstp    [esp+4+var_4]
0xA0005F: fld     [esp+4+var_4]
0xA00062: fadd    st, st
0xA00064: fld1
0xA00066: fdivrp  st(1), st
0xA00068: fstp    flt_B3C1F0
0xA0006E: pop     ecx
0xA0006F: retn
