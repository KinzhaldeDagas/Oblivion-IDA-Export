0x986C2B: test    eax, 0FFFFFh
0x986C30: jnz     short start_7___not_infinity_5
0x986C32: cmp     [esp+arg_4], 0
0x986C37: jnz     short start_7___not_infinity_5
0x986C39: and     eax, 80000000h
0x986C3E: jz      short start_7___exit_6
