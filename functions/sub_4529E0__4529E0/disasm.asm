0x4529E0: mov     ecx, [esp+arg_4]
0x4529E4: fld     dword ptr [ecx]
0x4529E6: mov     eax, [esp+arg_0]
0x4529EA: fld     qword ptr ds:0A39088h
0x4529F0: fmul    st(1), st
0x4529F2: fxch    st(1)
0x4529F4: fstp    dword ptr [eax]
0x4529F6: fld     dword ptr [ecx+4]
0x4529F9: fmul    st, st(1)
0x4529FB: fstp    dword ptr [eax+4]
0x4529FE: fmul    dword ptr [ecx+8]
0x452A01: fstp    dword ptr [eax+8]
0x452A04: retn
