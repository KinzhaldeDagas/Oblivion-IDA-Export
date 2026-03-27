0x775F60: mov     eax, [esp+arg_0]
0x775F64: mov     edx, [ecx]
0x775F66: mov     [eax], edx
0x775F68: mov     edx, [ecx+4]
0x775F6B: mov     ecx, [ecx+8]
0x775F6E: mov     [eax+4], edx
0x775F71: mov     [eax+8], ecx
0x775F74: fld     dword ptr [eax]
0x775F76: fld     [esp+arg_4]
0x775F7A: fld     st
0x775F7C: fmulp   st(2), st
0x775F7E: fxch    st(1)
0x775F80: fstp    dword ptr [eax]
0x775F82: fld     st
0x775F84: fmul    dword ptr [eax+4]
0x775F87: fstp    dword ptr [eax+4]
0x775F8A: fmul    dword ptr [eax+8]
0x775F8D: fstp    dword ptr [eax+8]
0x775F90: retn    8
