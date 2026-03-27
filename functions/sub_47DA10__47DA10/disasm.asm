0x47DA10: mov     ecx, [esp+arg_8]
0x47DA14: fld     dword ptr [ecx]
0x47DA16: mov     eax, [esp+arg_0]
0x47DA1A: fld     [esp+arg_4]
0x47DA1E: fld     st
0x47DA20: fmulp   st(2), st
0x47DA22: fxch    st(1)
0x47DA24: fstp    dword ptr [eax]
0x47DA26: fld     dword ptr [ecx+4]
0x47DA29: fmul    st, st(1)
0x47DA2B: fstp    dword ptr [eax+4]
0x47DA2E: fmul    dword ptr [ecx+8]
0x47DA31: fstp    dword ptr [eax+8]
0x47DA34: retn
