0x4EC870: push    ecx
0x4EC871: fldz
0x4EC873: fst     [esp+4+var_4]
0x4EC876: fld     [esp+4+arg_C]
0x4EC87A: fld     [esp+4+arg_0]
0x4EC87E: fcom    st(1)
0x4EC880: fnstsw  ax
0x4EC882: fld     [esp+4+arg_8]
0x4EC886: test    ah, 5
0x4EC889: jp      short loc_4EC8A1
0x4EC88B: fld     st
0x4EC88D: faddp   st(2), st
0x4EC88F: fxch    st(2)
0x4EC891: fcom    st(1)
0x4EC893: fnstsw  ax
0x4EC895: test    ah, 41h
0x4EC898: jnz     short loc_4EC8AC
0x4EC89A: fsubrp  st(1), st
0x4EC89C: fstp    [esp+4+var_4]
0x4EC89F: jmp     short loc_4EC8B0
0x4EC8A1: fxch    st(1)
0x4EC8A3: fsubrp  st(2), st
0x4EC8A5: fxch    st(1)
0x4EC8A7: fstp    [esp+4+var_4]
0x4EC8AA: jmp     short loc_4EC8B0
0x4EC8AC: fstp    st
0x4EC8AE: fstp    st
0x4EC8B0: fxch    st(1)
0x4EC8B2: fstp    [esp+4+arg_8]
0x4EC8B6: fld     [esp+4+arg_10]
0x4EC8BA: fld     [esp+4+arg_4]
0x4EC8BE: fcom    st(1)
0x4EC8C0: fnstsw  ax
0x4EC8C2: test    ah, 5
0x4EC8C5: jp      short loc_4EC8DA
0x4EC8C7: faddp   st(2), st
0x4EC8C9: fcom    st(1)
0x4EC8CB: fnstsw  ax
0x4EC8CD: test    ah, 41h
0x4EC8D0: jnz     short loc_4EC8E4
0x4EC8D2: fsubrp  st(1), st
0x4EC8D4: fstp    [esp+4+arg_8]
0x4EC8D8: jmp     short loc_4EC8E8
0x4EC8DA: fstp    st(2)
0x4EC8DC: fsubp   st(1), st
0x4EC8DE: fstp    [esp+4+arg_8]
0x4EC8E2: jmp     short loc_4EC8E8
0x4EC8E4: fstp    st
0x4EC8E6: fstp    st
0x4EC8E8: fld     [esp+4+arg_8]
0x4EC8EC: fld     [esp+4+var_4]
0x4EC8EF: fmul    st, st
0x4EC8F1: fld     st(1)
0x4EC8F3: fmulp   st(2), st
0x4EC8F5: faddp   st(1), st
0x4EC8F7: fstp    [esp+4+arg_8]
0x4EC8FB: fld     [esp+4+arg_8]
0x4EC8FF: call    __CIsqrt
0x4EC904: fstp    [esp+4+arg_8]
0x4EC908: fld     [esp+4+arg_8]
0x4EC90C: pop     ecx
0x4EC90D: retn    14h
