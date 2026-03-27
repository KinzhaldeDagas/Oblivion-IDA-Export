0x4BF9B0: fld     [esp+arg_4]
0x4BF9B4: mov     eax, [esp+arg_0]
0x4BF9B8: fld1
0x4BF9BA: fdivrp  st(1), st
0x4BF9BC: fstp    [esp+arg_4]
0x4BF9C0: fld     dword ptr [ecx]
0x4BF9C2: fld     [esp+arg_4]
0x4BF9C6: fld     st
0x4BF9C8: fmulp   st(2), st
0x4BF9CA: fxch    st(1)
0x4BF9CC: fstp    dword ptr [eax]
0x4BF9CE: fld     dword ptr [ecx+4]
0x4BF9D1: fmul    st, st(1)
0x4BF9D3: fstp    dword ptr [eax+4]
0x4BF9D6: fmul    dword ptr [ecx+8]
0x4BF9D9: fstp    dword ptr [eax+8]
0x4BF9DC: retn    8
