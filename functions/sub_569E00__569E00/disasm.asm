0x569E00: mov     eax, [esp+arg_0]
0x569E04: test    eax, eax
0x569E06: jnz     short loc_569E0D
0x569E08: mov     al, 1
0x569E0A: retn    4
0x569E0D: mov     dl, [ecx+1]
0x569E10: cmp     dl, [eax+1]
0x569E13: jnz     short loc_569E08
0x569E15: mov     dl, [ecx]
0x569E17: cmp     dl, [eax]
0x569E19: jnz     short loc_569E08
0x569E1B: mov     dl, [ecx+2]
0x569E1E: cmp     dl, [eax+2]
0x569E21: jnz     short loc_569E08
0x569E23: mov     dl, [ecx+3]
0x569E26: cmp     dl, [eax+3]
0x569E29: jnz     short loc_569E08
0x569E2B: mov     ecx, [ecx+4]
0x569E2E: cmp     ecx, [eax+4]
0x569E31: setnz   al
0x569E34: retn    4
