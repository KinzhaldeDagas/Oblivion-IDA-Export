0x9FFF10: push    ecx
0x9FFF11: fld     ds:dbl_A78490
0x9FFF17: call    __CIcos
0x9FFF1C: fstp    [esp+4+var_4]
0x9FFF1F: fld     [esp+4+var_4]
0x9FFF22: fadd    st, st
0x9FFF24: fld1
0x9FFF26: fdivrp  st(1), st
0x9FFF28: fstp    flt_B3C1C8
0x9FFF2E: pop     ecx
0x9FFF2F: retn
