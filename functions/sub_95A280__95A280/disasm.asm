0x95A280: mov     eax, [esp+arg_0]
0x95A284: mov     ecx, [esp+arg_8]
0x95A288: mov     edx, [ecx]
0x95A28A: mov     ecx, [ecx+4]
0x95A28D: mov     [eax], edx
0x95A28F: fld     dword ptr [eax]
0x95A291: fld     [esp+arg_4]
0x95A295: mov     [eax+4], ecx
0x95A298: fld     st
0x95A29A: fmulp   st(2), st
0x95A29C: fxch    st(1)
0x95A29E: fstp    dword ptr [eax]
0x95A2A0: fmul    dword ptr [eax+4]
0x95A2A3: fstp    dword ptr [eax+4]
0x95A2A6: retn
