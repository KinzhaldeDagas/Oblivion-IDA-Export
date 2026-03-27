0x4EF2B0: mov     eax, [esp+arg_0]
0x4EF2B4: cmp     al, 30h ; '0'
0x4EF2B6: jnz     short loc_4EF2BB
0x4EF2B8: mov     al, 1
0x4EF2BA: retn
0x4EF2BB: cmp     al, 37h ; '7'
0x4EF2BD: jz      short loc_4EF2B8
0x4EF2BF: cmp     al, 38h ; '8'
0x4EF2C1: jz      short loc_4EF2B8
0x4EF2C3: mov     [esp+arg_0], eax
0x4EF2C7: jmp     sub_4CA010
