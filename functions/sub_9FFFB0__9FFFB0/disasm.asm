0x9FFFB0: push    ecx
0x9FFFB1: fld     ds:dbl_A784B8
0x9FFFB7: call    __CIcos
0x9FFFBC: fstp    [esp+4+var_4]
0x9FFFBF: fld     [esp+4+var_4]
0x9FFFC2: fadd    st, st
0x9FFFC4: fld1
0x9FFFC6: fdivrp  st(1), st
0x9FFFC8: fstp    flt_B3C1DC
0x9FFFCE: pop     ecx
0x9FFFCF: retn
