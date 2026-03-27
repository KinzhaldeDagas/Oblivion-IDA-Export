0x57E2D0: sub     esp, 8
0x57E2D3: fild    dword ptr ds:0B06C4Ch
0x57E2D9: fstp    [esp+8+var_8]
0x57E2DC: fild    dword ptr ds:0B06C50h
0x57E2E2: fstp    [esp+8+var_4]
0x57E2E6: fld     [esp+8+var_8]
0x57E2E9: fld     [esp+8+var_4]
0x57E2ED: fcom    st(1)
0x57E2EF: fnstsw  ax
0x57E2F1: test    ah, 5
0x57E2F4: jp      short loc_57E300
0x57E2F6: fdivp   st(1), st
0x57E2F8: fmul    qword ptr ds:0A68D70h
0x57E2FE: jmp     short loc_57E30A
0x57E300: fstp    st(1)
0x57E302: fstp    st
0x57E304: fld     dword ptr ds:0A688A8h
0x57E30A: fstp    [esp+8+var_8]
0x57E30D: fld     [esp+8+var_8]
0x57E310: fchs
0x57E312: fmul    qword ptr ds:0A2FAA0h
0x57E318: fstp    [esp+8+var_4]
0x57E31C: fld     [esp+8+var_4]
0x57E320: add     esp, 8
0x57E323: retn
