0x9FFE50: push    ecx
0x9FFE51: fld     ds:dbl_A78460
0x9FFE57: call    __CIcos
0x9FFE5C: fstp    [esp+4+var_4]
0x9FFE5F: fld     [esp+4+var_4]
0x9FFE62: fadd    st, st
0x9FFE64: fld1
0x9FFE66: fdivrp  st(1), st
0x9FFE68: fstp    flt_B3C1B0
0x9FFE6E: pop     ecx
0x9FFE6F: retn
