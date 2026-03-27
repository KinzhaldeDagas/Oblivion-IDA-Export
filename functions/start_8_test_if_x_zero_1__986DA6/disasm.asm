0x986DA6: test    eax, 0FFFFFh
0x986DAB: jnz     short start_8___x_is_denormal_1
0x986DAD: cmp     [esp+arg_4], 0
0x986DB2: jnz     short start_8___x_is_denormal_1
0x986DB4: fstp    st
0x986DB6: fld     tbyte ptr ds:0B31CDAh
0x986DBC: mov     eax, 2
