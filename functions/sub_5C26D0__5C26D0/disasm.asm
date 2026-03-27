0x5C26D0: mov     eax, [esp+arg_0]
0x5C26D4: cmp     eax, 1
0x5C26D7: jnz     short loc_5C26E3
0x5C26D9: mov     eax, [esp+arg_4]
0x5C26DD: mov     [ecx+28h], eax
0x5C26E0: retn    8
0x5C26E3: cmp     eax, 2
0x5C26E6: jnz     short loc_5C26F2
0x5C26E8: mov     edx, [esp+arg_4]
0x5C26EC: mov     [ecx+2Ch], edx
0x5C26EF: retn    8
0x5C26F2: cmp     eax, 14h
0x5C26F5: jnz     short loc_5C2701
0x5C26F7: mov     eax, [esp+arg_4]
0x5C26FB: mov     [ecx+34h], eax
0x5C26FE: retn    8
0x5C2701: cmp     eax, 15h
0x5C2704: jnz     short loc_5C2710
0x5C2706: mov     edx, [esp+arg_4]
0x5C270A: mov     [ecx+38h], edx
0x5C270D: retn    8
0x5C2710: cmp     eax, 0Ah
0x5C2713: jnz     short loc_5C271F
0x5C2715: mov     eax, [esp+arg_4]
0x5C2719: mov     [ecx+30h], eax
0x5C271C: retn    8
0x5C271F: cmp     eax, 5Ah ; 'Z'
0x5C2722: jnz     short locret_5C272B
0x5C2724: mov     edx, [esp+arg_4]
0x5C2728: mov     [ecx+3Ch], edx
0x5C272B: retn    8
