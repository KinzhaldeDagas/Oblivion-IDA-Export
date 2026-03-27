0x7A6E90: fld     [esp+arg_0]
0x7A6E94: fld     st
0x7A6E96: fabs
0x7A6E98: fstp    [esp+arg_0]
0x7A6E9C: fld     [esp+arg_0]
0x7A6EA0: fcomp   dword ptr ds:0A58E1Ch
0x7A6EA6: fnstsw  ax
0x7A6EA8: test    ah, 41h
0x7A6EAB: jnz     short loc_7A6EBC
0x7A6EAD: fstp    st
0x7A6EAF: fldz
0x7A6EB1: fstp    [esp+arg_0]
0x7A6EB5: fld     [esp+arg_0]
0x7A6EB9: retn    4
0x7A6EBC: fld     st
0x7A6EBE: fchs
0x7A6EC0: fmulp   st(1), st
0x7A6EC2: fmul    qword ptr ds:0A2FAA0h
0x7A6EC8: fstp    [esp+arg_0]
0x7A6ECC: fld     [esp+arg_0]
0x7A6ED0: call    __CIexp
0x7A6ED5: fstp    [esp+arg_0]
0x7A6ED9: fld     [esp+arg_0]
0x7A6EDD: fmul    qword ptr ds:0A8CA00h
0x7A6EE3: fstp    [esp+arg_0]
0x7A6EE7: fld     [esp+arg_0]
0x7A6EEB: retn    4
