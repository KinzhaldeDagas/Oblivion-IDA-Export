0x519CE0: cmp     byte ptr [ecx+4], 24h ; '$'
0x519CE4: jnz     short loc_519CEF
0x519CE6: mov     eax, [ecx+28h]
0x519CE9: shr     eax, 5
0x519CEC: and     al, 1
0x519CEE: retn
0x519CEF: xor     al, al
0x519CF1: retn
