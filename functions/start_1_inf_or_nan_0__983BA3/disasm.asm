0x983BA3: test    eax, 0FFFFFh
0x983BA8: jnz     short start_1___not_infinity_0
0x983BAA: cmp     [esp+arg_4], 0
0x983BAF: jnz     short start_1___not_infinity_0
0x983BB1: fstp    st
0x983BB3: fld     tbyte ptr ds:0B319B0h
0x983BB9: mov     eax, 1
