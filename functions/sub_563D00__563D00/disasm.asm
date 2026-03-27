0x563D00: mov     eax, [ecx]
0x563D02: mov     edx, [eax+0A0h]
0x563D08: call    edx
0x563D0A: test    eax, eax
0x563D0C: jnz     short loc_563D13
0x563D0E: xor     al, al
0x563D10: retn    4
0x563D13: cmp     [esp+arg_0], 0
0x563D18: jnz     short loc_563D24
0x563D1A: or      word ptr [eax+18h], 1
0x563D1F: mov     al, 1
0x563D21: retn    4
0x563D24: and     word ptr [eax+18h], 0FFFEh
0x563D2A: mov     al, 1
0x563D2C: retn    4
