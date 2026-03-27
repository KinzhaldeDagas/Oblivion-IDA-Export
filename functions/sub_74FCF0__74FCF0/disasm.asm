0x74FCF0: mov     ax, [esp+arg_0]
0x74FCF5: test    ax, ax
0x74FCF8: jnz     short loc_74FD00
0x74FCFA: mov     eax, [ecx+3Ch]
0x74FCFD: retn    4
0x74FD00: cmp     ax, 1
0x74FD04: jnz     short loc_74FD0C
0x74FD06: mov     eax, [ecx+48h]
0x74FD09: retn    4
0x74FD0C: xor     eax, eax
0x74FD0E: retn    4
