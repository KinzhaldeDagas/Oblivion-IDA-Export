0x4A6A60: push    ecx
0x4A6A61: mov     eax, [esp+4+arg_0]
0x4A6A65: test    eax, eax
0x4A6A67: jnz     short loc_4A6A73
0x4A6A69: fld     dword ptr ds:0A30634h
0x4A6A6F: pop     ecx
0x4A6A70: retn    4
0x4A6A73: fld     dword ptr [ecx]
0x4A6A75: fsub    dword ptr [eax]
0x4A6A77: fstp    [esp+4+var_4]
0x4A6A7A: fld     dword ptr [ecx+4]
0x4A6A7D: fsub    dword ptr [eax+4]
0x4A6A80: fstp    [esp+4+arg_0]
0x4A6A84: fld     [esp+4+arg_0]
0x4A6A88: fld     [esp+4+var_4]
0x4A6A8B: fmul    st, st
0x4A6A8D: fld     st(1)
0x4A6A8F: fmulp   st(2), st
0x4A6A91: faddp   st(1), st
0x4A6A93: fstp    [esp+4+arg_0]
0x4A6A97: fld     [esp+4+arg_0]
0x4A6A9B: pop     ecx
0x4A6A9C: retn    4
