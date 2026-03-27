0x6DAAA0: mov     ax, [esp+arg_0]
0x6DAAA5: test    ax, ax
0x6DAAA8: jnz     short loc_6DAAB2
0x6DAAAA: mov     eax, 1
0x6DAAAF: retn    4
0x6DAAB2: sub     ax, 1
0x6DAAB6: neg     ax
0x6DAAB9: sbb     eax, eax
0x6DAABB: and     eax, 6
0x6DAABE: retn    4
