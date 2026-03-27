0x47F6F0: mov     eax, [esp+arg_0]
0x47F6F4: fld     dword ptr [eax+4]
0x47F6F7: fld     dword ptr [eax]
0x47F6F9: fld     dword ptr [eax+8]
0x47F6FC: fld     st(1)
0x47F6FE: fmulp   st(2), st
0x47F700: fld     st(2)
0x47F702: fmulp   st(3), st
0x47F704: fxch    st(1)
0x47F706: faddp   st(2), st
0x47F708: fmul    st, st
0x47F70A: faddp   st(1), st
0x47F70C: fstp    [esp+arg_0]
0x47F710: fld     [esp+arg_4]
0x47F714: fmul    st, st
0x47F716: fstp    [esp+arg_4]
0x47F71A: fld     [esp+arg_0]
0x47F71E: fld     [esp+arg_4]
0x47F722: fcom    st(1)
0x47F724: fnstsw  ax
0x47F726: test    ah, 41h
0x47F729: jnz     short loc_47F733
0x47F72B: fstp    st(1)
0x47F72D: or      eax, 0FFFFFFFFh
0x47F730: fstp    st
0x47F732: retn
0x47F733: fcompp
0x47F735: fnstsw  ax
0x47F737: test    ah, 5
0x47F73A: jp      short loc_47F742
0x47F73C: mov     eax, 1
0x47F741: retn
0x47F742: xor     eax, eax
0x47F744: retn
