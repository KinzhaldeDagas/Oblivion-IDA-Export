0x976A50: sub     esp, 0Ch
0x976A53: fld     dword ptr [ecx+0Ch]
0x976A56: mov     eax, [esp+0Ch+arg_0]
0x976A5A: fld     [esp+0Ch+arg_4]
0x976A5E: fld     st
0x976A60: fmulp   st(2), st
0x976A62: fxch    st(1)
0x976A64: fstp    [esp+0Ch+var_C]
0x976A67: fld     dword ptr [ecx+10h]
0x976A6A: fmul    st, st(1)
0x976A6C: fstp    [esp+0Ch+var_8]
0x976A70: fmul    dword ptr [ecx+14h]
0x976A73: fstp    [esp+0Ch+var_4]
0x976A77: fld     dword ptr [ecx]
0x976A79: fadd    [esp+0Ch+var_C]
0x976A7C: fstp    dword ptr [eax]
0x976A7E: fld     dword ptr [ecx+4]
0x976A81: fadd    [esp+0Ch+var_8]
0x976A85: fstp    dword ptr [eax+4]
0x976A88: fld     dword ptr [ecx+8]
0x976A8B: fadd    [esp+0Ch+var_4]
0x976A8F: fstp    dword ptr [eax+8]
0x976A92: add     esp, 0Ch
0x976A95: retn    8
