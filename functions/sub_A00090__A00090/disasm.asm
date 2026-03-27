0xA00090: push    ecx
0xA00091: fld     ds:dbl_A784F0
0xA00097: call    __CIcos
0xA0009C: fstp    [esp+4+var_4]
0xA0009F: fld     [esp+4+var_4]
0xA000A2: fadd    st, st
0xA000A4: fld1
0xA000A6: fdivrp  st(1), st
0xA000A8: fstp    flt_B3C1F8
0xA000AE: pop     ecx
0xA000AF: retn
