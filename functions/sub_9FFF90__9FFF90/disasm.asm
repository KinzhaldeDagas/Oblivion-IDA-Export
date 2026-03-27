0x9FFF90: push    ecx
0x9FFF91: fld     ds:dbl_A784B0
0x9FFF97: call    __CIcos
0x9FFF9C: fstp    [esp+4+var_4]
0x9FFF9F: fld     [esp+4+var_4]
0x9FFFA2: fadd    st, st
0x9FFFA4: fld1
0x9FFFA6: fdivrp  st(1), st
0x9FFFA8: fstp    flt_B3C1D8
0x9FFFAE: pop     ecx
0x9FFFAF: retn
