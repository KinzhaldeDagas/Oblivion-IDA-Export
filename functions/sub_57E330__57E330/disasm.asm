0x57E330: sub     esp, 8
0x57E333: fild    dword ptr ds:0B06C4Ch
0x57E339: fstp    [esp+8+var_8]
0x57E33C: fild    dword ptr ds:0B06C50h
0x57E342: fstp    [esp+8+var_4]
0x57E346: fld     [esp+8+var_8]
0x57E349: fld     [esp+8+var_4]
0x57E34D: fcom    st(1)
0x57E34F: fnstsw  ax
0x57E351: test    ah, 5
0x57E354: jp      short loc_57E360
0x57E356: fdivp   st(1), st
0x57E358: fmul    qword ptr ds:0A68D70h
0x57E35E: jmp     short loc_57E36A
0x57E360: fstp    st(1)
0x57E362: fstp    st
0x57E364: fld     dword ptr ds:0A688A8h
0x57E36A: fstp    [esp+8+var_8]
0x57E36D: fld     [esp+8+var_8]
0x57E370: fmul    qword ptr ds:0A2FAA0h
0x57E376: fstp    [esp+8+var_4]
0x57E37A: fld     [esp+8+var_4]
0x57E37E: add     esp, 8
0x57E381: retn
