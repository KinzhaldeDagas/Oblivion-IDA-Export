0x9FFD90: push    ecx
0x9FFD91: fld     ds:dbl_A78430
0x9FFD97: call    __CIcos
0x9FFD9C: fstp    [esp+4+var_4]
0x9FFD9F: fld     [esp+4+var_4]
0x9FFDA2: fadd    st, st
0x9FFDA4: fld1
0x9FFDA6: fdivrp  st(1), st
0x9FFDA8: fstp    flt_B3C198
0x9FFDAE: pop     ecx
0x9FFDAF: retn
