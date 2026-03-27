0x710190: fld     dword ptr [ecx]
0x710192: mov     eax, [esp+arg_0]
0x710196: fld     [esp+arg_4]
0x71019A: fld     st
0x71019C: fmulp   st(2), st
0x71019E: fxch    st(1)
0x7101A0: fstp    dword ptr [eax]
0x7101A2: fld     dword ptr [ecx+4]
0x7101A5: fmul    st, st(1)
0x7101A7: fstp    dword ptr [eax+4]
0x7101AA: fld     dword ptr [ecx+8]
0x7101AD: fmul    st, st(1)
0x7101AF: fstp    dword ptr [eax+8]
0x7101B2: fld     dword ptr [ecx+0Ch]
0x7101B5: fmul    st, st(1)
0x7101B7: fstp    dword ptr [eax+0Ch]
0x7101BA: fld     dword ptr [ecx+10h]
0x7101BD: fmul    st, st(1)
0x7101BF: fstp    dword ptr [eax+10h]
0x7101C2: fld     dword ptr [ecx+14h]
0x7101C5: fmul    st, st(1)
0x7101C7: fstp    dword ptr [eax+14h]
0x7101CA: fld     dword ptr [ecx+18h]
0x7101CD: fmul    st, st(1)
0x7101CF: fstp    dword ptr [eax+18h]
0x7101D2: fld     dword ptr [ecx+1Ch]
0x7101D5: fmul    st, st(1)
0x7101D7: fstp    dword ptr [eax+1Ch]
0x7101DA: fmul    dword ptr [ecx+20h]
0x7101DD: fstp    dword ptr [eax+20h]
0x7101E0: retn    8
