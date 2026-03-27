0x5BD990: mov     eax, [esp+arg_0]
0x5BD994: cmp     eax, 3
0x5BD997: jnz     short loc_5BD9A3
0x5BD999: mov     eax, [esp+arg_4]
0x5BD99D: mov     [ecx+28h], eax
0x5BD9A0: retn    8
0x5BD9A3: cmp     eax, 4
0x5BD9A6: jnz     short loc_5BD9B2
0x5BD9A8: mov     edx, [esp+arg_4]
0x5BD9AC: mov     [ecx+2Ch], edx
0x5BD9AF: retn    8
0x5BD9B2: cmp     eax, 5
0x5BD9B5: jnz     short loc_5BD9C1
0x5BD9B7: mov     eax, [esp+arg_4]
0x5BD9BB: mov     [ecx+30h], eax
0x5BD9BE: retn    8
0x5BD9C1: cmp     eax, 7
0x5BD9C4: jnz     short loc_5BD9D0
0x5BD9C6: mov     edx, [esp+arg_4]
0x5BD9CA: mov     [ecx+34h], edx
0x5BD9CD: retn    8
0x5BD9D0: cmp     eax, 8
0x5BD9D3: jnz     short locret_5BD9DC
0x5BD9D5: mov     eax, [esp+arg_4]
0x5BD9D9: mov     [ecx+38h], eax
0x5BD9DC: retn    8
