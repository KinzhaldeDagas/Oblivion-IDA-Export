0x985D92: fld     st
0x985D94: frndint
0x985D96: fcomp   st(1)
0x985D98: mov     cl, 0
0x985D9A: fstsw   ax
0x985D9D: sahf
0x985D9E: jnz     short _test_whether_TOS_is_int____not_int
0x985DA0: fmul    qword ptr ds:0B30D40h
0x985DA6: inc     cl
0x985DA8: fld     st
0x985DAA: frndint
0x985DAC: fcompp
0x985DAE: fstsw   ax
0x985DB1: sahf
0x985DB2: jnz     short _test_whether_TOS_is_int____odd
0x985DB4: inc     cl
