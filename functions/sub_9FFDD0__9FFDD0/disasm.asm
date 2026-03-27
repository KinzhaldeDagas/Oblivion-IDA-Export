0x9FFDD0: push    ecx
0x9FFDD1: fld     ds:dbl_A78440
0x9FFDD7: call    __CIcos
0x9FFDDC: fstp    [esp+4+var_4]
0x9FFDDF: fld     [esp+4+var_4]
0x9FFDE2: fadd    st, st
0x9FFDE4: fld1
0x9FFDE6: fdivrp  st(1), st
0x9FFDE8: fstp    flt_B3C1A0
0x9FFDEE: pop     ecx
0x9FFDEF: retn
