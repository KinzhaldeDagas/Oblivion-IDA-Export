0x498FE0: mov     edx, [esp+arg_4]
0x498FE4: fld     dword ptr [edx+8]
0x498FE7: mov     eax, [esp+arg_0]
0x498FEB: fmul    dword ptr [ecx+4]
0x498FEE: fld     dword ptr [edx+4]
0x498FF1: fmul    dword ptr [ecx+8]
0x498FF4: fsubp   st(1), st
0x498FF6: fstp    dword ptr [eax]
0x498FF8: fld     dword ptr [ecx+8]
0x498FFB: fmul    dword ptr [edx]
0x498FFD: fld     dword ptr [ecx]
0x498FFF: fmul    dword ptr [edx+8]
0x499002: fsubp   st(1), st
0x499004: fstp    dword ptr [eax+4]
0x499007: fld     dword ptr [edx+4]
0x49900A: fmul    dword ptr [ecx]
0x49900C: fld     dword ptr [edx]
0x49900E: fmul    dword ptr [ecx+4]
0x499011: fsubp   st(1), st
0x499013: fstp    dword ptr [eax+8]
0x499016: retn    8
