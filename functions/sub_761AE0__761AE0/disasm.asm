0x761AE0: mov     ecx, [esp+arg_4]
0x761AE4: fld     dword ptr [ecx]
0x761AE6: mov     eax, [esp+arg_0]
0x761AEA: fld     [esp+arg_C]
0x761AEE: fld     st
0x761AF0: fmulp   st(2), st
0x761AF2: fxch    st(1)
0x761AF4: fstp    dword ptr [eax]
0x761AF6: fld     dword ptr [ecx+0Ch]
0x761AF9: fmul    st, st(1)
0x761AFB: fstp    dword ptr [eax+4]
0x761AFE: fld     dword ptr [ecx+18h]
0x761B01: fmul    st, st(1)
0x761B03: fstp    dword ptr [eax+8]
0x761B06: fld     dword ptr [ecx+4]
0x761B09: fmul    st, st(1)
0x761B0B: fstp    dword ptr [eax+10h]
0x761B0E: fld     dword ptr [ecx+10h]
0x761B11: fmul    st, st(1)
0x761B13: fstp    dword ptr [eax+14h]
0x761B16: fld     dword ptr [ecx+1Ch]
0x761B19: fmul    st, st(1)
0x761B1B: fstp    dword ptr [eax+18h]
0x761B1E: fld     dword ptr [ecx+8]
0x761B21: fmul    st, st(1)
0x761B23: fstp    dword ptr [eax+20h]
0x761B26: fld     dword ptr [ecx+14h]
0x761B29: fmul    st, st(1)
0x761B2B: fstp    dword ptr [eax+24h]
0x761B2E: fmul    dword ptr [ecx+20h]
0x761B31: mov     ecx, [esp+arg_8]
0x761B35: fstp    dword ptr [eax+28h]
0x761B38: fld     dword ptr [ecx]
0x761B3A: fsub    dword ptr ds:0B3F92Ch
0x761B40: fstp    dword ptr [eax+30h]
0x761B43: fld     dword ptr [ecx+4]
0x761B46: fsub    dword ptr ds:0B3F930h
0x761B4C: fstp    dword ptr [eax+34h]
0x761B4F: fld     dword ptr [ecx+8]
0x761B52: fsub    dword ptr ds:0B3F934h
0x761B58: fstp    dword ptr [eax+38h]
0x761B5B: retn
