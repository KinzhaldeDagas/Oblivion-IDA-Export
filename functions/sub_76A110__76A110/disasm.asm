0x76A110: push    ecx
0x76A111: movzx   eax, byte ptr [ecx+5D7h]
0x76A118: mov     [esp+4+var_4], eax
0x76A11B: mov     eax, [esp+4+arg_0]
0x76A11F: fild    [esp+4+var_4]
0x76A122: fld     qword ptr ds:0A3F398h
0x76A128: fmul    st(1), st
0x76A12A: fxch    st(1)
0x76A12C: fstp    dword ptr [eax+0Ch]
0x76A12F: movzx   edx, byte ptr [ecx+5D6h]
0x76A136: mov     [esp+4+arg_0], edx
0x76A13A: fild    [esp+4+arg_0]
0x76A13E: fmul    st, st(1)
0x76A140: fstp    dword ptr [eax]
0x76A142: movzx   edx, byte ptr [ecx+5D5h]
0x76A149: mov     [esp+4+arg_0], edx
0x76A14D: fild    [esp+4+arg_0]
0x76A151: fmul    st, st(1)
0x76A153: fstp    dword ptr [eax+4]
0x76A156: movzx   ecx, byte ptr [ecx+5D4h]
0x76A15D: mov     [esp+4+arg_0], ecx
0x76A161: fimul   [esp+4+arg_0]
0x76A165: fstp    dword ptr [eax+8]
0x76A168: pop     ecx
0x76A169: retn    4
