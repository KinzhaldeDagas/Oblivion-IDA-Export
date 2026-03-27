0x4121D0: mov     eax, ecx
0x4121D2: mov     ecx, [esp+arg_0]
0x4121D6: fld     dword ptr [ecx]
0x4121D8: fadd    dword ptr [eax]
0x4121DA: fstp    dword ptr [eax]
0x4121DC: fld     dword ptr [ecx+4]
0x4121DF: fadd    dword ptr [eax+4]
0x4121E2: fstp    dword ptr [eax+4]
0x4121E5: fld     dword ptr [ecx+8]
0x4121E8: fadd    dword ptr [eax+8]
0x4121EB: fstp    dword ptr [eax+8]
0x4121EE: retn    4
