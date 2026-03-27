0x4D7E30: sub     esp, 0Ch
0x4D7E33: mov     eax, [esp+0Ch+arg_0]
0x4D7E37: fld     dword ptr [eax]
0x4D7E39: fsub    dword ptr [ecx+2Ch]
0x4D7E3C: fstp    [esp+0Ch+var_C]
0x4D7E3F: fld     dword ptr [eax+4]
0x4D7E42: fsub    dword ptr [ecx+30h]
0x4D7E45: fstp    [esp+0Ch+var_8]
0x4D7E49: fld     dword ptr [eax+8]
0x4D7E4C: fsub    dword ptr [ecx+34h]
0x4D7E4F: fstp    [esp+0Ch+var_4]
0x4D7E53: fld     [esp+0Ch+var_C]
0x4D7E56: fld     [esp+0Ch+var_8]
0x4D7E5A: fld     [esp+0Ch+var_4]
0x4D7E5E: fld     st(1)
0x4D7E60: fmulp   st(2), st
0x4D7E62: fld     st(2)
0x4D7E64: fmulp   st(3), st
0x4D7E66: fxch    st(1)
0x4D7E68: faddp   st(2), st
0x4D7E6A: fmul    st, st
0x4D7E6C: faddp   st(1), st
0x4D7E6E: fstp    [esp+0Ch+arg_0]
0x4D7E72: fld     [esp+0Ch+arg_0]
0x4D7E76: call    __CIsqrt
0x4D7E7B: fstp    [esp+0Ch+arg_0]
0x4D7E7F: fld     [esp+0Ch+arg_0]
0x4D7E83: add     esp, 0Ch
0x4D7E86: retn    4
