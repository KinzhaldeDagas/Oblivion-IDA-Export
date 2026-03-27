0x404C90: push    ecx
0x404C91: fld     dword ptr [ecx+4]
0x404C94: fld     dword ptr [ecx]
0x404C96: fld     dword ptr [ecx+8]
0x404C99: fld     st(1)
0x404C9B: fmulp   st(2), st
0x404C9D: fld     st(2)
0x404C9F: fmulp   st(3), st
0x404CA1: fxch    st(1)
0x404CA3: faddp   st(2), st
0x404CA5: fmul    st, st
0x404CA7: faddp   st(1), st
0x404CA9: fstp    [esp+4+var_4]
0x404CAC: fld     [esp+4+var_4]
0x404CAF: call    __CIsqrt
0x404CB4: fstp    [esp+4+var_4]
0x404CB7: fld     [esp+4+var_4]
0x404CBA: pop     ecx
0x404CBB: retn
