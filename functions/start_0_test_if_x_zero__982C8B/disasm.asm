0x982C8B: test    eax, 7FF00000h
0x982C90: jnz     short start_0___negative_x
0x982C92: test    eax, 0FFFFFh
0x982C97: jnz     short start_0___negative_x
0x982C99: cmp     [esp+arg_4], 0
0x982C9E: jnz     short start_0___negative_x
0x982CA0: jmp     short start_0___exit
