0x5D9BE0: mov     eax, [esp+arg_0]
0x5D9BE4: cmp     eax, 0Ah
0x5D9BE7: jnz     short loc_5D9BF3
0x5D9BE9: mov     eax, [esp+arg_4]
0x5D9BED: mov     [ecx+28h], eax
0x5D9BF0: retn    8
0x5D9BF3: cmp     eax, 14h
0x5D9BF6: jnz     short loc_5D9C02
0x5D9BF8: mov     edx, [esp+arg_4]
0x5D9BFC: mov     [ecx+2Ch], edx
0x5D9BFF: retn    8
0x5D9C02: cmp     eax, 1Eh
0x5D9C05: jnz     short loc_5D9C11
0x5D9C07: mov     eax, [esp+arg_4]
0x5D9C0B: mov     [ecx+30h], eax
0x5D9C0E: retn    8
0x5D9C11: cmp     eax, 28h ; '('
0x5D9C14: jnz     short loc_5D9C20
0x5D9C16: mov     edx, [esp+arg_4]
0x5D9C1A: mov     [ecx+34h], edx
0x5D9C1D: retn    8
0x5D9C20: cmp     eax, 32h ; '2'
0x5D9C23: jnz     short loc_5D9C2F
0x5D9C25: mov     eax, [esp+arg_4]
0x5D9C29: mov     [ecx+38h], eax
0x5D9C2C: retn    8
0x5D9C2F: cmp     eax, 1Fh
0x5D9C32: jnz     short loc_5D9C3E
0x5D9C34: mov     edx, [esp+arg_4]
0x5D9C38: mov     [ecx+3Ch], edx
0x5D9C3B: retn    8
0x5D9C3E: cmp     eax, 20h ; ' '
0x5D9C41: jnz     short loc_5D9C4D
0x5D9C43: mov     eax, [esp+arg_4]
0x5D9C47: mov     [ecx+40h], eax
0x5D9C4A: retn    8
0x5D9C4D: cmp     eax, 29h ; ')'
0x5D9C50: jnz     short loc_5D9C5C
0x5D9C52: mov     edx, [esp+arg_4]
0x5D9C56: mov     [ecx+44h], edx
0x5D9C59: retn    8
0x5D9C5C: cmp     eax, 2Ah ; '*'
0x5D9C5F: jnz     short loc_5D9C6B
0x5D9C61: mov     eax, [esp+arg_4]
0x5D9C65: mov     [ecx+48h], eax
0x5D9C68: retn    8
0x5D9C6B: cmp     eax, 33h ; '3'
0x5D9C6E: jnz     short loc_5D9C7A
0x5D9C70: mov     edx, [esp+arg_4]
0x5D9C74: mov     [ecx+4Ch], edx
0x5D9C77: retn    8
0x5D9C7A: cmp     eax, 34h ; '4'
0x5D9C7D: jnz     short loc_5D9C89
0x5D9C7F: mov     eax, [esp+arg_4]
0x5D9C83: mov     [ecx+50h], eax
0x5D9C86: retn    8
0x5D9C89: cmp     eax, 3Ch ; '<'
0x5D9C8C: jnz     short loc_5D9C98
0x5D9C8E: mov     edx, [esp+arg_4]
0x5D9C92: mov     [ecx+54h], edx
0x5D9C95: retn    8
0x5D9C98: cmp     eax, 3Dh ; '='
0x5D9C9B: jnz     short locret_5D9CA4
0x5D9C9D: mov     eax, [esp+arg_4]
0x5D9CA1: mov     [ecx+58h], eax
0x5D9CA4: retn    8
