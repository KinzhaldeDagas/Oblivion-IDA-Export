0x985D6D: fld     st(1)
0x985D6F: call    _test_whether_TOS_is_int
0x985D74: fchs
0x985D76: test    cl, cl
0x985D78: jnz     start_3___normal
0x985D7E: fstp    st
0x985D80: fstp    st
0x985D82: fld     tbyte ptr ds:0B319B0h
0x985D88: mov     eax, 1
0x985D8D: jmp     start_3____ErrorHandling
