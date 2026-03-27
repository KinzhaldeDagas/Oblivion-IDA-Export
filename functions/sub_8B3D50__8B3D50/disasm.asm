0x8B3D50: fld     dword ptr [ecx+68h]
0x8B3D53: mov     edx, [esp+arg_8]
0x8B3D57: fdiv    dword ptr [ecx+64h]
0x8B3D5A: mov     eax, [esp+arg_C]
0x8B3D5E: fstp    dword ptr [edx]
0x8B3D60: fld     dword ptr [ecx+6Ch]
0x8B3D63: fdiv    dword ptr [ecx+64h]
0x8B3D66: fstp    dword ptr [edx+4]
0x8B3D69: fld     dword ptr [ecx+70h]
0x8B3D6C: fdiv    dword ptr [ecx+64h]
0x8B3D6F: fstp    dword ptr [edx+8]
0x8B3D72: fld     dword ptr [ecx+78h]
0x8B3D75: fadd    dword ptr [ecx+7Ch]
0x8B3D78: fmul    [esp+arg_4]
0x8B3D7C: fstp    dword ptr [eax]
0x8B3D7E: fld     dword ptr [ecx+74h]
0x8B3D81: fadd    dword ptr [ecx+7Ch]
0x8B3D84: fmul    [esp+arg_4]
0x8B3D88: fstp    dword ptr [eax+14h]
0x8B3D8B: fld     dword ptr [ecx+74h]
0x8B3D8E: fadd    dword ptr [ecx+78h]
0x8B3D91: fmul    [esp+arg_4]
0x8B3D95: fstp    dword ptr [eax+28h]
0x8B3D98: fld     [esp+arg_4]
0x8B3D9C: fmul    dword ptr [ecx+80h]
0x8B3DA2: fchs
0x8B3DA4: fst     dword ptr [eax+4]
0x8B3DA7: fstp    dword ptr [eax+10h]
0x8B3DAA: fld     [esp+arg_4]
0x8B3DAE: fmul    dword ptr [ecx+84h]
0x8B3DB4: fchs
0x8B3DB6: fst     dword ptr [eax+18h]
0x8B3DB9: fstp    dword ptr [eax+24h]
0x8B3DBC: fld     [esp+arg_4]
0x8B3DC0: fmul    dword ptr [ecx+88h]
0x8B3DC6: fchs
0x8B3DC8: fst     dword ptr [eax+20h]
0x8B3DCB: fstp    dword ptr [eax+8]
0x8B3DCE: fld     dword ptr [edx+8]
0x8B3DD1: fld     dword ptr [edx+4]
0x8B3DD4: fld     st
0x8B3DD6: fmul    st, st(1)
0x8B3DD8: fld     st(2)
0x8B3DDA: fmul    st, st(3)
0x8B3DDC: faddp   st(1), st
0x8B3DDE: fmul    [esp+arg_0]
0x8B3DE2: fsubr   dword ptr [eax]
0x8B3DE4: fstp    dword ptr [eax]
0x8B3DE6: fstp    st
0x8B3DE8: fstp    st
0x8B3DEA: fld     dword ptr [edx+8]
0x8B3DED: fld     dword ptr [edx]
0x8B3DEF: fld     st
0x8B3DF1: fmul    st, st(1)
0x8B3DF3: fld     st(2)
0x8B3DF5: fmul    st, st(3)
0x8B3DF7: faddp   st(1), st
0x8B3DF9: fmul    [esp+arg_0]
0x8B3DFD: fsubr   dword ptr [eax+14h]
0x8B3E00: fstp    dword ptr [eax+14h]
0x8B3E03: fstp    st
0x8B3E05: fstp    st
0x8B3E07: fld     dword ptr [edx+4]
0x8B3E0A: fld     dword ptr [edx]
0x8B3E0C: fld     st
0x8B3E0E: fmul    st, st(1)
0x8B3E10: fld     st(2)
0x8B3E12: fmul    st, st(3)
0x8B3E14: faddp   st(1), st
0x8B3E16: fmul    [esp+arg_0]
0x8B3E1A: fsubr   dword ptr [eax+28h]
0x8B3E1D: fstp    dword ptr [eax+28h]
0x8B3E20: fstp    st
0x8B3E22: fstp    st
0x8B3E24: fld     dword ptr [edx]
0x8B3E26: fmul    dword ptr [edx+4]
0x8B3E29: fmul    [esp+arg_0]
0x8B3E2D: fadd    dword ptr [eax+4]
0x8B3E30: fst     dword ptr [eax+4]
0x8B3E33: fstp    dword ptr [eax+10h]
0x8B3E36: fld     dword ptr [edx+8]
0x8B3E39: fmul    dword ptr [edx+4]
0x8B3E3C: fmul    [esp+arg_0]
0x8B3E40: fadd    dword ptr [eax+18h]
0x8B3E43: fst     dword ptr [eax+18h]
0x8B3E46: fstp    dword ptr [eax+24h]
0x8B3E49: fld     dword ptr [edx+8]
0x8B3E4C: fmul    dword ptr [edx]
0x8B3E4E: fmul    [esp+arg_0]
0x8B3E52: fadd    dword ptr [eax+20h]
0x8B3E55: fst     dword ptr [eax+20h]
0x8B3E58: fstp    dword ptr [eax+8]
0x8B3E5B: retn    10h
