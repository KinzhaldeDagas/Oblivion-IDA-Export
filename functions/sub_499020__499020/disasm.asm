0x499020: push    ecx
0x499021: push    esi
0x499022: mov     esi, ecx
0x499024: fld     dword ptr [esi+4]
0x499027: fld     dword ptr [esi]
0x499029: fmul    st, st
0x49902B: fld     st(1)
0x49902D: fmulp   st(2), st
0x49902F: faddp   st(1), st
0x499031: fstp    [esp+8+var_4]
0x499035: fld     [esp+8+var_4]
0x499039: call    __CIsqrt
0x49903E: fstp    [esp+8+var_4]
0x499042: fld     [esp+8+var_4]
0x499046: fstp    [esp+8+var_4]
0x49904A: fld     dword ptr ds:0A372CCh
0x499050: fld     [esp+8+var_4]
0x499054: fcom    st(1)
0x499056: fnstsw  ax
0x499058: fstp    st(1)
0x49905A: test    ah, 41h
0x49905D: jnz     short loc_499080
0x49905F: fld     st
0x499061: fld1
0x499063: fdivrp  st(1), st
0x499065: fstp    [esp+8+var_4]
0x499069: fld     dword ptr [esi]
0x49906B: fld     [esp+8+var_4]
0x49906F: fld     st
0x499071: fmulp   st(2), st
0x499073: fxch    st(1)
0x499075: fstp    dword ptr [esi]
0x499077: fmul    dword ptr [esi+4]
0x49907A: fstp    dword ptr [esi+4]
0x49907D: pop     esi
0x49907E: pop     ecx
0x49907F: retn
0x499080: fstp    st
0x499082: fldz
0x499084: fst     dword ptr [esi]
0x499086: fst     dword ptr [esi+4]
0x499089: fstp    [esp+8+var_4]
0x49908D: pop     esi
0x49908E: fld     [esp+4+var_4]
0x499091: pop     ecx
0x499092: retn
