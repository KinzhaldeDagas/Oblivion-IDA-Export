0x57D7F0: sub     esp, 8
0x57D7F3: fild    dword ptr ds:0B06C4Ch
0x57D7F9: fstp    [esp+8+var_4]
0x57D7FD: fild    dword ptr ds:0B06C50h
0x57D803: fstp    [esp+8+var_8]
0x57D806: fld     [esp+8+var_8]
0x57D809: fld     [esp+8+var_4]
0x57D80D: fcom    st(1)
0x57D80F: fnstsw  ax
0x57D811: test    ah, 5
0x57D814: jp      short loc_57D82A
0x57D816: fdivp   st(1), st
0x57D818: fmul    qword ptr ds:0A688A0h
0x57D81E: fstp    [esp+8+var_4]
0x57D822: fld     [esp+8+var_4]
0x57D826: add     esp, 8
0x57D829: retn
0x57D82A: fstp    st(1)
0x57D82C: fstp    st
0x57D82E: fld     dword ptr ds:0A68D78h
0x57D834: add     esp, 8
0x57D837: retn
