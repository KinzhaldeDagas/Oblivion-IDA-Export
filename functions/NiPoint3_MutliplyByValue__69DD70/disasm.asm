0x69DD70: mov     eax, ecx
0x69DD72: fld     dword ptr [eax]
0x69DD74: fld     [esp+arg_0]
0x69DD78: fld     st
0x69DD7A: fmulp   st(2), st
0x69DD7C: fxch    st(1)
0x69DD7E: fstp    dword ptr [eax]
0x69DD80: fld     dword ptr [eax+4]
0x69DD83: fmul    st, st(1)
0x69DD85: fstp    dword ptr [eax+4]
0x69DD88: fmul    dword ptr [eax+8]
0x69DD8B: fstp    dword ptr [eax+8]
0x69DD8E: retn    4
