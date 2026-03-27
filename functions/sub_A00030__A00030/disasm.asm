0xA00030: push    ecx
0xA00031: fld     ds:dbl_A784D8
0xA00037: call    __CIcos
0xA0003C: fstp    [esp+4+var_4]
0xA0003F: fld     [esp+4+var_4]
0xA00042: fadd    st, st
0xA00044: fld1
0xA00046: fdivrp  st(1), st
0xA00048: fstp    flt_B3C1EC
0xA0004E: pop     ecx
0xA0004F: retn
