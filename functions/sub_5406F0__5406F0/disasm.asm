0x5406F0: mov     ecx, ds:0B33B00h
0x5406F6: mov     cl, [ecx+7Ch]
0x5406F9: cmp     cl, 5Dh ; ']'
0x5406FC: mov     eax, 0Ch
0x540701: jb      short loc_540708
0x540703: mov     eax, 10h
0x540708: add     eax, 10h
0x54070B: cmp     cl, 69h ; 'i'
0x54070E: jb      short locret_540713
0x540710: add     eax, 8
0x540713: retn
