0x4BC290: push    ecx
0x4BC291: movzx   eax, word ptr [ecx+24h]
0x4BC295: movzx   edx, word ptr [ecx+26h]
0x4BC299: movzx   ecx, word ptr [ecx+28h]
0x4BC29D: mov     [esp+4+var_4], eax
0x4BC2A0: mov     eax, [esp+4+arg_0]
0x4BC2A4: mov     [esp+4+arg_0], edx
0x4BC2A8: fild    [esp+4+var_4]
0x4BC2AB: fld     qword ptr ds:0A2FAA0h
0x4BC2B1: fmul    st(1), st
0x4BC2B3: fxch    st(1)
0x4BC2B5: fstp    dword ptr [eax]
0x4BC2B7: fild    [esp+4+arg_0]
0x4BC2BB: mov     [esp+4+arg_0], ecx
0x4BC2BF: fmul    st, st(1)
0x4BC2C1: fstp    dword ptr [eax+4]
0x4BC2C4: fild    [esp+4+arg_0]
0x4BC2C8: fmulp   st(1), st
0x4BC2CA: fstp    dword ptr [eax+8]
0x4BC2CD: pop     ecx
0x4BC2CE: retn    4
