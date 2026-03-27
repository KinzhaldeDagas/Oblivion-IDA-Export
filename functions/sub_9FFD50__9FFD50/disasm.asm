0x9FFD50: push    ecx
0x9FFD51: fld     ds:dbl_A78420
0x9FFD57: call    __CIcos
0x9FFD5C: fstp    [esp+4+var_4]
0x9FFD5F: fld     [esp+4+var_4]
0x9FFD62: fadd    st, st
0x9FFD64: fld1
0x9FFD66: fdivrp  st(1), st
0x9FFD68: fstp    flt_B3C190
0x9FFD6E: pop     ecx
0x9FFD6F: retn
