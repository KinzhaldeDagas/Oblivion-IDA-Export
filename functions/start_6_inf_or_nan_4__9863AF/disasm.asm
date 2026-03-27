0x9863AF: test    eax, 0FFFFFh
0x9863B4: jnz     short start_6___not_infinity_4
0x9863B6: cmp     [esp+arg_4], 0
0x9863BB: jnz     short start_6___not_infinity_4
0x9863BD: fstp    st
0x9863BF: fld     tbyte ptr ds:0B319B0h
0x9863C5: mov     eax, 1
