0xA00070: push    ecx
0xA00071: fld     ds:dbl_A784E8
0xA00077: call    __CIcos
0xA0007C: fstp    [esp+4+var_4]
0xA0007F: fld     [esp+4+var_4]
0xA00082: fadd    st, st
0xA00084: fld1
0xA00086: fdivrp  st(1), st
0xA00088: fstp    flt_B3C1F4
0xA0008E: pop     ecx
0xA0008F: retn
