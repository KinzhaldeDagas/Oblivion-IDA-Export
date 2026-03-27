0x7101F0: mov     edx, [esp+arg_4]
0x7101F4: fld     dword ptr [ecx+4]
0x7101F7: fmul    dword ptr [edx+4]
0x7101FA: mov     eax, [esp+arg_0]
0x7101FE: fld     dword ptr [edx]
0x710200: fmul    dword ptr [ecx]
0x710202: faddp   st(1), st
0x710204: fld     dword ptr [ecx+8]
0x710207: fmul    dword ptr [edx+8]
0x71020A: faddp   st(1), st
0x71020C: fstp    dword ptr [eax]
0x71020E: fld     dword ptr [ecx+0Ch]
0x710211: fmul    dword ptr [edx]
0x710213: fld     dword ptr [ecx+10h]
0x710216: fmul    dword ptr [edx+4]
0x710219: faddp   st(1), st
0x71021B: fld     dword ptr [ecx+14h]
0x71021E: fmul    dword ptr [edx+8]
0x710221: faddp   st(1), st
0x710223: fstp    dword ptr [eax+4]
0x710226: fld     dword ptr [ecx+18h]
0x710229: fmul    dword ptr [edx]
0x71022B: fld     dword ptr [ecx+1Ch]
0x71022E: fmul    dword ptr [edx+4]
0x710231: faddp   st(1), st
0x710233: fld     dword ptr [ecx+20h]
0x710236: fmul    dword ptr [edx+8]
0x710239: faddp   st(1), st
0x71023B: fstp    dword ptr [eax+8]
0x71023E: retn    8
