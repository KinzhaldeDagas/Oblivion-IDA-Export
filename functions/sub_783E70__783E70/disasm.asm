0x783E70: sub     esp, 20h
0x783E73: mov     ecx, [esp+20h+arg_4]
0x783E77: mov     eax, [esp+20h+arg_8]
0x783E7B: fld     dword ptr [ecx]
0x783E7D: fstp    [esp+20h+arg_4]
0x783E81: mov     [esp+20h+var_20], 0
0x783E88: fld     dword ptr [eax]
0x783E8A: push    esi
0x783E8B: fld     [esp+24h+arg_4]
0x783E8F: fld     st
0x783E91: fsubp   st(2), st
0x783E93: fld     [esp+24h+arg_14]
0x783E97: fld     st
0x783E99: fmulp   st(3), st
0x783E9B: fxch    st(2)
0x783E9D: faddp   st(1), st
0x783E9F: fstp    [esp+24h+var_18]
0x783EA3: fld     dword ptr [ecx+4]
0x783EA6: mov     ecx, [esp+24h+arg_C]
0x783EAA: fstp    [esp+24h+arg_4]
0x783EAE: fld     dword ptr [eax+4]
0x783EB1: fld     [esp+24h+arg_4]
0x783EB5: fld     st
0x783EB7: fsubp   st(2), st
0x783EB9: fld     st(2)
0x783EBB: fmulp   st(2), st
0x783EBD: faddp   st(1), st
0x783EBF: fstp    [esp+24h+var_14]
0x783EC3: fld     dword ptr [eax]
0x783EC5: fstp    [esp+24h+arg_4]
0x783EC9: fld     dword ptr [ecx]
0x783ECB: fld     [esp+24h+arg_4]
0x783ECF: fld     st
0x783ED1: fsubp   st(2), st
0x783ED3: fld     st(2)
0x783ED5: fmulp   st(2), st
0x783ED7: faddp   st(1), st
0x783ED9: fstp    [esp+24h+var_20]
0x783EDD: fld     dword ptr [eax+4]
0x783EE0: mov     eax, [esp+24h+arg_10]
0x783EE4: fstp    [esp+24h+arg_4]
0x783EE8: fld     dword ptr [ecx+4]
0x783EEB: fld     [esp+24h+arg_4]
0x783EEF: fld     st
0x783EF1: fsubp   st(2), st
0x783EF3: fld     st(2)
0x783EF5: fmulp   st(2), st
0x783EF7: faddp   st(1), st
0x783EF9: fstp    [esp+24h+var_1C]
0x783EFD: fld     dword ptr [ecx]
0x783EFF: fstp    [esp+24h+arg_4]
0x783F03: fld     dword ptr [eax]
0x783F05: fld     [esp+24h+arg_4]
0x783F09: fld     st
0x783F0B: fsubp   st(2), st
0x783F0D: fld     st(2)
0x783F0F: fmulp   st(2), st
0x783F11: faddp   st(1), st
0x783F13: fstp    [esp+24h+var_10]
0x783F17: fld     dword ptr [ecx+4]
0x783F1A: fstp    [esp+24h+arg_4]
0x783F1E: fld     dword ptr [eax+4]
0x783F21: fld     [esp+24h+arg_4]
0x783F25: fld     st
0x783F27: fsubp   st(2), st
0x783F29: fld     st(2)
0x783F2B: fmulp   st(2), st
0x783F2D: faddp   st(1), st
0x783F2F: fstp    [esp+24h+var_C]
0x783F33: fld     [esp+24h+var_20]
0x783F37: fld     st
0x783F39: fld     [esp+24h+var_18]
0x783F3D: fld     st
0x783F3F: fsubp   st(2), st
0x783F41: fld     st(3)
0x783F43: fmulp   st(2), st
0x783F45: faddp   st(1), st
0x783F47: fstp    [esp+24h+var_8]
0x783F4B: fld     [esp+24h+var_1C]
0x783F4F: fld     st
0x783F51: fld     [esp+24h+var_14]
0x783F55: fld     st
0x783F57: fsubp   st(2), st
0x783F59: mov     esi, [esp+24h+arg_0]
0x783F5D: fld     st(4)
0x783F5F: sub     esp, 8
0x783F62: mov     ecx, esi
0x783F64: fmulp   st(2), st
0x783F66: faddp   st(1), st
0x783F68: fstp    [esp+2Ch+var_4]
0x783F6C: fld     [esp+2Ch+var_10]
0x783F70: fsub    st, st(2)
0x783F72: fmul    st, st(3)
0x783F74: faddp   st(2), st
0x783F76: fxch    st(1)
0x783F78: fstp    [esp+2Ch+var_18]
0x783F7C: fld     [esp+2Ch+var_C]
0x783F80: fsub    st, st(1)
0x783F82: fmul    st, st(2)
0x783F84: faddp   st(1), st
0x783F86: fstp    [esp+2Ch+var_14]
0x783F8A: fld     [esp+2Ch+var_14]
0x783F8E: fld     [esp+2Ch+var_4]
0x783F92: fld     st
0x783F94: fsubp   st(2), st
0x783F96: fld     st(2)
0x783F98: fmulp   st(2), st
0x783F9A: faddp   st(1), st
0x783F9C: fstp    [esp+2Ch+arg_4]
0x783FA0: fld     [esp+2Ch+arg_4]
0x783FA4: fstp    [esp+2Ch+var_28]; float
0x783FA8: fld     [esp+2Ch+var_18]
0x783FAC: fld     [esp+2Ch+var_8]
0x783FB0: fld     st
0x783FB2: fsubp   st(2), st
0x783FB4: fxch    st(1)
0x783FB6: fmulp   st(2), st
0x783FB8: faddp   st(1), st
0x783FBA: fstp    [esp+2Ch+arg_4]
0x783FBE: fld     [esp+2Ch+arg_4]
0x783FC2: fstp    [esp+2Ch+var_2C]; float
0x783FC5: call    sub_78E5A0
0x783FCA: mov     eax, esi
0x783FCC: pop     esi
0x783FCD: add     esp, 20h
0x783FD0: retn    18h
