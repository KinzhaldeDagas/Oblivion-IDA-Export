0x7DF640: sub     esp, 20h
0x7DF643: fld     dword ptr ds:0B45FC0h
0x7DF649: fmul    qword ptr ds:0A3D5B8h
0x7DF64F: fdiv    qword ptr ds:0A3F418h
0x7DF655: fstp    [esp+20h+var_20]
0x7DF658: fld     dword ptr ds:0B45FD8h
0x7DF65E: fdiv    qword ptr ds:0A3F3C8h
0x7DF664: fstp    [esp+20h+var_8]
0x7DF668: fld     dword ptr ds:0B45FC4h
0x7DF66E: fmul    st, st
0x7DF670: fdiv    qword ptr ds:0A91B68h
0x7DF676: fstp    dword ptr [esp+20h+var_1C]
0x7DF67A: fld     dword ptr [esp+20h+var_1C]
0x7DF67E: fdiv    qword ptr ds:0A68950h
0x7DF684: fstp    [esp+20h+var_4]
0x7DF688: fld     [esp+20h+arg_0]
0x7DF68C: fld     [esp+20h+arg_4]
0x7DF690: fmul    st, st
0x7DF692: fld     st(1)
0x7DF694: fmulp   st(2), st
0x7DF696: faddp   st(1), st
0x7DF698: fstp    [esp+20h+var_14]
0x7DF69C: fld     [esp+20h+var_20]
0x7DF69F: call    __CIcos
0x7DF6A4: fstp    dword ptr [esp+20h+var_10]
0x7DF6A8: fld     dword ptr [esp+20h+var_10]
0x7DF6AC: fmul    [esp+20h+arg_0]
0x7DF6B0: fstp    [esp+20h+var_10]
0x7DF6B4: fld     [esp+20h+var_20]
0x7DF6B7: call    __CIsin
0x7DF6BC: fstp    [esp+20h+arg_0]
0x7DF6C0: fld     [esp+20h+arg_0]
0x7DF6C4: fmul    [esp+20h+arg_4]
0x7DF6C8: fadd    [esp+20h+var_10]
0x7DF6CC: fstp    [esp+20h+arg_0]
0x7DF6D0: fld     [esp+20h+arg_0]
0x7DF6D4: fcomp   qword ptr ds:0A2FC68h
0x7DF6DA: fnstsw  ax
0x7DF6DC: test    ah, 5
0x7DF6DF: jp      short loc_7DF6E7
0x7DF6E1: fldz
0x7DF6E3: fstp    [esp+20h+arg_0]
0x7DF6E7: fld     dword ptr [esp+20h+var_1C]
0x7DF6EB: fld     [esp+20h+arg_0]
0x7DF6EF: fstp    [esp+20h+var_10]
0x7DF6F3: fld     [esp+20h+var_14]
0x7DF6F7: fst     [esp+20h+var_1C]
0x7DF6FB: fld     st(1)
0x7DF6FD: fmulp   st(2), st
0x7DF6FF: fmulp   st(1), st
0x7DF701: fdivr   qword ptr ds:0A3D360h
0x7DF707: fstp    [esp+20h+arg_4]
0x7DF70B: fld     [esp+20h+arg_4]
0x7DF70F: call    __CIexp
0x7DF714: fstp    [esp+20h+arg_4]
0x7DF718: fld     [esp+20h+arg_4]
0x7DF71C: fld     [esp+20h+var_10]
0x7DF720: fmul    st, st
0x7DF722: fmulp   st(1), st
0x7DF724: fmul    [esp+20h+var_8]
0x7DF728: fld     [esp+20h+var_1C]
0x7DF72C: fmul    st, st
0x7DF72E: fld     [esp+20h+var_14]
0x7DF732: fld     st
0x7DF734: fmulp   st(2), st
0x7DF736: fxch    st(2)
0x7DF738: fdivrp  st(1), st
0x7DF73A: fstp    [esp+20h+arg_4]
0x7DF73E: fchs
0x7DF740: fld     [esp+20h+var_4]
0x7DF744: fld     st
0x7DF746: fmulp   st(2), st
0x7DF748: fmulp   st(1), st
0x7DF74A: fstp    [esp+20h+var_4]
0x7DF74E: fld     [esp+20h+var_4]
0x7DF752: call    __CIexp
0x7DF757: fstp    [esp+20h+var_4]
0x7DF75B: fld     [esp+20h+var_4]
0x7DF75F: fstp    [esp+20h+var_4]
0x7DF763: fldz
0x7DF765: fcomp   [esp+20h+arg_0]
0x7DF769: fnstsw  ax
0x7DF76B: test    ah, 41h
0x7DF76E: jnz     short loc_7DF77E
0x7DF770: fld     [esp+20h+arg_4]
0x7DF774: fmul    qword ptr ds:0A3C770h
0x7DF77A: fstp    [esp+20h+arg_4]
0x7DF77E: fld     [esp+20h+var_4]
0x7DF782: fmul    [esp+20h+arg_4]
0x7DF786: fstp    [esp+20h+arg_0]
0x7DF78A: fld     [esp+20h+arg_0]
0x7DF78E: add     esp, 20h
0x7DF791: retn    8
