0xA0A240: push    ecx
0xA0A241: fld     ds:dbl_A80528
0xA0A247: call    __CIsqrt
0xA0A24C: fstp    [esp+4+var_4]
0xA0A24F: fld     [esp+4+var_4]
0xA0A252: fmul    ds:dbl_A80528
0xA0A258: fdivr   ds:dbl_A7CDE0
0xA0A25E: fmul    ds:dbl_A80550
0xA0A264: fstp    flt_B3FF34
0xA0A26A: pop     ecx
0xA0A26B: retn
