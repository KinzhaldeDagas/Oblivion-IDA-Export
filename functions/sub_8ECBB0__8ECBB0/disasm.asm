0x8ECBB0: fld     [esp+arg_0]
0x8ECBB4: fabs
0x8ECBB6: fld     [esp+arg_4]
0x8ECBBA: fabs
0x8ECBBC: fld     st(1)
0x8ECBBE: fcomp   st(1)
0x8ECBC0: fnstsw  ax
0x8ECBC2: test    ah, 41h
0x8ECBC5: jp      short loc_8ECBEB
0x8ECBC7: fadd    dword ptr ds:0A9AFE0h
0x8ECBCD: fdivp   st(1), st
0x8ECBCF: fld     st
0x8ECBD1: fmul    st, st(1)
0x8ECBD3: fld     dword ptr ds:0A9AFF0h
0x8ECBD9: fmul    st, st(1)
0x8ECBDB: fsubr   st, st(2)
0x8ECBDD: fxch    st(1)
0x8ECBDF: fmul    st, st(2)
0x8ECBE1: fmul    dword ptr ds:0A9AFECh
0x8ECBE7: fsubp   st(1), st
0x8ECBE9: jmp     short loc_8ECC15
0x8ECBEB: fxch    st(1)
0x8ECBED: fadd    dword ptr ds:0A9AFE0h
0x8ECBF3: fdivp   st(1), st
0x8ECBF5: fld     st
0x8ECBF7: fmul    st, st(1)
0x8ECBF9: fld     dword ptr ds:0A9AFF0h
0x8ECBFF: fmul    st, st(1)
0x8ECC01: fsubr   st, st(2)
0x8ECC03: fxch    st(1)
0x8ECC05: fmul    st, st(2)
0x8ECC07: fmul    dword ptr ds:0A9AFECh
0x8ECC0D: fsubp   st(1), st
0x8ECC0F: fsubr   dword ptr ds:0A3F3E0h
0x8ECC15: fstp    st(1)
0x8ECC17: fld     [esp+arg_4]
0x8ECC1B: fcomp   dword ptr ds:0A2FAA8h
0x8ECC21: fnstsw  ax
0x8ECC23: test    ah, 5
0x8ECC26: jp      short loc_8ECC2E
0x8ECC28: fsubr   dword ptr ds:0A9AFE4h
0x8ECC2E: fld     [esp+arg_0]
0x8ECC32: fcomp   dword ptr ds:0A2FAA8h
0x8ECC38: fnstsw  ax
0x8ECC3A: test    ah, 5
0x8ECC3D: jp      short locret_8ECC41
0x8ECC3F: fchs
0x8ECC41: retn
