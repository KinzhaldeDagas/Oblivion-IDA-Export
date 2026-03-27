0x57E3F0: sub     esp, 8
0x57E3F3: fild    dword ptr ds:0B06C4Ch
0x57E3F9: fstp    [esp+8+var_4]
0x57E3FD: fild    dword ptr ds:0B06C50h
0x57E403: fstp    [esp+8+var_8]
0x57E406: fld     [esp+8+var_8]
0x57E409: fld     [esp+8+var_4]
0x57E40D: fcom    st(1)
0x57E40F: fnstsw  ax
0x57E411: test    ah, 5
0x57E414: jp      short loc_57E420
0x57E416: fdivp   st(1), st
0x57E418: fmul    qword ptr ds:0A688A0h
0x57E41E: jmp     short loc_57E42A
0x57E420: fstp    st(1)
0x57E422: fstp    st
0x57E424: fld     dword ptr ds:0A68D78h
0x57E42A: fstp    [esp+8+var_8]
0x57E42D: fld     [esp+8+var_8]
0x57E430: fmul    qword ptr ds:0A2FAA0h
0x57E436: fstp    [esp+8+var_4]
0x57E43A: fld     [esp+8+var_4]
0x57E43E: add     esp, 8
0x57E441: retn
