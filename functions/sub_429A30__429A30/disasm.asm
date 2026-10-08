0x429A30: mov     eax, [esp+arg_0]
0x429A34: cmp     eax, 4; switch 5 cases
0x429A37: ja      short def_429A39
0x429A39: jmp     ds:jpt_429A39[eax*4]; switch jump
0x429A40: mov     eax, ds:0B338B8h; jumptable 00429A39 case 0
0x429A45: retn
0x429A46: mov     eax, ds:0B338C0h; jumptable 00429A39 case 1
0x429A4B: retn
0x429A4C: mov     eax, ds:0B338C8h; jumptable 00429A39 case 2
0x429A51: retn
0x429A52: mov     eax, ds:0B338D0h; jumptable 00429A39 case 3
0x429A57: retn
0x429A58: mov     eax, ds:0B338D8h; jumptable 00429A39 case 4
0x429A5D: retn
