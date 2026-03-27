0x4A6D20: push    ecx
0x4A6D21: mov     eax, [esp+4+arg_0]
0x4A6D25: test    eax, eax
0x4A6D27: jnz     short loc_4A6D33
0x4A6D29: fld     dword ptr ds:0A30634h
0x4A6D2F: pop     ecx
0x4A6D30: retn    4
0x4A6D33: fld     dword ptr [ecx]
0x4A6D35: fsub    dword ptr [eax]
0x4A6D37: fstp    [esp+4+var_4]
0x4A6D3A: fld     dword ptr [ecx+4]
0x4A6D3D: fsub    dword ptr [eax+4]
0x4A6D40: fstp    [esp+4+arg_0]
0x4A6D44: fld     [esp+4+arg_0]
0x4A6D48: fld     [esp+4+var_4]
0x4A6D4B: fmul    st, st
0x4A6D4D: fld     st(1)
0x4A6D4F: fmulp   st(2), st
0x4A6D51: faddp   st(1), st
0x4A6D53: fstp    [esp+4+arg_0]
0x4A6D57: fld     [esp+4+arg_0]
0x4A6D5B: call    __CIsqrt
0x4A6D60: fstp    [esp+4+arg_0]
0x4A6D64: fld     [esp+4+arg_0]
0x4A6D68: pop     ecx
0x4A6D69: retn    4
