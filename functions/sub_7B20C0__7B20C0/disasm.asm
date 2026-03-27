0x7B20C0: mov     eax, [ecx+0A4h]
0x7B20C6: sub     eax, 1
0x7B20C9: jz      short loc_7B20D3
0x7B20CB: sub     eax, 2
0x7B20CE: jnz     short loc_7B20D3
0x7B20D0: xor     eax, eax
0x7B20D2: retn
0x7B20D3: mov     eax, 3
0x7B20D8: retn
