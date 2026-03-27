0x710250: mov     edx, [esp+arg_8]
0x710254: mov     ecx, [esp+arg_4]
0x710258: fld     dword ptr [edx+0Ch]
0x71025B: fmul    dword ptr [ecx+4]
0x71025E: mov     eax, [esp+arg_0]
0x710262: fld     dword ptr [ecx]
0x710264: fmul    dword ptr [edx]
0x710266: faddp   st(1), st
0x710268: fld     dword ptr [edx+18h]
0x71026B: fmul    dword ptr [ecx+8]
0x71026E: faddp   st(1), st
0x710270: fstp    dword ptr [eax]
0x710272: fld     dword ptr [edx+4]
0x710275: fmul    dword ptr [ecx]
0x710277: fld     dword ptr [edx+10h]
0x71027A: fmul    dword ptr [ecx+4]
0x71027D: faddp   st(1), st
0x71027F: fld     dword ptr [edx+1Ch]
0x710282: fmul    dword ptr [ecx+8]
0x710285: faddp   st(1), st
0x710287: fstp    dword ptr [eax+4]
0x71028A: fld     dword ptr [edx+8]
0x71028D: fmul    dword ptr [ecx]
0x71028F: fld     dword ptr [edx+14h]
0x710292: fmul    dword ptr [ecx+4]
0x710295: faddp   st(1), st
0x710297: fld     dword ptr [edx+20h]
0x71029A: fmul    dword ptr [ecx+8]
0x71029D: faddp   st(1), st
0x71029F: fstp    dword ptr [eax+8]
0x7102A2: retn
