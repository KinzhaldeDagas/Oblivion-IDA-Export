0xA00110: push    ecx
0xA00111: fld     ds:dbl_A4D918
0xA00117: call    __CIcos
0xA0011C: fstp    [esp+4+var_4]
0xA0011F: fld     [esp+4+var_4]
0xA00122: fadd    st, st
0xA00124: fld1
0xA00126: fdivrp  st(1), st
0xA00128: fstp    flt_B3C208
0xA0012E: pop     ecx
0xA0012F: retn
