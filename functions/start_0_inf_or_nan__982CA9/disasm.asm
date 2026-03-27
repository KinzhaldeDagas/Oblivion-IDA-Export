0x982CA9: test    eax, 0FFFFFh
0x982CAE: jnz     short start_0___not_infinity
0x982CB0: cmp     [esp+arg_4], 0
0x982CB5: jnz     short start_0___not_infinity
0x982CB7: and     eax, 80000000h
0x982CBC: jz      short start_0___exit
