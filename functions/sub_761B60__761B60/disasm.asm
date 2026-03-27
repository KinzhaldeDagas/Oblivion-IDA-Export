0x761B60: mov     ecx, [esp+arg_4]
0x761B64: fld     dword ptr [ecx]
0x761B66: mov     eax, [esp+arg_0]
0x761B6A: fld     [esp+arg_C]
0x761B6E: fld     st
0x761B70: fmulp   st(2), st
0x761B72: fxch    st(1)
0x761B74: fstp    dword ptr [eax]
0x761B76: fld     dword ptr [ecx+4]
0x761B79: fmul    st, st(1)
0x761B7B: fstp    dword ptr [eax+4]
0x761B7E: fld     dword ptr [ecx+8]
0x761B81: fmul    st, st(1)
0x761B83: fstp    dword ptr [eax+8]
0x761B86: fld     dword ptr [ecx+0Ch]
0x761B89: fmul    st, st(1)
0x761B8B: fstp    dword ptr [eax+10h]
0x761B8E: fld     dword ptr [ecx+10h]
0x761B91: fmul    st, st(1)
0x761B93: fstp    dword ptr [eax+14h]
0x761B96: fld     dword ptr [ecx+14h]
0x761B99: fmul    st, st(1)
0x761B9B: fstp    dword ptr [eax+18h]
0x761B9E: fld     dword ptr [ecx+18h]
0x761BA1: fmul    st, st(1)
0x761BA3: fstp    dword ptr [eax+20h]
0x761BA6: fld     dword ptr [ecx+1Ch]
0x761BA9: fmul    st, st(1)
0x761BAB: fstp    dword ptr [eax+24h]
0x761BAE: fmul    dword ptr [ecx+20h]
0x761BB1: mov     ecx, [esp+arg_8]
0x761BB5: fstp    dword ptr [eax+28h]
0x761BB8: fld     dword ptr [ecx]
0x761BBA: fsub    dword ptr ds:0B3F92Ch
0x761BC0: fstp    dword ptr [eax+0Ch]
0x761BC3: fld     dword ptr [ecx+4]
0x761BC6: fsub    dword ptr ds:0B3F930h
0x761BCC: fstp    dword ptr [eax+1Ch]
0x761BCF: fld     dword ptr [ecx+8]
0x761BD2: fsub    dword ptr ds:0B3F934h
0x761BD8: fstp    dword ptr [eax+2Ch]
0x761BDB: retn
