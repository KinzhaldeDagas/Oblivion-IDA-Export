0x65D770: mov     eax, [ecx+5C8h]
0x65D776: test    eax, eax
0x65D778: jz      short loc_65D785
0x65D77A: cmp     eax, [esp+arg_0]
0x65D77E: jnz     short loc_65D785
0x65D780: mov     al, 1
0x65D782: retn    4
0x65D785: xor     al, al
0x65D787: retn    4
