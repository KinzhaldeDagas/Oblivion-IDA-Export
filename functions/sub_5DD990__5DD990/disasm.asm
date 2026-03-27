0x5DD990: mov     eax, [esp+arg_0]
0x5DD994: cmp     eax, 1
0x5DD997: jnz     short loc_5DD9A3
0x5DD999: mov     eax, [esp+arg_4]
0x5DD99D: mov     [ecx+28h], eax
0x5DD9A0: retn    8
0x5DD9A3: cmp     eax, 2
0x5DD9A6: jnz     short loc_5DD9B2
0x5DD9A8: mov     edx, [esp+arg_4]
0x5DD9AC: mov     [ecx+2Ch], edx
0x5DD9AF: retn    8
0x5DD9B2: cmp     eax, 3
0x5DD9B5: jnz     short loc_5DD9C1
0x5DD9B7: mov     eax, [esp+arg_4]
0x5DD9BB: mov     [ecx+30h], eax
0x5DD9BE: retn    8
0x5DD9C1: cmp     eax, 4
0x5DD9C4: jnz     short loc_5DD9D0
0x5DD9C6: mov     edx, [esp+arg_4]
0x5DD9CA: mov     [ecx+34h], edx
0x5DD9CD: retn    8
0x5DD9D0: cmp     eax, 5
0x5DD9D3: jnz     short loc_5DD9DF
0x5DD9D5: mov     eax, [esp+arg_4]
0x5DD9D9: mov     [ecx+38h], eax
0x5DD9DC: retn    8
0x5DD9DF: cmp     eax, 6
0x5DD9E2: jnz     short loc_5DD9EE
0x5DD9E4: mov     edx, [esp+arg_4]
0x5DD9E8: mov     [ecx+3Ch], edx
0x5DD9EB: retn    8
0x5DD9EE: cmp     eax, 7
0x5DD9F1: jnz     short loc_5DD9FD
0x5DD9F3: mov     eax, [esp+arg_4]
0x5DD9F7: mov     [ecx+40h], eax
0x5DD9FA: retn    8
0x5DD9FD: cmp     eax, 8
0x5DDA00: jnz     short locret_5DDA09
0x5DDA02: mov     edx, [esp+arg_4]
0x5DDA06: mov     [ecx+44h], edx
0x5DDA09: retn    8
