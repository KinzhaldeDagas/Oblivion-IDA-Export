0x47D9E0: mov     eax, [esp+arg_0]
0x47D9E4: fld     dword ptr [eax+4]
0x47D9E7: fmul    dword ptr [ecx+4]
0x47D9EA: fld     dword ptr [eax]
0x47D9EC: fmul    dword ptr [ecx]
0x47D9EE: faddp   st(1), st
0x47D9F0: fld     dword ptr [eax+8]
0x47D9F3: fmul    dword ptr [ecx+8]
0x47D9F6: faddp   st(1), st
0x47D9F8: fstp    [esp+arg_0]
0x47D9FC: fld     [esp+arg_0]
0x47DA00: retn    4
