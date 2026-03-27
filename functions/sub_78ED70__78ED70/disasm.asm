0x78ED70: push    ecx
0x78ED71: push    esi
0x78ED72: mov     esi, ecx
0x78ED74: fld     dword ptr [esi+4]
0x78ED77: fld     dword ptr [esi]
0x78ED79: fld     dword ptr [esi+8]
0x78ED7C: fld     st(1)
0x78ED7E: fmulp   st(2), st
0x78ED80: fld     st(2)
0x78ED82: fmulp   st(3), st
0x78ED84: fxch    st(1)
0x78ED86: faddp   st(2), st
0x78ED88: fmul    st, st
0x78ED8A: faddp   st(1), st
0x78ED8C: fstp    [esp+8+var_4]
0x78ED90: fld     [esp+8+var_4]
0x78ED94: call    __CIsqrt
0x78ED99: fstp    [esp+8+var_4]
0x78ED9D: fld     [esp+8+var_4]
0x78EDA1: fld1
0x78EDA3: fdivrp  st(1), st
0x78EDA5: fstp    [esp+8+var_4]
0x78EDA9: fld     dword ptr [esi]
0x78EDAB: fld     [esp+8+var_4]
0x78EDAF: fld     st
0x78EDB1: fmulp   st(2), st
0x78EDB3: fxch    st(1)
0x78EDB5: fstp    dword ptr [esi]
0x78EDB7: fld     st
0x78EDB9: fmul    dword ptr [esi+4]
0x78EDBC: fstp    dword ptr [esi+4]
0x78EDBF: fmul    dword ptr [esi+8]
0x78EDC2: fstp    dword ptr [esi+8]
0x78EDC5: pop     esi
0x78EDC6: pop     ecx
0x78EDC7: retn
