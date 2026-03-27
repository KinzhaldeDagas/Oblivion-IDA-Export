0x9FFE30: push    ecx
0x9FFE31: fld     ds:dbl_A78458
0x9FFE37: call    __CIcos
0x9FFE3C: fstp    [esp+4+var_4]
0x9FFE3F: fld     [esp+4+var_4]
0x9FFE42: fadd    st, st
0x9FFE44: fld1
0x9FFE46: fdivrp  st(1), st
0x9FFE48: fstp    flt_B3C1AC
0x9FFE4E: pop     ecx
0x9FFE4F: retn
