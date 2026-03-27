0x563D60: mov     eax, [ecx]
0x563D62: mov     edx, [eax+0A8h]
0x563D68: call    edx
0x563D6A: test    eax, eax
0x563D6C: jnz     short loc_563D73
0x563D6E: xor     al, al
0x563D70: retn    4
0x563D73: cmp     [esp+arg_0], 0
0x563D78: jnz     short loc_563D84
0x563D7A: or      word ptr [eax+18h], 1
0x563D7F: mov     al, 1
0x563D81: retn    4
0x563D84: and     word ptr [eax+18h], 0FFFEh
0x563D8A: mov     al, 1
0x563D8C: retn    4
