0x5BCE80: mov     eax, [esp+arg_0]
0x5BCE84: cmp     eax, 1
0x5BCE87: jnz     short loc_5BCE93
0x5BCE89: mov     eax, [esp+arg_4]
0x5BCE8D: mov     [ecx+28h], eax
0x5BCE90: retn    8
0x5BCE93: cmp     eax, 2
0x5BCE96: jnz     short loc_5BCEA2
0x5BCE98: mov     edx, [esp+arg_4]
0x5BCE9C: mov     [ecx+2Ch], edx
0x5BCE9F: retn    8
0x5BCEA2: cmp     eax, 3
0x5BCEA5: jnz     short loc_5BCEB1
0x5BCEA7: mov     eax, [esp+arg_4]
0x5BCEAB: mov     [ecx+30h], eax
0x5BCEAE: retn    8
0x5BCEB1: cmp     eax, 4
0x5BCEB4: jnz     short loc_5BCEC0
0x5BCEB6: mov     edx, [esp+arg_4]
0x5BCEBA: mov     [ecx+34h], edx
0x5BCEBD: retn    8
0x5BCEC0: cmp     eax, 6
0x5BCEC3: jnz     short loc_5BCECF
0x5BCEC5: mov     eax, [esp+arg_4]
0x5BCEC9: mov     [ecx+38h], eax
0x5BCECC: retn    8
0x5BCECF: cmp     eax, 7
0x5BCED2: jnz     short loc_5BCEDE
0x5BCED4: mov     edx, [esp+arg_4]
0x5BCED8: mov     [ecx+3Ch], edx
0x5BCEDB: retn    8
0x5BCEDE: cmp     eax, 9
0x5BCEE1: jnz     short loc_5BCEED
0x5BCEE3: mov     eax, [esp+arg_4]
0x5BCEE7: mov     [ecx+40h], eax
0x5BCEEA: retn    8
0x5BCEED: cmp     eax, 0Ah
0x5BCEF0: jnz     short loc_5BCEFC
0x5BCEF2: mov     edx, [esp+arg_4]
0x5BCEF6: mov     [ecx+44h], edx
0x5BCEF9: retn    8
0x5BCEFC: cmp     eax, 0Bh
0x5BCEFF: jnz     short loc_5BCF0B
0x5BCF01: mov     eax, [esp+arg_4]
0x5BCF05: mov     [ecx+48h], eax
0x5BCF08: retn    8
0x5BCF0B: cmp     eax, 0Ch
0x5BCF0E: jnz     short locret_5BCF17
0x5BCF10: mov     edx, [esp+arg_4]
0x5BCF14: mov     [ecx+4Ch], edx
0x5BCF17: retn    8
