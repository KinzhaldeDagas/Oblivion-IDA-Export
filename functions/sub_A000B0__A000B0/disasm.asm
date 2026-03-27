0xA000B0: push    ecx
0xA000B1: fld     ds:dbl_A784F8
0xA000B7: call    __CIcos
0xA000BC: fstp    [esp+4+var_4]
0xA000BF: fld     [esp+4+var_4]
0xA000C2: fadd    st, st
0xA000C4: fld1
0xA000C6: fdivrp  st(1), st
0xA000C8: fstp    flt_B3C1FC
0xA000CE: pop     ecx
0xA000CF: retn
