0x985D03: mov     eax, [esp+arg_8]
0x985D07: and     eax, 0FFFFFh
0x985D0C: or      eax, [esp+arg_4]
0x985D10: jnz     start_3___base_is_not_zero
0x985D16: fstp    st
0x985D18: mov     eax, [esp+arg_10]
0x985D1C: and     eax, 7FFFFFFFh
0x985D21: or      eax, [esp+arg_C]
0x985D25: jz      short start_3___zero_to_zero
0x985D27: call    _test_whether_TOS_is_int
0x985D2C: mov     ch, byte ptr [esp+arg_8+3]
0x985D30: shr     ch, 7
0x985D33: test    [esp+arg_10+3], 80h
0x985D3B: jz      short start_3___exp_is_positive
0x985D3D: fld     tbyte ptr ds:0B31CD0h
0x985D43: test    ch, cl
0x985D45: jz      short start_3___ret_inf
0x985D47: fchs
