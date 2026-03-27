0x980D85: mov     eax, ds:0B30A4Ch
0x980D8A: test    eax, eax
0x980D8C: jnz     short loc_980D93
0x980D8E: jmp     _abort
0x980D93: mov     ecx, [esp+arg_0]
0x980D97: dec     eax
0x980D98: mov     ds:0B30A4Ch, eax
0x980D9D: mov     ds:0BA9C6Ch[eax*4], ecx
0x980DA4: retn
