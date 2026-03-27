0x565D30: mov     eax, [esp+arg_0]
0x565D34: cmp     eax, 20h ; ' '
0x565D37: ja      short ActorValue_GetSmallIcon___def_565D3E
0x565D39: cmp     eax, 7; switch 8 cases
0x565D3C: ja      short ActorValue_GetSmallIcon___def_565D3E
0x565D3E: jmp     ds:jpt_565D3E[eax*4]; switch jump
0x565D45: mov     eax, ds:0B3A2BCh; jumptable 00565D3E case 0
0x565D4A: retn
0x565D4B: mov     eax, ds:0B3A2C4h; jumptable 00565D3E case 1
0x565D50: retn
0x565D51: mov     eax, ds:0B3A2CCh; jumptable 00565D3E case 2
0x565D56: retn
0x565D57: mov     eax, ds:0B3A2D4h; jumptable 00565D3E case 3
0x565D5C: retn
0x565D5D: mov     eax, ds:0B3A2DCh; jumptable 00565D3E case 4
0x565D62: retn
0x565D63: mov     eax, ds:0B3A2E4h; jumptable 00565D3E case 5
0x565D68: retn
0x565D69: mov     eax, ds:0B3A2ECh; jumptable 00565D3E case 6
0x565D6E: retn
0x565D6F: mov     eax, ds:0B3A2F4h; jumptable 00565D3E case 7
0x565D74: retn
