0x563D30: mov     eax, [ecx]
0x563D32: mov     edx, [eax+0A4h]
0x563D38: call    edx
0x563D3A: test    eax, eax
0x563D3C: jnz     short loc_563D43
0x563D3E: xor     al, al
0x563D40: retn    4
0x563D43: cmp     [esp+arg_0], 0
0x563D48: jnz     short loc_563D54
0x563D4A: or      word ptr [eax+18h], 1
0x563D4F: mov     al, 1
0x563D51: retn    4
0x563D54: and     word ptr [eax+18h], 0FFFEh
0x563D5A: mov     al, 1
0x563D5C: retn    4
