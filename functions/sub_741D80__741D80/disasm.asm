0x741D80: mov     eax, [esp+arg_0]
0x741D84: test    eax, eax
0x741D86: jnz     short loc_741D8D
0x741D88: xor     al, al
0x741D8A: retn    4
0x741D8D: mov     cl, [ecx+0Ch]
0x741D90: cmp     cl, [eax+0Ch]
0x741D93: setz    al
0x741D96: retn    4
