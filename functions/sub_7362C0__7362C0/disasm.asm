0x7362C0: mov     eax, [esp+arg_10]
0x7362C4: cmp     eax, 10h
0x7362C7: jz      short loc_7362D8
0x7362C9: cmp     eax, 18h
0x7362CC: jz      short loc_7362D8
0x7362CE: cmp     eax, 20h ; ' '
0x7362D1: jz      short loc_7362D8
0x7362D3: xor     al, al
0x7362D5: retn    14h
0x7362D8: mov     al, 1
0x7362DA: retn    14h
