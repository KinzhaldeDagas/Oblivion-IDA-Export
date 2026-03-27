0x4F9A20: cmp     dword ptr [ecx+30h], 0
0x4F9A24: jnz     short loc_4F9A32
0x4F9A26: cmp     dword ptr [ecx+2Ch], 0
0x4F9A2A: jnz     short loc_4F9A32
0x4F9A2C: mov     eax, 1
0x4F9A31: retn
0x4F9A32: xor     eax, eax
0x4F9A34: retn
