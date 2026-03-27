0x519C70: cmp     byte ptr [ecx+4], 24h ; '$'
0x519C74: mov     al, 1
0x519C76: jnz     short locret_519C89
0x519C78: mov     edx, [ecx+28h]
0x519C7B: shr     edx, 4
0x519C7E: test    al, dl
0x519C80: jnz     short locret_519C89
0x519C82: test    [ecx+28h], al
0x519C85: jnz     short locret_519C89
0x519C87: xor     al, al
0x519C89: retn
