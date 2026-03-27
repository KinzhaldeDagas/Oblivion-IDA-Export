0x4BFB80: mov     eax, [esp+arg_0]
0x4BFB84: mov     edx, [ecx]
0x4BFB86: mov     [eax], edx
0x4BFB88: mov     edx, [ecx+4]
0x4BFB8B: mov     [eax+4], edx
0x4BFB8E: mov     edx, [ecx+8]
0x4BFB91: mov     ecx, [ecx+0Ch]
0x4BFB94: mov     [eax+8], edx
0x4BFB97: mov     [eax+0Ch], ecx
0x4BFB9A: fld     dword ptr [eax]
0x4BFB9C: fld     [esp+arg_4]
0x4BFBA0: fld     st
0x4BFBA2: fmulp   st(2), st
0x4BFBA4: fxch    st(1)
0x4BFBA6: fstp    dword ptr [eax]
0x4BFBA8: fld     st
0x4BFBAA: fmul    dword ptr [eax+4]
0x4BFBAD: fstp    dword ptr [eax+4]
0x4BFBB0: fld     dword ptr [eax+8]
0x4BFBB3: fmul    st, st(1)
0x4BFBB5: fstp    dword ptr [eax+8]
0x4BFBB8: fmul    dword ptr [eax+0Ch]
0x4BFBBB: fstp    dword ptr [eax+0Ch]
0x4BFBBE: retn    8
