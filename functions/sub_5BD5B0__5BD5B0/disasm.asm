0x5BD5B0: mov     eax, [esp+arg_0]
0x5BD5B4: cmp     eax, 2
0x5BD5B7: jnz     short loc_5BD5C3
0x5BD5B9: mov     eax, [esp+arg_4]
0x5BD5BD: mov     [ecx+28h], eax
0x5BD5C0: retn    8
0x5BD5C3: cmp     eax, 5
0x5BD5C6: jnz     short loc_5BD5D2
0x5BD5C8: mov     edx, [esp+arg_4]
0x5BD5CC: mov     [ecx+2Ch], edx
0x5BD5CF: retn    8
0x5BD5D2: cmp     eax, 6
0x5BD5D5: jnz     short loc_5BD5E1
0x5BD5D7: mov     eax, [esp+arg_4]
0x5BD5DB: mov     [ecx+30h], eax
0x5BD5DE: retn    8
0x5BD5E1: cmp     eax, 7
0x5BD5E4: jnz     short loc_5BD5F0
0x5BD5E6: mov     edx, [esp+arg_4]
0x5BD5EA: mov     [ecx+34h], edx
0x5BD5ED: retn    8
0x5BD5F0: cmp     eax, 8
0x5BD5F3: jnz     short loc_5BD5FF
0x5BD5F5: mov     eax, [esp+arg_4]
0x5BD5F9: mov     [ecx+38h], eax
0x5BD5FC: retn    8
0x5BD5FF: cmp     eax, 9
0x5BD602: jnz     short locret_5BD60B
0x5BD604: mov     edx, [esp+arg_4]
0x5BD608: mov     [ecx+3Ch], edx
0x5BD60B: retn    8
