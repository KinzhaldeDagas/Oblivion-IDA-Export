0x9FFDB0: push    ecx
0x9FFDB1: fld     ds:dbl_A78438
0x9FFDB7: call    __CIcos
0x9FFDBC: fstp    [esp+4+var_4]
0x9FFDBF: fld     [esp+4+var_4]
0x9FFDC2: fadd    st, st
0x9FFDC4: fld1
0x9FFDC6: fdivrp  st(1), st
0x9FFDC8: fstp    flt_B3C19C
0x9FFDCE: pop     ecx
0x9FFDCF: retn
