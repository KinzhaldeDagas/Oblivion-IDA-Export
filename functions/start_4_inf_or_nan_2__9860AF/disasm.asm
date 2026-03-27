0x9860AF: test    eax, 0FFFFFh
0x9860B4: jnz     short start_4___not_infinity_2
0x9860B6: cmp     [esp+arg_4], 0
0x9860BB: jnz     short start_4___not_infinity_2
0x9860BD: fstp    st
0x9860BF: fld     tbyte ptr ds:0B319B0h
0x9860C5: mov     eax, 1
