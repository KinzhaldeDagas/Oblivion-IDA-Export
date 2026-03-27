0x47DD50: mov     eax, ecx
0x47DD52: mov     ecx, [esp+arg_0]
0x47DD56: fld     dword ptr [ecx]
0x47DD58: fld     qword ptr ds:0A39088h
0x47DD5E: fmul    st(1), st
0x47DD60: fxch    st(1)
0x47DD62: fstp    dword ptr [eax]
0x47DD64: fld     dword ptr [ecx+4]
0x47DD67: fmul    st, st(1)
0x47DD69: fstp    dword ptr [eax+4]
0x47DD6C: fmul    dword ptr [ecx+8]
0x47DD6F: fstp    dword ptr [eax+8]
0x47DD72: fldz
0x47DD74: fstp    dword ptr [eax+0Ch]
0x47DD77: retn    4
