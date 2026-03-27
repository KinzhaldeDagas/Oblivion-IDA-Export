0x595C00: mov     eax, [esp+arg_0]
0x595C04: sub     eax, 0Bh
0x595C07: jz      short loc_595C18
0x595C09: sub     eax, 1
0x595C0C: jnz     short locret_595C1F
0x595C0E: mov     eax, [esp+arg_4]
0x595C12: mov     [ecx+2Ch], eax
0x595C15: retn    8
0x595C18: mov     edx, [esp+arg_4]
0x595C1C: mov     [ecx+28h], edx
0x595C1F: retn    8
