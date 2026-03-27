0x714CF0: mov     edx, [esp+arg_4]
0x714CF4: fld     dword ptr [edx]
0x714CF6: mov     eax, [esp+arg_0]
0x714CFA: fmul    dword ptr [ecx]
0x714CFC: fld     dword ptr [edx+4]
0x714CFF: fmul    dword ptr [ecx+4]
0x714D02: fsubp   st(1), st
0x714D04: fld     dword ptr [edx+8]
0x714D07: fmul    dword ptr [ecx+8]
0x714D0A: fsubp   st(1), st
0x714D0C: fld     dword ptr [edx+0Ch]
0x714D0F: fmul    dword ptr [ecx+0Ch]
0x714D12: fsubp   st(1), st
0x714D14: fstp    dword ptr [eax]
0x714D16: fld     dword ptr [ecx+4]
0x714D19: fmul    dword ptr [edx]
0x714D1B: fld     dword ptr [edx+4]
0x714D1E: fmul    dword ptr [ecx]
0x714D20: faddp   st(1), st
0x714D22: fld     dword ptr [edx+0Ch]
0x714D25: fmul    dword ptr [ecx+8]
0x714D28: faddp   st(1), st
0x714D2A: fld     dword ptr [ecx+0Ch]
0x714D2D: fmul    dword ptr [edx+8]
0x714D30: fsubp   st(1), st
0x714D32: fstp    dword ptr [eax+4]
0x714D35: fld     dword ptr [ecx+8]
0x714D38: fmul    dword ptr [edx]
0x714D3A: fld     dword ptr [edx+8]
0x714D3D: fmul    dword ptr [ecx]
0x714D3F: faddp   st(1), st
0x714D41: fld     dword ptr [edx+4]
0x714D44: fmul    dword ptr [ecx+0Ch]
0x714D47: faddp   st(1), st
0x714D49: fld     dword ptr [edx+0Ch]
0x714D4C: fmul    dword ptr [ecx+4]
0x714D4F: fsubp   st(1), st
0x714D51: fstp    dword ptr [eax+8]
0x714D54: fld     dword ptr [ecx+0Ch]
0x714D57: fmul    dword ptr [edx]
0x714D59: fld     dword ptr [edx+0Ch]
0x714D5C: fmul    dword ptr [ecx]
0x714D5E: faddp   st(1), st
0x714D60: fld     dword ptr [ecx+4]
0x714D63: fmul    dword ptr [edx+8]
0x714D66: faddp   st(1), st
0x714D68: fld     dword ptr [edx+4]
0x714D6B: fmul    dword ptr [ecx+8]
0x714D6E: fsubp   st(1), st
0x714D70: fstp    dword ptr [eax+0Ch]
0x714D73: retn    8
