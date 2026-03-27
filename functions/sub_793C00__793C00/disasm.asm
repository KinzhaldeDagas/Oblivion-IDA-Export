0x793C00: mov     eax, [esp+arg_0]
0x793C04: fld     dword ptr [eax]
0x793C06: fstp    dword ptr [ecx+18h]
0x793C09: fld     dword ptr [eax+4]
0x793C0C: fstp    [esp+arg_0]
0x793C10: fld     [esp+arg_0]
0x793C14: fst     dword ptr [ecx+1Ch]
0x793C17: fld     dword ptr [eax+18h]
0x793C1A: fmul    qword ptr ds:0A49310h
0x793C20: fmulp   st(1), st
0x793C22: fstp    dword ptr [ecx+20h]
0x793C25: fld     dword ptr [eax+18h]
0x793C28: fmul    qword ptr ds:0A3F418h
0x793C2E: fmul    dword ptr [ecx+18h]
0x793C31: fstp    dword ptr [ecx+24h]
0x793C34: fld     dword ptr [eax+18h]
0x793C37: fstp    dword ptr [ecx+4]
0x793C3A: retn    4
