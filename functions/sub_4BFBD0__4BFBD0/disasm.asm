0x4BFBD0: mov     eax, [esp+arg_0]
0x4BFBD4: mov     ecx, [esp+arg_8]
0x4BFBD8: mov     edx, [ecx]
0x4BFBDA: mov     [eax], edx
0x4BFBDC: mov     edx, [ecx+4]
0x4BFBDF: mov     [eax+4], edx
0x4BFBE2: mov     edx, [ecx+8]
0x4BFBE5: mov     ecx, [ecx+0Ch]
0x4BFBE8: mov     [eax+8], edx
0x4BFBEB: mov     [eax+0Ch], ecx
0x4BFBEE: fld     dword ptr [eax]
0x4BFBF0: fld     [esp+arg_4]
0x4BFBF4: fld     st
0x4BFBF6: fmulp   st(2), st
0x4BFBF8: fxch    st(1)
0x4BFBFA: fstp    dword ptr [eax]
0x4BFBFC: fld     st
0x4BFBFE: fmul    dword ptr [eax+4]
0x4BFC01: fstp    dword ptr [eax+4]
0x4BFC04: fld     dword ptr [eax+8]
0x4BFC07: fmul    st, st(1)
0x4BFC09: fstp    dword ptr [eax+8]
0x4BFC0C: fmul    dword ptr [eax+0Ch]
0x4BFC0F: fstp    dword ptr [eax+0Ch]
0x4BFC12: retn
