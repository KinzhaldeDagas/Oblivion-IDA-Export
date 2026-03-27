0xA000F0: push    ecx
0xA000F1: fld     ds:dbl_A78500
0xA000F7: call    __CIcos
0xA000FC: fstp    [esp+4+var_4]
0xA000FF: fld     [esp+4+var_4]
0xA00102: fadd    st, st
0xA00104: fld1
0xA00106: fdivrp  st(1), st
0xA00108: fstp    flt_B3C204
0xA0010E: pop     ecx
0xA0010F: retn
