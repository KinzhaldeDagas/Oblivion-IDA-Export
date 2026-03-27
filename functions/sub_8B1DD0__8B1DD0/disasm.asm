0x8B1DD0: sub     esp, 1Ch
0x8B1DD3: mov     eax, [esp+1Ch+arg_0]
0x8B1DD7: fld     dword ptr [eax]
0x8B1DD9: fadd    st, st
0x8B1DDB: fld     dword ptr [eax+4]
0x8B1DDE: fadd    st, st
0x8B1DE0: fld     dword ptr [eax+8]
0x8B1DE3: fadd    st, st
0x8B1DE5: fstp    [esp+1Ch+arg_0]
0x8B1DE9: fld     st(1)
0x8B1DEB: fmul    dword ptr [eax]
0x8B1DED: fstp    [esp+1Ch+var_4]
0x8B1DF1: fld     st
0x8B1DF3: fmul    dword ptr [eax]
0x8B1DF5: fstp    [esp+1Ch+var_1C]
0x8B1DF8: fld     [esp+1Ch+arg_0]
0x8B1DFC: fmul    dword ptr [eax]
0x8B1DFE: fstp    [esp+1Ch+var_14]
0x8B1E02: fld     st
0x8B1E04: fmul    dword ptr [eax+4]
0x8B1E07: fstp    [esp+1Ch+var_8]
0x8B1E0B: fld     [esp+1Ch+arg_0]
0x8B1E0F: fmul    dword ptr [eax+4]
0x8B1E12: fstp    [esp+1Ch+var_10]
0x8B1E16: fld     [esp+1Ch+arg_0]
0x8B1E1A: fmul    dword ptr [eax+8]
0x8B1E1D: fstp    [esp+1Ch+var_18]
0x8B1E21: fxch    st(1)
0x8B1E23: fmul    dword ptr [eax+0Ch]
0x8B1E26: fstp    [esp+1Ch+var_C]
0x8B1E2A: fmul    dword ptr [eax+0Ch]
0x8B1E2D: fld     [esp+1Ch+arg_0]
0x8B1E31: fmul    dword ptr [eax+0Ch]
0x8B1E34: xor     eax, eax
0x8B1E36: fld     [esp+1Ch+var_18]
0x8B1E3A: fadd    [esp+1Ch+var_8]
0x8B1E3E: fsubr   dword ptr ds:0A2F948h
0x8B1E44: fstp    dword ptr [ecx]
0x8B1E46: fld     [esp+1Ch+var_1C]
0x8B1E49: fadd    st, st(1)
0x8B1E4B: fstp    dword ptr [ecx+4]
0x8B1E4E: fld     [esp+1Ch+var_14]
0x8B1E52: fsub    st, st(2)
0x8B1E54: fstp    dword ptr [ecx+8]
0x8B1E57: mov     [ecx+0Ch], eax
0x8B1E5A: fld     [esp+1Ch+var_1C]
0x8B1E5D: fsub    st, st(1)
0x8B1E5F: fstp    dword ptr [ecx+10h]
0x8B1E62: fstp    st
0x8B1E64: fld     [esp+1Ch+var_18]
0x8B1E68: fadd    [esp+1Ch+var_4]
0x8B1E6C: fsubr   dword ptr ds:0A2F948h
0x8B1E72: fstp    dword ptr [ecx+14h]
0x8B1E75: fld     [esp+1Ch+var_C]
0x8B1E79: fadd    [esp+1Ch+var_10]
0x8B1E7D: fstp    dword ptr [ecx+18h]
0x8B1E80: mov     [ecx+1Ch], eax
0x8B1E83: fadd    [esp+1Ch+var_14]
0x8B1E87: fstp    dword ptr [ecx+20h]
0x8B1E8A: fld     [esp+1Ch+var_10]
0x8B1E8E: fsub    [esp+1Ch+var_C]
0x8B1E92: fstp    dword ptr [ecx+24h]
0x8B1E95: fld     [esp+1Ch+var_8]
0x8B1E99: fadd    [esp+1Ch+var_4]
0x8B1E9D: fsubr   dword ptr ds:0A2F948h
0x8B1EA3: fstp    dword ptr [ecx+28h]
0x8B1EA6: mov     [ecx+2Ch], eax
0x8B1EA9: add     esp, 1Ch
0x8B1EAC: retn    4
