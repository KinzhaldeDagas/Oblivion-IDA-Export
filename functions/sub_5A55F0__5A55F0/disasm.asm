0x5A55F0: mov     eax, [esp+arg_0]
0x5A55F4: cmp     eax, 1
0x5A55F7: jnz     short loc_5A5603
0x5A55F9: mov     eax, [esp+arg_4]
0x5A55FD: mov     [ecx+28h], eax
0x5A5600: retn    8
0x5A5603: cmp     eax, 2
0x5A5606: jnz     short loc_5A5612
0x5A5608: mov     edx, [esp+arg_4]
0x5A560C: mov     [ecx+2Ch], edx
0x5A560F: retn    8
0x5A5612: cmp     eax, 3
0x5A5615: jnz     short loc_5A5621
0x5A5617: mov     eax, [esp+arg_4]
0x5A561B: mov     [ecx+30h], eax
0x5A561E: retn    8
0x5A5621: cmp     eax, 4
0x5A5624: jnz     short loc_5A5630
0x5A5626: mov     edx, [esp+arg_4]
0x5A562A: mov     [ecx+34h], edx
0x5A562D: retn    8
0x5A5630: cmp     eax, 5
0x5A5633: jnz     short loc_5A563F
0x5A5635: mov     eax, [esp+arg_4]
0x5A5639: mov     [ecx+38h], eax
0x5A563C: retn    8
0x5A563F: cmp     eax, 6
0x5A5642: jnz     short loc_5A564E
0x5A5644: mov     edx, [esp+arg_4]
0x5A5648: mov     [ecx+3Ch], edx
0x5A564B: retn    8
0x5A564E: cmp     eax, 7
0x5A5651: jnz     short loc_5A565D
0x5A5653: mov     eax, [esp+arg_4]
0x5A5657: mov     [ecx+40h], eax
0x5A565A: retn    8
0x5A565D: cmp     eax, 0Eh
0x5A5660: jnz     short loc_5A566C
0x5A5662: mov     edx, [esp+arg_4]
0x5A5666: mov     [ecx+44h], edx
0x5A5669: retn    8
0x5A566C: cmp     eax, 8
0x5A566F: jnz     short loc_5A567B
0x5A5671: mov     eax, [esp+arg_4]
0x5A5675: mov     [ecx+48h], eax
0x5A5678: retn    8
0x5A567B: cmp     eax, 14h
0x5A567E: jnz     short loc_5A568A
0x5A5680: mov     edx, [esp+arg_4]
0x5A5684: mov     [ecx+58h], edx
0x5A5687: retn    8
0x5A568A: cmp     eax, 5Bh ; '['
0x5A568D: jnz     short loc_5A5699
0x5A568F: mov     eax, [esp+arg_4]
0x5A5693: mov     [ecx+4Ch], eax
0x5A5696: retn    8
0x5A5699: cmp     eax, 10h
0x5A569C: jnz     short loc_5A56A8
0x5A569E: mov     edx, [esp+arg_4]
0x5A56A2: mov     [ecx+50h], edx
0x5A56A5: retn    8
0x5A56A8: cmp     eax, 12h
0x5A56AB: jnz     short locret_5A56B4
0x5A56AD: mov     eax, [esp+arg_4]
0x5A56B1: mov     [ecx+54h], eax
0x5A56B4: retn    8
