0x986D7B: test    eax, 0FFFFFh
0x986D80: jnz     short start_8___not_infinity_6
0x986D82: cmp     [esp+arg_4], 0
0x986D87: jnz     short start_8___not_infinity_6
0x986D89: and     eax, 80000000h
0x986D8E: jz      short start_8___exit_7
