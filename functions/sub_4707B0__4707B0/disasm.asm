0x4707B0: fld     dword ptr [ecx]
0x4707B2: mov     eax, [esp+arg_0]
0x4707B6: fld     [esp+arg_4]
0x4707BA: fld     st
0x4707BC: fmulp   st(2), st
0x4707BE: fxch    st(1)
0x4707C0: fstp    dword ptr [eax]
0x4707C2: fld     dword ptr [ecx+4]
0x4707C5: fmul    st, st(1)
0x4707C7: fstp    dword ptr [eax+4]
0x4707CA: fmul    dword ptr [ecx+8]
0x4707CD: fstp    dword ptr [eax+8]
0x4707D0: retn    8
