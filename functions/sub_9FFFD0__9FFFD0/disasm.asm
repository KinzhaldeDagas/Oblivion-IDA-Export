0x9FFFD0: push    ecx
0x9FFFD1: fld     ds:dbl_A784C0
0x9FFFD7: call    __CIcos
0x9FFFDC: fstp    [esp+4+var_4]
0x9FFFDF: fld     [esp+4+var_4]
0x9FFFE2: fadd    st, st
0x9FFFE4: fld1
0x9FFFE6: fdivrp  st(1), st
0x9FFFE8: fstp    flt_B3C1E0
0x9FFFEE: pop     ecx
0x9FFFEF: retn
