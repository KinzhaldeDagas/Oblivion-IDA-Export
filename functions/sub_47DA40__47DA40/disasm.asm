0x47DA40: push    ecx
0x47DA41: fld     dword ptr [ecx+4]
0x47DA44: fld     dword ptr [ecx]
0x47DA46: fld     dword ptr [ecx+8]
0x47DA49: fld     st(1)
0x47DA4B: fmulp   st(2), st
0x47DA4D: fld     st(2)
0x47DA4F: fmulp   st(3), st
0x47DA51: fxch    st(1)
0x47DA53: faddp   st(2), st
0x47DA55: fmul    st, st
0x47DA57: faddp   st(1), st
0x47DA59: fstp    [esp+4+var_4]
0x47DA5C: fld     [esp+4+var_4]
0x47DA5F: pop     ecx
0x47DA60: retn
