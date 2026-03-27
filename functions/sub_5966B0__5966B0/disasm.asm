0x5966B0: mov     eax, [esp+arg_0]
0x5966B4: sub     eax, 1
0x5966B7: jz      short loc_5966D7
0x5966B9: sub     eax, 1
0x5966BC: jz      short loc_5966CD
0x5966BE: sub     eax, 1
0x5966C1: jnz     short locret_5966DE
0x5966C3: mov     eax, [esp+arg_4]
0x5966C7: mov     [ecx+30h], eax
0x5966CA: retn    8
0x5966CD: mov     edx, [esp+arg_4]
0x5966D1: mov     [ecx+2Ch], edx
0x5966D4: retn    8
0x5966D7: mov     eax, [esp+arg_4]
0x5966DB: mov     [ecx+28h], eax
0x5966DE: retn    8
