0x57E390: sub     esp, 8
0x57E393: fild    dword ptr ds:0B06C4Ch
0x57E399: fstp    [esp+8+var_4]
0x57E39D: fild    dword ptr ds:0B06C50h
0x57E3A3: fstp    [esp+8+var_8]
0x57E3A6: fld     [esp+8+var_8]
0x57E3A9: fld     [esp+8+var_4]
0x57E3AD: fcom    st(1)
0x57E3AF: fnstsw  ax
0x57E3B1: test    ah, 5
0x57E3B4: jp      short loc_57E3C0
0x57E3B6: fdivp   st(1), st
0x57E3B8: fmul    qword ptr ds:0A688A0h
0x57E3BE: jmp     short loc_57E3CA
0x57E3C0: fstp    st(1)
0x57E3C2: fstp    st
0x57E3C4: fld     dword ptr ds:0A68D78h
0x57E3CA: fstp    [esp+8+var_8]
0x57E3CD: fld     [esp+8+var_8]
0x57E3D0: fchs
0x57E3D2: fmul    qword ptr ds:0A2FAA0h
0x57E3D8: fstp    [esp+8+var_4]
0x57E3DC: fld     [esp+8+var_4]
0x57E3E0: add     esp, 8
0x57E3E3: retn
