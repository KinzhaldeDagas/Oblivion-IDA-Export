0x51AED0: push    ecx
0x51AED1: fld     dword ptr [ecx+18h]
0x51AED4: fld     dword ptr [ecx+14h]
0x51AED7: fld     dword ptr [ecx+1Ch]
0x51AEDA: fld     st(1)
0x51AEDC: fmulp   st(2), st
0x51AEDE: fld     st(2)
0x51AEE0: fmulp   st(3), st
0x51AEE2: fxch    st(1)
0x51AEE4: faddp   st(2), st
0x51AEE6: fmul    st, st
0x51AEE8: faddp   st(1), st
0x51AEEA: fstp    [esp+4+var_4]
0x51AEED: fld     [esp+4+var_4]
0x51AEF0: call    __CIsqrt
0x51AEF5: fstp    [esp+4+var_4]
0x51AEF8: fld     [esp+4+var_4]
0x51AEFB: pop     ecx
0x51AEFC: retn
