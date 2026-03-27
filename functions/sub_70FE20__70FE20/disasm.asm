0x70FE20: sub     esp, 0Ch
0x70FE23: fld     [esp+0Ch+arg_0]
0x70FE27: fsincos
0x70FE29: fstp    [esp+0Ch+var_C]
0x70FE2C: fstp    [esp+0Ch+var_8]
0x70FE30: fld     [esp+0Ch+var_C]
0x70FE33: fld     st
0x70FE35: fld1
0x70FE37: fsubrp  st(1), st
0x70FE39: fstp    [esp+0Ch+arg_0]
0x70FE3D: fld     [esp+0Ch+arg_4]
0x70FE41: fld     st
0x70FE43: fld     [esp+0Ch+arg_8]
0x70FE47: fld     st
0x70FE49: fmulp   st(2), st
0x70FE4B: fld     [esp+0Ch+arg_0]
0x70FE4F: fld     st
0x70FE51: fmulp   st(3), st
0x70FE53: fxch    st(2)
0x70FE55: fstp    [esp+0Ch+var_C]
0x70FE58: fld     st(2)
0x70FE5A: fld     [esp+0Ch+arg_C]
0x70FE5E: fld     st
0x70FE60: fmulp   st(2), st
0x70FE62: fld     st(3)
0x70FE64: fmulp   st(2), st
0x70FE66: fxch    st(1)
0x70FE68: fstp    [esp+0Ch+arg_4]
0x70FE6C: fld     st(1)
0x70FE6E: fmul    st, st(1)
0x70FE70: fmul    st, st(3)
0x70FE72: fstp    [esp+0Ch+var_4]
0x70FE76: fld     [esp+0Ch+var_8]
0x70FE7A: fld     st
0x70FE7C: fmul    st, st(5)
0x70FE7E: fstp    [esp+0Ch+var_8]
0x70FE82: fld     st
0x70FE84: fmul    st, st(3)
0x70FE86: fstp    [esp+0Ch+arg_0]
0x70FE8A: fmul    st, st(1)
0x70FE8C: fstp    [esp+0Ch+arg_C]
0x70FE90: fld     st(3)
0x70FE92: fmulp   st(4), st
0x70FE94: fxch    st(3)
0x70FE96: fstp    [esp+0Ch+arg_8]
0x70FE9A: fld     [esp+0Ch+arg_8]
0x70FE9E: fmul    st, st(2)
0x70FEA0: fadd    st, st(4)
0x70FEA2: fstp    dword ptr [ecx]
0x70FEA4: fld     [esp+0Ch+arg_C]
0x70FEA8: fld     st
0x70FEAA: fld     [esp+0Ch+var_C]
0x70FEAD: fld     st
0x70FEAF: faddp   st(2), st
0x70FEB1: fxch    st(1)
0x70FEB3: fstp    dword ptr [ecx+4]
0x70FEB6: fld     [esp+0Ch+arg_4]
0x70FEBA: fsub    [esp+0Ch+arg_0]
0x70FEBE: fstp    dword ptr [ecx+8]
0x70FEC1: fsubrp  st(1), st
0x70FEC3: fstp    dword ptr [ecx+0Ch]
0x70FEC6: fmul    st, st
0x70FEC8: fstp    [esp+0Ch+arg_8]
0x70FECC: fld     [esp+0Ch+arg_8]
0x70FED0: fmul    st, st(1)
0x70FED2: fadd    st, st(3)
0x70FED4: fstp    dword ptr [ecx+10h]
0x70FED7: fld     [esp+0Ch+var_8]
0x70FEDB: fld     st
0x70FEDD: fld     [esp+0Ch+var_4]
0x70FEE1: fld     st
0x70FEE3: faddp   st(2), st
0x70FEE5: fxch    st(1)
0x70FEE7: fstp    dword ptr [ecx+14h]
0x70FEEA: fld     [esp+0Ch+arg_0]
0x70FEEE: fadd    [esp+0Ch+arg_4]
0x70FEF2: fstp    dword ptr [ecx+18h]
0x70FEF5: fsubrp  st(1), st
0x70FEF7: fstp    dword ptr [ecx+1Ch]
0x70FEFA: fld     st(1)
0x70FEFC: fmulp   st(2), st
0x70FEFE: fxch    st(1)
0x70FF00: fstp    [esp+0Ch+arg_0]
0x70FF04: fmul    [esp+0Ch+arg_0]
0x70FF08: faddp   st(1), st
0x70FF0A: fstp    dword ptr [ecx+20h]
0x70FF0D: add     esp, 0Ch
0x70FF10: retn    10h
