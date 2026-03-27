0x761BE0: mov     ecx, [esp+arg_4]
0x761BE4: fld     dword ptr [ecx]
0x761BE6: mov     eax, [esp+arg_0]
0x761BEA: fld     [esp+arg_C]
0x761BEE: fld     st
0x761BF0: fmulp   st(2), st
0x761BF2: fxch    st(1)
0x761BF4: fstp    dword ptr [eax]
0x761BF6: fld     dword ptr [ecx+0Ch]
0x761BF9: fmul    st, st(1)
0x761BFB: fstp    dword ptr [eax+4]
0x761BFE: fld     dword ptr [ecx+18h]
0x761C01: fmul    st, st(1)
0x761C03: fstp    dword ptr [eax+8]
0x761C06: fld     dword ptr [ecx+4]
0x761C09: fmul    st, st(1)
0x761C0B: fstp    dword ptr [eax+10h]
0x761C0E: fld     dword ptr [ecx+10h]
0x761C11: fmul    st, st(1)
0x761C13: fstp    dword ptr [eax+14h]
0x761C16: fld     dword ptr [ecx+1Ch]
0x761C19: fmul    st, st(1)
0x761C1B: fstp    dword ptr [eax+18h]
0x761C1E: fld     dword ptr [ecx+8]
0x761C21: fmul    st, st(1)
0x761C23: fstp    dword ptr [eax+20h]
0x761C26: fld     dword ptr [ecx+14h]
0x761C29: fmul    st, st(1)
0x761C2B: fstp    dword ptr [eax+24h]
0x761C2E: fmul    dword ptr [ecx+20h]
0x761C31: mov     ecx, [esp+arg_8]
0x761C35: fstp    dword ptr [eax+28h]
0x761C38: fld     dword ptr [ecx]
0x761C3A: fstp    dword ptr [eax+30h]
0x761C3D: fld     dword ptr [ecx+4]
0x761C40: fstp    dword ptr [eax+34h]
0x761C43: fld     dword ptr [ecx+8]
0x761C46: fstp    dword ptr [eax+38h]
0x761C49: retn
