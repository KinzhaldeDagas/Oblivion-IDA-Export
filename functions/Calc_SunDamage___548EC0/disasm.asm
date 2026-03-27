0x548EC0: fld     [esp+arg_4]
0x548EC4: sub     esp, 8
0x548EC7: fld     [esp+8+arg_8]
0x548ECB: fcom    st(1)
0x548ECD: fnstsw  ax
0x548ECF: test    ah, 41h
0x548ED2: jz      loc_548F9A
0x548ED8: fld     [esp+8+arg_C]
0x548EDC: fcom    st(2)
0x548EDE: fnstsw  ax
0x548EE0: test    ah, 5
0x548EE3: jnp     loc_548F98
0x548EE9: fld     dword ptr ds:0A2F918h
0x548EEF: fcomp   st(3)
0x548EF1: fnstsw  ax
0x548EF3: test    ah, 5
0x548EF6: jp      short loc_548EFC
0x548EF8: fstp    st(1)
0x548EFA: jmp     short loc_548EFE
0x548EFC: fstp    st
0x548EFE: fld     qword ptr ds:0A2F910h
0x548F04: fld     st
0x548F06: fsubrp  st(3), st
0x548F08: fsubrp  st(1), st
0x548F0A: fdivp   st(1), st
0x548F0C: fstp    [esp+8+arg_4]
0x548F10: fld     [esp+8+arg_4]
0x548F14: fld     qword ptr ds:0A3C800h
0x548F1A: call    __CIpow
0x548F1F: fstp    [esp+8+arg_4]
0x548F23: cmp     [esp+8+arg_10], 0
0x548F28: fld     [esp+8+arg_4]
0x548F2C: fld1
0x548F2E: fld     st
0x548F30: fsubrp  st(2), st
0x548F32: fxch    st(1)
0x548F34: fstp    [esp+8+arg_4]
0x548F38: fld     dword ptr ds:0B37FB0h
0x548F3E: fld     st
0x548F40: fsubp   st(2), st
0x548F42: fld     [esp+8+arg_14]
0x548F46: fmulp   st(2), st
0x548F48: faddp   st(1), st
0x548F4A: fstp    [esp+8+var_4]
0x548F4E: fld1
0x548F50: jnz     short loc_548F5D
0x548F52: fld     dword ptr ds:0B37FA8h
0x548F58: fstp    [esp+8+var_8]
0x548F5B: jmp     short loc_548F60
0x548F5D: fst     [esp+8+var_8]
0x548F60: cmp     [esp+8+arg_18], 0
0x548F65: jz      short loc_548F6F
0x548F67: fstp    st
0x548F69: fld     dword ptr ds:0B37FA0h
0x548F6F: fstp    [esp+8+arg_8]
0x548F73: fld     dword ptr ds:0B37F98h
0x548F79: fmul    [esp+8+arg_0]
0x548F7D: fmul    [esp+8+arg_4]
0x548F81: fmul    [esp+8+var_4]
0x548F85: fmul    [esp+8+arg_8]
0x548F89: fmul    [esp+8+var_8]
0x548F8C: fstp    [esp+8+arg_4]
0x548F90: fld     [esp+8+arg_4]
0x548F94: add     esp, 8
0x548F97: retn
0x548F98: fstp    st(2)
0x548F9A: fstp    st(1)
0x548F9C: fstp    st
0x548F9E: fldz
0x548FA0: add     esp, 8
0x548FA3: retn
