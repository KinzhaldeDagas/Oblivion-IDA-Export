0x987135: test    eax, 0FFFFFh
0x98713A: jnz     short start_9___not_infinity_7
0x98713C: cmp     [esp+arg_4], 0
0x987141: jnz     short start_9___not_infinity_7
0x987143: fstp    st
0x987145: fld     tbyte ptr ds:0B319BAh
0x98714B: test    eax, 80000000h
0x987150: jz      short start_9___exit_8
0x987152: fchs
0x987154: jmp     short start_9___exit_8
