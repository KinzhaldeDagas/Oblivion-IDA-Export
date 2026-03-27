0x519D00: cmp     byte ptr [ecx+4], 24h ; '$'
0x519D04: jnz     short loc_519D0F
0x519D06: mov     eax, [ecx+28h]
0x519D09: shr     eax, 2
0x519D0C: and     al, 1
0x519D0E: retn
0x519D0F: mov     al, 1
0x519D11: retn
