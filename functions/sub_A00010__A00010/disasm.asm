0xA00010: push    ecx
0xA00011: fld     ds:dbl_A784D0
0xA00017: call    __CIcos
0xA0001C: fstp    [esp+4+var_4]
0xA0001F: fld     [esp+4+var_4]
0xA00022: fadd    st, st
0xA00024: fld1
0xA00026: fdivrp  st(1), st
0xA00028: fstp    flt_B3C1E8
0xA0002E: pop     ecx
0xA0002F: retn
