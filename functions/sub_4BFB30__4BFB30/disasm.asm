0x4BFB30: mov     eax, [esp+arg_0]
0x4BFB34: mov     edx, [ecx]
0x4BFB36: mov     [eax], edx
0x4BFB38: mov     edx, [ecx+4]
0x4BFB3B: mov     [eax+4], edx
0x4BFB3E: mov     edx, [ecx+8]
0x4BFB41: mov     ecx, [ecx+0Ch]
0x4BFB44: mov     [eax+8], edx
0x4BFB47: mov     [eax+0Ch], ecx
0x4BFB4A: fld     dword ptr [eax]
0x4BFB4C: mov     ecx, [esp+arg_4]
0x4BFB50: fadd    dword ptr [ecx]
0x4BFB52: fstp    dword ptr [eax]
0x4BFB54: fld     dword ptr [ecx+4]
0x4BFB57: fadd    dword ptr [eax+4]
0x4BFB5A: fstp    dword ptr [eax+4]
0x4BFB5D: fld     dword ptr [ecx+8]
0x4BFB60: fadd    dword ptr [eax+8]
0x4BFB63: fstp    dword ptr [eax+8]
0x4BFB66: fld     dword ptr [ecx+0Ch]
0x4BFB69: fadd    dword ptr [eax+0Ch]
0x4BFB6C: fstp    dword ptr [eax+0Ch]
0x4BFB6F: retn    8
