0x9FFD70: push    ecx
0x9FFD71: fld     ds:dbl_A78428
0x9FFD77: call    __CIcos
0x9FFD7C: fstp    [esp+4+var_4]
0x9FFD7F: fld     [esp+4+var_4]
0x9FFD82: fadd    st, st
0x9FFD84: fld1
0x9FFD86: fdivrp  st(1), st
0x9FFD88: fstp    flt_B3C194
0x9FFD8E: pop     ecx
0x9FFD8F: retn
