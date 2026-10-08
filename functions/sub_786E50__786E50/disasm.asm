0x786E50: mov     eax, [esp+other]; Oblivion 1.2.0.416: stVec3 distance using squared component deltas followed by the IEEE bit approximation (bits>>1)+0x1FC00000. RT4.1 stVec3::Distance and _idv_sqrt1 corroborate the exact formula.
0x786E54: fld     dword ptr [eax+4]
0x786E57: fsub    dword ptr [ecx+4]
0x786E5A: fld     dword ptr [eax]
0x786E5C: fsub    dword ptr [ecx]
0x786E5E: fld     dword ptr [eax+8]
0x786E61: fsub    dword ptr [ecx+8]
0x786E64: fld     st(1)
0x786E66: fmulp   st(2), st
0x786E68: fld     st(2)
0x786E6A: fmulp   st(3), st
0x786E6C: fxch    st(1)
0x786E6E: faddp   st(2), st
0x786E70: fmul    st, st
0x786E72: faddp   st(1), st
0x786E74: fstp    [esp+other]
0x786E78: mov     eax, [esp+other]
0x786E7C: sar     eax, 1
0x786E7E: add     eax, 1FC00000h
0x786E83: mov     [esp+other], eax
0x786E87: fld     [esp+other]
0x786E8B: retn    4
