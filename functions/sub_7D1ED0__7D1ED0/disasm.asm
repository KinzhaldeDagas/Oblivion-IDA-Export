0x7D1ED0: fld     dword ptr [ecx+0DCh]
0x7D1ED6: fld     [esp+arg_0]
0x7D1EDA: fld     st
0x7D1EDC: fucomp  st(2)
0x7D1EDE: fnstsw  ax
0x7D1EE0: fstp    st(1)
0x7D1EE2: test    ah, 44h
0x7D1EE5: jnp     short loc_7D1F5D
0x7D1EE7: cmp     byte ptr [esp+arg_4], 0
0x7D1EEC: jz      short loc_7D1EFF
0x7D1EEE: fld1
0x7D1EF0: fstp    dword ptr [ecx+0E0h]
0x7D1EF6: fstp    dword ptr [ecx+0DCh]
0x7D1EFC: retn    8
0x7D1EFF: fld     dword ptr [ecx+0E0h]
0x7D1F05: fld     dword ptr ds:0B2C680h
0x7D1F0B: fld     st
0x7D1F0D: fdivp   st(2), st
0x7D1F0F: fldz
0x7D1F11: fcom    st(2)
0x7D1F13: fnstsw  ax
0x7D1F15: fld1
0x7D1F17: test    ah, 41h
0x7D1F1A: jz      short loc_7D1F2F
0x7D1F1C: fld     st(3)
0x7D1F1E: fcomp   st(1)
0x7D1F20: fnstsw  ax
0x7D1F22: test    ah, 41h
0x7D1F25: jnz     short loc_7D1F2F
0x7D1F27: fstp    st(3)
0x7D1F29: fstp    st
0x7D1F2B: fld     st(1)
0x7D1F2D: jmp     short loc_7D1F42
0x7D1F2F: fxch    st(1)
0x7D1F31: fcom    st(3)
0x7D1F33: fnstsw  ax
0x7D1F35: test    ah, 41h
0x7D1F38: jnz     short loc_7D1F3E
0x7D1F3A: fstp    st(3)
0x7D1F3C: jmp     short loc_7D1F40
0x7D1F3E: fstp    st
0x7D1F40: fxch    st(2)
0x7D1F42: fstp    [esp+arg_4]
0x7D1F46: fld     [esp+arg_4]
0x7D1F4A: fsubp   st(2), st
0x7D1F4C: fmulp   st(1), st
0x7D1F4E: fstp    dword ptr [ecx+0E0h]
0x7D1F54: fstp    dword ptr [ecx+0DCh]
0x7D1F5A: retn    8
0x7D1F5D: fstp    st
0x7D1F5F: retn    8
