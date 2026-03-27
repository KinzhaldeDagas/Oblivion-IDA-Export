0x519D40: cmp     byte ptr [ecx+4], 23h ; '#'
0x519D44: jnz     short loc_519D4F
0x519D46: mov     eax, [ecx+28h]
0x519D49: shr     eax, 4
0x519D4C: and     al, 1
0x519D4E: retn
0x519D4F: xor     al, al
0x519D51: retn
