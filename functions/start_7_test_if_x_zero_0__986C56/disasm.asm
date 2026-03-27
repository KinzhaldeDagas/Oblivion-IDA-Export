0x986C56: test    eax, 0FFFFFh
0x986C5B: jnz     short start_7___x_is_denormal_0
0x986C5D: cmp     [esp+arg_4], 0
0x986C62: jnz     short start_7___x_is_denormal_0
0x986C64: fstp    st
0x986C66: fld     tbyte ptr ds:0B31CDAh
0x986C6C: mov     eax, 2
