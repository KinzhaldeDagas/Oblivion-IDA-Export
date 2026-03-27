0x716E00: mov     eax, ecx
0x716E02: mov     ecx, [esp+arg_0]
0x716E06: mov     edx, [ecx]
0x716E08: mov     [eax], edx
0x716E0A: mov     edx, [ecx+4]
0x716E0D: mov     [eax+4], edx
0x716E10: mov     edx, [ecx+8]
0x716E13: mov     [eax+8], edx
0x716E16: fld     dword ptr [ecx+4]
0x716E19: mov     edx, [esp+arg_4]
0x716E1D: fmul    dword ptr [edx+4]
0x716E20: fld     dword ptr [ecx]
0x716E22: fmul    dword ptr [edx]
0x716E24: faddp   st(1), st
0x716E26: fld     dword ptr [ecx+8]
0x716E29: fmul    dword ptr [edx+8]
0x716E2C: faddp   st(1), st
0x716E2E: fstp    dword ptr [eax+0Ch]
0x716E31: retn    8
