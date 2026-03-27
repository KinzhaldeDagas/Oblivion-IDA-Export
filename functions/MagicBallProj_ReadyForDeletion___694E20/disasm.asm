0x694E20: cmp     dword ptr [ecx+80h], 2
0x694E27: jz      short loc_694E39
0x694E29: mov     eax, [ecx+8]
0x694E2C: shr     eax, 5
0x694E2F: test    al, 1
0x694E31: jnz     short loc_694E39
0x694E33: mov     eax, 1
0x694E38: retn
0x694E39: xor     eax, eax
0x694E3B: retn
