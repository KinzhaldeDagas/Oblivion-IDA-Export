0x4707E0: fld     [esp+arg_0]
0x4707E4: mov     eax, ecx
0x4707E6: fld1
0x4707E8: fdivrp  st(1), st
0x4707EA: fstp    [esp+arg_0]
0x4707EE: fld     dword ptr [eax]
0x4707F0: fld     [esp+arg_0]
0x4707F4: fld     st
0x4707F6: fmulp   st(2), st
0x4707F8: fxch    st(1)
0x4707FA: fstp    dword ptr [eax]
0x4707FC: fld     dword ptr [eax+4]
0x4707FF: fmul    st, st(1)
0x470801: fstp    dword ptr [eax+4]
0x470804: fmul    dword ptr [eax+8]
0x470807: fstp    dword ptr [eax+8]
0x47080A: retn    4
