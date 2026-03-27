0x547770: fld     [esp+arg_0]
0x547774: fabs
0x547776: fstp    [esp+arg_0]
0x54777A: fld     [esp+arg_0]
0x54777E: fld     dword ptr ds:0B371F0h
0x547784: fld     st
0x547786: fsubp   st(2), st
0x547788: fsubr   dword ptr ds:0B371F8h
0x54778E: fdivp   st(1), st
0x547790: fstp    [esp+arg_0]
0x547794: fldz
0x547796: fld     [esp+arg_0]
0x54779A: fcom    st(1)
0x54779C: fnstsw  ax
0x54779E: test    ah, 41h
0x5477A1: jnz     short loc_5477A7
0x5477A3: fstp    st(1)
0x5477A5: jmp     short loc_5477A9
0x5477A7: fstp    st
0x5477A9: fstp    [esp+arg_0]
0x5477AD: fld     [esp+arg_0]
0x5477B1: fcom    qword ptr ds:0A2F928h
0x5477B7: fnstsw  ax
0x5477B9: test    ah, 41h
0x5477BC: jnz     short loc_5477C2
0x5477BE: fstp    st
0x5477C0: fld1
0x5477C2: fstp    [esp+arg_0]
0x5477C6: fld     dword ptr ds:0B371E8h
0x5477CC: fld     dword ptr ds:0B371E0h
0x5477D2: fld     st
0x5477D4: fsubp   st(2), st
0x5477D6: fld     [esp+arg_0]
0x5477DA: fmulp   st(2), st
0x5477DC: faddp   st(1), st
0x5477DE: fstp    [esp+arg_0]
0x5477E2: fld     [esp+arg_0]
0x5477E6: retn
