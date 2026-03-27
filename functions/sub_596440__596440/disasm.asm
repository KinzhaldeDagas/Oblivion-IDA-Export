0x596440: mov     eax, [esp+arg_0]
0x596444: cmp     eax, 1
0x596447: jnz     short loc_596453
0x596449: mov     eax, [esp+arg_4]
0x59644D: mov     [ecx+28h], eax
0x596450: retn    8
0x596453: cmp     eax, 2
0x596456: jnz     short locret_59645F
0x596458: mov     edx, [esp+arg_4]
0x59645C: mov     [ecx+2Ch], edx
0x59645F: retn    8
