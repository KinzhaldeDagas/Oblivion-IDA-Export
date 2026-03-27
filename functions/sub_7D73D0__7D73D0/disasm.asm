0x7D73D0: mov     eax, [esp+arg_0]
0x7D73D4: test    eax, eax
0x7D73D6: jz      short loc_7D73EC
0x7D73D8: jle     short locret_7D73F6
0x7D73DA: cmp     eax, 3
0x7D73DD: jg      short locret_7D73F6
0x7D73DF: mov     dword ptr [ecx+0DCh], 1
0x7D73E9: retn    4
0x7D73EC: mov     dword ptr [ecx+0DCh], 3
0x7D73F6: retn    4
