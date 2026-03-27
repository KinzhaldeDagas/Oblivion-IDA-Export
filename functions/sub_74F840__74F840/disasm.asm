0x74F840: mov     ax, [esp+arg_0]
0x74F845: test    ax, ax
0x74F848: jnz     short loc_74F852
0x74F84A: mov     eax, ds:0B283E0h
0x74F84F: retn    4
0x74F852: sub     ax, 1
0x74F856: neg     ax
0x74F859: sbb     eax, eax
0x74F85B: not     eax
0x74F85D: and     eax, ds:0B283E4h
0x74F863: retn    4
