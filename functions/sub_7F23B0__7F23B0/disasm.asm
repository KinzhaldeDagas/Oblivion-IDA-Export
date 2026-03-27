0x7F23B0: mov     eax, [ecx+0A0h]
0x7F23B6: sub     eax, 1
0x7F23B9: jz      short loc_7F23C3
0x7F23BB: sub     eax, 2
0x7F23BE: jnz     short loc_7F23C3
0x7F23C0: xor     eax, eax
0x7F23C2: retn
0x7F23C3: mov     eax, 3
0x7F23C8: retn
