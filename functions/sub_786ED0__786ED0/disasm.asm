0x786ED0: mov     edx, [esp+arg_4]
0x786ED4: fld     dword ptr [edx+10h]
0x786ED7: mov     eax, [esp+arg_0]
0x786EDB: fmul    dword ptr [ecx+4]
0x786EDE: fld     dword ptr [edx]
0x786EE0: fmul    dword ptr [ecx]
0x786EE2: faddp   st(1), st
0x786EE4: fld     dword ptr [edx+20h]
0x786EE7: fmul    dword ptr [ecx+8]
0x786EEA: faddp   st(1), st
0x786EEC: fadd    dword ptr [edx+30h]
0x786EEF: fstp    dword ptr [eax]
0x786EF1: fld     dword ptr [edx+4]
0x786EF4: fmul    dword ptr [ecx]
0x786EF6: fld     dword ptr [edx+14h]
0x786EF9: fmul    dword ptr [ecx+4]
0x786EFC: faddp   st(1), st
0x786EFE: fld     dword ptr [edx+24h]
0x786F01: fmul    dword ptr [ecx+8]
0x786F04: faddp   st(1), st
0x786F06: fadd    dword ptr [edx+34h]
0x786F09: fstp    dword ptr [eax+4]
0x786F0C: fld     dword ptr [edx+8]
0x786F0F: fmul    dword ptr [ecx]
0x786F11: fld     dword ptr [edx+18h]
0x786F14: fmul    dword ptr [ecx+4]
0x786F17: faddp   st(1), st
0x786F19: fld     dword ptr [edx+28h]
0x786F1C: fmul    dword ptr [ecx+8]
0x786F1F: faddp   st(1), st
0x786F21: fadd    dword ptr [edx+38h]
0x786F24: fstp    dword ptr [eax+8]
0x786F27: retn    8
