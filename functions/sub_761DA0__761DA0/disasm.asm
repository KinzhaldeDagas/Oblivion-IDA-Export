0x761DA0: mov     eax, [esp+arg_0]
0x761DA4: cmp     eax, 4; switch 5 cases
0x761DA7: ja      short def_761DA9
0x761DA9: jmp     ds:jpt_761DA9[eax*4]; switch jump
0x761DB0: mov     eax, 80000000h; jumptable 00761DA9 case 0
0x761DB5: retn
0x761DB6: mov     eax, 1; jumptable 00761DA9 case 1
0x761DBB: retn
0x761DBC: mov     eax, 2; jumptable 00761DA9 case 2
0x761DC1: retn
0x761DC2: mov     eax, 4; jumptable 00761DA9 case 3
0x761DC7: retn
0x761DC8: mov     eax, 8; jumptable 00761DA9 case 4
0x761DCD: retn
