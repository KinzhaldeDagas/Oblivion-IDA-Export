0x57D7A0: sub     esp, 8
0x57D7A3: fild    dword ptr ds:0B06C4Ch
0x57D7A9: fstp    [esp+8+var_8]
0x57D7AC: fild    dword ptr ds:0B06C50h
0x57D7B2: fstp    [esp+8+var_4]
0x57D7B6: fld     [esp+8+var_8]
0x57D7B9: fld     [esp+8+var_4]
0x57D7BD: fcom    st(1)
0x57D7BF: fnstsw  ax
0x57D7C1: test    ah, 5
0x57D7C4: jp      short loc_57D7DA
0x57D7C6: fdivp   st(1), st
0x57D7C8: fmul    qword ptr ds:0A68D70h
0x57D7CE: fstp    [esp+8+var_4]
0x57D7D2: fld     [esp+8+var_4]
0x57D7D6: add     esp, 8
0x57D7D9: retn
0x57D7DA: fstp    st(1)
0x57D7DC: fstp    st
0x57D7DE: fld     dword ptr ds:0A688A8h
0x57D7E4: add     esp, 8
0x57D7E7: retn
