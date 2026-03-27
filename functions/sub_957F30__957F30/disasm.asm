0x957F30: mov     eax, [esp+arg_0]
0x957F34: fld     dword ptr [eax+0Ch]
0x957F37: mov     edx, [eax]
0x957F39: fadd    dword ptr [eax+8]
0x957F3C: cmp     edx, [eax+4]
0x957F3F: fmul    dword ptr ds:0A3D65Ch
0x957F45: fsubr   dword ptr [eax+38h]
0x957F48: jge     short loc_957F81
0x957F4A: fld     dword ptr [eax+0Ch]
0x957F4D: fsub    dword ptr [eax+8]
0x957F50: fld     dword ptr [ecx+1Ch]
0x957F53: fcom    st(1)
0x957F55: fnstsw  ax
0x957F57: test    ah, 5
0x957F5A: jnp     short loc_957F60
0x957F5C: fstp    st
0x957F5E: fld     st
0x957F60: faddp   st(1), st
0x957F62: fcom    dword ptr ds:0A2FAA8h
0x957F68: fnstsw  ax
0x957F6A: test    ah, 41h
0x957F6D: jnz     short loc_957F77
0x957F6F: fdivr   dword ptr ds:0A2F948h
0x957F75: jmp     short loc_957F84
0x957F77: fstp    st
0x957F79: fld     dword ptr ds:0AA3584h
0x957F7F: jmp     short loc_957F84
0x957F81: fld     dword ptr [eax+10h]
0x957F84: fmulp   st(1), st
0x957F86: fcom    dword ptr ds:0A2FAA8h
0x957F8C: fnstsw  ax
0x957F8E: test    ah, 41h
0x957F91: jnz     short loc_957F9E
0x957F93: fstp    st
0x957F95: fld     dword ptr ds:0A2FAA8h
0x957F9B: retn    4
0x957F9E: fld     st
0x957FA0: fmulp   st(1), st
0x957FA2: fld     st
0x957FA4: fmul    st, st(1)
0x957FA6: fld     st
0x957FA8: fmul    st, st(1)
0x957FAA: fmul    dword ptr ds:0A5739Ch
0x957FB0: fxch    st(1)
0x957FB2: fmul    dword ptr ds:0A46C30h
0x957FB8: faddp   st(1), st
0x957FBA: fxch    st(1)
0x957FBC: fmul    dword ptr ds:0AA3580h
0x957FC2: faddp   st(1), st
0x957FC4: fmul    dword ptr [ecx+14h]
0x957FC7: retn    4
