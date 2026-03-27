0x72FAC0: push    ecx
0x72FAC1: fld     dword ptr [ecx+8]
0x72FAC4: fld     dword ptr [ecx+4]
0x72FAC7: fld     dword ptr [ecx+0Ch]
0x72FACA: fld     dword ptr [ecx]
0x72FACC: fld     st(2)
0x72FACE: fmulp   st(3), st
0x72FAD0: fld     st(3)
0x72FAD2: fmulp   st(4), st
0x72FAD4: fxch    st(2)
0x72FAD6: faddp   st(3), st
0x72FAD8: fmul    st, st
0x72FADA: faddp   st(2), st
0x72FADC: fmul    st, st
0x72FADE: faddp   st(1), st
0x72FAE0: fstp    [esp+4+var_4]
0x72FAE3: fld     [esp+4+var_4]
0x72FAE6: fld     st
0x72FAE8: fld     qword ptr ds:0A80528h
0x72FAEE: fsub    st(1), st
0x72FAF0: fld     dword ptr ds:0B3FF34h
0x72FAF6: fld     st
0x72FAF8: fmulp   st(3), st
0x72FAFA: fld     dword ptr ds:0B3FF38h
0x72FB00: fld     st
0x72FB02: faddp   st(4), st
0x72FB04: fxch    st(3)
0x72FB06: fstp    [esp+4+var_4]
0x72FB09: fxch    st(3)
0x72FB0B: fcom    qword ptr ds:0A80538h
0x72FB11: fnstsw  ax
0x72FB13: test    ah, 41h
0x72FB16: jp      short loc_72FB6B
0x72FB18: fld     [esp+4+var_4]
0x72FB1B: fld     st
0x72FB1D: fmul    st, st
0x72FB1F: fmul    st, st(2)
0x72FB21: fstp    [esp+4+var_4]
0x72FB24: fld     [esp+4+var_4]
0x72FB27: fsub    st, st(3)
0x72FB29: fmul    st, st(5)
0x72FB2B: fadd    st, st(4)
0x72FB2D: fstp    [esp+4+var_4]
0x72FB30: fmul    [esp+4+var_4]
0x72FB33: fstp    [esp+4+var_4]
0x72FB36: fld     dword ptr ds:0A80530h
0x72FB3C: fcomp   st(1)
0x72FB3E: fnstsw  ax
0x72FB40: test    ah, 1
0x72FB43: jnz     short loc_72FB6B
0x72FB45: fld     [esp+4+var_4]
0x72FB48: fld     st
0x72FB4A: fmul    st, st
0x72FB4C: fmulp   st(2), st
0x72FB4E: fxch    st(1)
0x72FB50: fstp    [esp+4+var_4]
0x72FB53: fld     [esp+4+var_4]
0x72FB56: fsubrp  st(2), st
0x72FB58: fxch    st(1)
0x72FB5A: fmulp   st(3), st
0x72FB5C: fxch    st(2)
0x72FB5E: faddp   st(1), st
0x72FB60: fstp    [esp+4+var_4]
0x72FB63: fmul    [esp+4+var_4]
0x72FB66: fstp    [esp+4+var_4]
0x72FB69: jmp     short loc_72FB73
0x72FB6B: fstp    st
0x72FB6D: fstp    st
0x72FB6F: fstp    st(1)
0x72FB71: fstp    st
0x72FB73: fld     dword ptr [ecx+4]
0x72FB76: fld     [esp+4+var_4]
0x72FB79: fld     st
0x72FB7B: fmulp   st(2), st
0x72FB7D: fxch    st(1)
0x72FB7F: fstp    dword ptr [ecx+4]
0x72FB82: fld     st
0x72FB84: fmul    dword ptr [ecx+8]
0x72FB87: fstp    dword ptr [ecx+8]
0x72FB8A: fld     dword ptr [ecx+0Ch]
0x72FB8D: fmul    st, st(1)
0x72FB8F: fstp    dword ptr [ecx+0Ch]
0x72FB92: fmul    dword ptr [ecx]
0x72FB94: fstp    dword ptr [ecx]
0x72FB96: pop     ecx
0x72FB97: retn
