0x7F4DE0: fld     [esp+arg_0]
0x7F4DE4: fldz
0x7F4DE6: fcom    st(1)
0x7F4DE8: fnstsw  ax
0x7F4DEA: fldz
0x7F4DEC: test    ah, 41h
0x7F4DEF: jnz     short loc_7F4DF7
0x7F4DF1: fst     [esp+arg_0]
0x7F4DF5: jmp     short loc_7F4DFF
0x7F4DF7: fxch    st(2)
0x7F4DF9: fst     [esp+arg_0]
0x7F4DFD: fxch    st(2)
0x7F4DFF: fld     [esp+arg_0]
0x7F4E03: fcomp   qword ptr ds:0A2F928h
0x7F4E09: fnstsw  ax
0x7F4E0B: test    ah, 41h
0x7F4E0E: jnz     short loc_7F4E1A
0x7F4E10: fstp    st(2)
0x7F4E12: fstp    st
0x7F4E14: fstp    st
0x7F4E16: fld1
0x7F4E18: jmp     short loc_7F4E2B
0x7F4E1A: fxch    st(1)
0x7F4E1C: fcomp   st(2)
0x7F4E1E: fnstsw  ax
0x7F4E20: test    ah, 41h
0x7F4E23: jnz     short loc_7F4E29
0x7F4E25: fstp    st(1)
0x7F4E27: jmp     short loc_7F4E2B
0x7F4E29: fstp    st
0x7F4E2B: fstp    dword ptr ds:0B46914h
0x7F4E31: fld     [esp+arg_4]
0x7F4E35: fstp    dword ptr ds:0B46918h
0x7F4E3B: fld     [esp+arg_8]
0x7F4E3F: fstp    dword ptr ds:0B4691Ch
0x7F4E45: fld     [esp+arg_C]
0x7F4E49: fstp    dword ptr ds:0B46920h
0x7F4E4F: retn
