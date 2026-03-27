0x977C60: sub     esp, 24h
0x977C63: mov     eax, [esp+24h+arg_8]
0x977C67: mov     ecx, [esp+24h+arg_0]
0x977C6B: fld     dword ptr [ecx]
0x977C6D: fsub    dword ptr [eax]
0x977C6F: fstp    dword ptr [esp+24h+var_24]
0x977C72: fld     dword ptr [ecx+4]
0x977C75: fsub    dword ptr [eax+4]
0x977C78: fstp    dword ptr [esp+24h+var_24+4]
0x977C7C: fld     dword ptr [ecx+8]
0x977C7F: mov     ecx, [esp+24h+arg_4]
0x977C83: fsub    dword ptr [eax+8]
0x977C86: fstp    [esp+24h+var_1C]
0x977C8A: fld     dword ptr [ecx]
0x977C8C: fsub    dword ptr [eax]
0x977C8E: fstp    [esp+24h+var_18]
0x977C92: fld     dword ptr [ecx+4]
0x977C95: fsub    dword ptr [eax+4]
0x977C98: fstp    [esp+24h+var_14]
0x977C9C: fld     dword ptr [ecx+8]
0x977C9F: mov     ecx, [esp+24h+arg_C]
0x977CA3: fsub    dword ptr [eax+8]
0x977CA6: fstp    [esp+24h+var_10]
0x977CAA: fld     dword ptr [ecx]
0x977CAC: fsub    dword ptr [eax]
0x977CAE: fstp    [esp+24h+var_C]
0x977CB2: fld     dword ptr [ecx+4]
0x977CB5: fsub    dword ptr [eax+4]
0x977CB8: fstp    [esp+24h+var_8]
0x977CBC: fld     dword ptr [ecx+8]
0x977CBF: fsub    dword ptr [eax+8]
0x977CC2: fstp    [esp+24h+var_4]
0x977CC6: fld     dword ptr [esp+24h+var_24]
0x977CC9: fld     st
0x977CCB: fld     dword ptr [esp+24h+var_24+4]
0x977CCF: fld     st
0x977CD1: fld     [esp+24h+var_1C]
0x977CD5: fld     st
0x977CD7: fld     st(2)
0x977CD9: fmulp   st(3), st
0x977CDB: fld     st(4)
0x977CDD: fmulp   st(5), st
0x977CDF: fxch    st(2)
0x977CE1: faddp   st(4), st
0x977CE3: fld     st(1)
0x977CE5: fmulp   st(2), st
0x977CE7: fxch    st(3)
0x977CE9: faddp   st(1), st
0x977CEB: fstp    [esp+24h+arg_4]
0x977CEF: fld     [esp+24h+var_18]
0x977CF3: fld     st
0x977CF5: fmul    st, st(4)
0x977CF7: fld     [esp+24h+var_14]
0x977CFB: fld     st
0x977CFD: fmul    st, st(4)
0x977CFF: faddp   st(2), st
0x977D01: fld     [esp+24h+var_10]
0x977D05: fmul    st, st(5)
0x977D07: faddp   st(2), st
0x977D09: fxch    st(1)
0x977D0B: fstp    [esp+24h+arg_0]
0x977D0F: fld     st(1)
0x977D11: fld     st(1)
0x977D13: fld     [esp+24h+var_10]
0x977D17: fstp    [esp+24h+var_24]
0x977D1A: fmul    st, st
0x977D1C: fld     st(1)
0x977D1E: fmulp   st(2), st
0x977D20: faddp   st(1), st
0x977D22: fld     [esp+24h+var_24]
0x977D25: fmul    st, st
0x977D27: faddp   st(1), st
0x977D29: fstp    [esp+24h+arg_8]
0x977D2D: fld     [esp+24h+var_C]
0x977D31: fld     st
0x977D33: fmulp   st(6), st
0x977D35: fld     [esp+24h+var_8]
0x977D39: fld     st
0x977D3B: fmulp   st(5), st
0x977D3D: fxch    st(6)
0x977D3F: faddp   st(4), st
0x977D41: fld     [esp+24h+var_4]
0x977D45: fld     st
0x977D47: mov     eax, [esp+24h+arg_10]
0x977D4B: fmulp   st(6), st
0x977D4D: fxch    st(4)
0x977D4F: faddp   st(5), st
0x977D51: fxch    st(4)
0x977D53: fstp    [esp+24h+arg_C]
0x977D57: fxch    st(3)
0x977D59: fmulp   st(1), st
0x977D5B: fxch    st(3)
0x977D5D: fmulp   st(2), st
0x977D5F: fxch    st(2)
0x977D61: faddp   st(1), st
0x977D63: fld     [esp+24h+var_10]
0x977D67: fmulp   st(2), st
0x977D69: faddp   st(1), st
0x977D6B: fstp    dword ptr [esp+24h+var_24]
0x977D6E: fld     [esp+24h+arg_0]
0x977D72: fld     st
0x977D74: fld     [esp+24h+arg_8]
0x977D78: fld     st
0x977D7A: fld     [esp+24h+arg_4]
0x977D7E: fld     st
0x977D80: fmulp   st(2), st
0x977D82: fld     st(3)
0x977D84: fmulp   st(4), st
0x977D86: fxch    st(1)
0x977D88: fsubrp  st(3), st
0x977D8A: fld1
0x977D8C: fld     st
0x977D8E: fdivrp  st(4), st
0x977D90: fxch    st(3)
0x977D92: fstp    [esp+24h+arg_0]
0x977D96: fld     [esp+24h+arg_C]
0x977D9A: fld     st
0x977D9C: fmulp   st(3), st
0x977D9E: fld     dword ptr [esp+24h+var_24]
0x977DA1: fld     st
0x977DA3: fmul    st, st(6)
0x977DA5: fsubp   st(4), st
0x977DA7: fld     [esp+24h+arg_0]
0x977DAB: fld     st
0x977DAD: fmulp   st(5), st
0x977DAF: fxch    st(4)
0x977DB1: fstp    [esp+24h+arg_0]
0x977DB5: fld     [esp+24h+arg_0]
0x977DB9: fst     dword ptr [eax]
0x977DBB: fxch    st(1)
0x977DBD: fmulp   st(3), st
0x977DBF: fxch    st(1)
0x977DC1: fmulp   st(5), st
0x977DC3: fxch    st(1)
0x977DC5: fsubrp  st(4), st
0x977DC7: fxch    st(3)
0x977DC9: fmulp   st(1), st
0x977DCB: fstp    [esp+24h+arg_0]
0x977DCF: fld     [esp+24h+arg_0]
0x977DD3: fst     dword ptr [eax+4]
0x977DD6: fxch    st(1)
0x977DD8: fsubrp  st(2), st
0x977DDA: fsubp   st(1), st
0x977DDC: fstp    dword ptr [eax+8]
0x977DDF: add     esp, 24h
0x977DE2: retn
