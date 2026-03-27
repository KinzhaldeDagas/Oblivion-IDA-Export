0x6132D0: fld     [esp+arg_0]
0x6132D4: fld     st
0x6132D6: fmul    [esp+arg_C]
0x6132DA: fmul    st, st(1)
0x6132DC: fld     [esp+arg_8]
0x6132E0: fld     st
0x6132E2: fadd    st, st(1)
0x6132E4: fmulp   st(1), st
0x6132E6: fdivp   st(1), st
0x6132E8: fstp    [esp+arg_C]
0x6132EC: fmul    st, st
0x6132EE: fld     [esp+arg_4]
0x6132F2: fld     st
0x6132F4: fmul    st, st
0x6132F6: fadd    st, st(2)
0x6132F8: fstp    [esp+arg_0]
0x6132FC: fld     [esp+arg_C]
0x613300: fld     qword ptr ds:0A3F400h
0x613306: fmul    st, st(1)
0x613308: fmulp   st(2), st
0x61330A: fxch    st(1)
0x61330C: fsubrp  st(2), st
0x61330E: fxch    st(1)
0x613310: fstp    [esp+arg_C]
0x613314: fld     [esp+arg_C]
0x613318: fmul    st, st
0x61331A: fld     st(1)
0x61331C: fmulp   st(2), st
0x61331E: fxch    st(1)
0x613320: fstp    [esp+arg_8]
0x613324: fld     [esp+arg_8]
0x613328: fld     [esp+arg_0]
0x61332C: fmul    qword ptr ds:0A3C800h
0x613332: fmulp   st(1), st
0x613334: fsubp   st(1), st
0x613336: fstp    [esp+arg_8]
0x61333A: fldz
0x61333C: fld     [esp+arg_8]
0x613340: fcom    st(1)
0x613342: fnstsw  ax
0x613344: fstp    st(1)
0x613346: test    ah, 1
0x613349: jnz     loc_6133F7
0x61334F: call    __CIsqrt
0x613354: fstp    [esp+arg_8]
0x613358: fld     [esp+arg_8]
0x61335C: fstp    [esp+arg_8]
0x613360: fld     [esp+arg_0]
0x613364: fadd    st, st
0x613366: fld     [esp+arg_8]
0x61336A: fld     st
0x61336C: fld     [esp+arg_C]
0x613370: fld     st
0x613372: fsubp   st(2), st
0x613374: fxch    st(1)
0x613376: fdiv    st, st(3)
0x613378: fstp    [esp+arg_0]
0x61337C: fchs
0x61337E: fsubrp  st(1), st
0x613380: fdivrp  st(1), st
0x613382: fstp    [esp+arg_C]
0x613386: fld     [esp+arg_0]
0x61338A: fld     [esp+arg_C]
0x61338E: fcom    st(1)
0x613390: fnstsw  ax
0x613392: test    ah, 5
0x613395: jp      short loc_61339F
0x613397: fstp    st
0x613399: fst     [esp+arg_0]
0x61339D: jmp     short loc_6133A3
0x61339F: fstp    [esp+arg_0]
0x6133A3: fldz
0x6133A5: fld     [esp+arg_0]
0x6133A9: fcom    st(1)
0x6133AB: fnstsw  ax
0x6133AD: fstp    st(1)
0x6133AF: test    ah, 1
0x6133B2: jnz     short loc_6133F5
0x6133B4: fld1
0x6133B6: fcompp
0x6133B8: fnstsw  ax
0x6133BA: test    ah, 1
0x6133BD: jnz     short loc_6133F7
0x6133BF: call    __CIsqrt
0x6133C4: fstp    [esp+arg_0]
0x6133C8: fld     [esp+arg_0]
0x6133CC: push    ecx
0x6133CD: fstp    [esp+4+var_4]; float
0x6133D0: call    sub_612820
0x6133D5: fstp    [esp+4+arg_0]
0x6133D9: fld     [esp+4+arg_4]
0x6133DD: fstp    [esp+4+var_4]; float
0x6133E0: call    sub_537770
0x6133E5: fmul    [esp+4+arg_0]
0x6133E9: add     esp, 4
0x6133EC: fstp    [esp+arg_4]
0x6133F0: fld     [esp+arg_4]
0x6133F4: retn
0x6133F5: fstp    st(1)
0x6133F7: fstp    st
0x6133F9: fld     dword ptr ds:0B3F9A4h
0x6133FF: fmul    qword ptr ds:0A3C770h
0x613405: fstp    [esp+arg_4]
0x613409: fld     [esp+arg_4]
0x61340D: retn
