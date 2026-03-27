0x519D20: cmp     byte ptr [ecx+4], 23h ; '#'
0x519D24: jnz     short loc_519D2E
0x519D26: movzx   eax, byte ptr [ecx+28h]
0x519D2A: and     eax, 1
0x519D2D: retn
0x519D2E: or      eax, 0FFFFFFFFh
0x519D31: retn
