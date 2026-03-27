0x5B5800: mov     eax, [esp+arg_0]
0x5B5804: cmp     eax, 2
0x5B5807: jnz     short loc_5B5813
0x5B5809: mov     eax, [esp+arg_4]
0x5B580D: mov     [ecx+28h], eax
0x5B5810: retn    8
0x5B5813: cmp     eax, 3
0x5B5816: jnz     short loc_5B5822
0x5B5818: mov     edx, [esp+arg_4]
0x5B581C: mov     [ecx+30h], edx
0x5B581F: retn    8
0x5B5822: cmp     eax, 4
0x5B5825: jnz     short loc_5B5831
0x5B5827: mov     eax, [esp+arg_4]
0x5B582B: mov     [ecx+34h], eax
0x5B582E: retn    8
0x5B5831: cmp     eax, 5
0x5B5834: jnz     short loc_5B5840
0x5B5836: mov     edx, [esp+arg_4]
0x5B583A: mov     [ecx+38h], edx
0x5B583D: retn    8
0x5B5840: cmp     eax, 6
0x5B5843: jnz     short loc_5B584F
0x5B5845: mov     eax, [esp+arg_4]
0x5B5849: mov     [ecx+3Ch], eax
0x5B584C: retn    8
0x5B584F: cmp     eax, 7
0x5B5852: jnz     short loc_5B585E
0x5B5854: mov     edx, [esp+arg_4]
0x5B5858: mov     [ecx+40h], edx
0x5B585B: retn    8
0x5B585E: cmp     eax, 8
0x5B5861: jnz     short locret_5B586A
0x5B5863: mov     eax, [esp+arg_4]
0x5B5867: mov     [ecx+44h], eax
0x5B586A: retn    8
