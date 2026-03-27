0x761CE0: mov     eax, [esp+arg_0]
0x761CE4: test    eax, eax
0x761CE6: jns     short loc_761CEE
0x761CE8: mov     eax, 1
0x761CED: retn
0x761CEE: cmp     eax, 10h; switch 17 cases
0x761CF1: ja      short def_761CF3; jumptable 00761CF3 default case, cases 0,1
0x761CF3: jmp     ds:jpt_761CF3[eax*4]; switch jump
0x761CFA: mov     eax, 2; jumptable 00761CF3 case 2
0x761CFF: retn
0x761D00: mov     eax, 3; jumptable 00761CF3 case 3
0x761D05: retn
0x761D06: mov     eax, 4; jumptable 00761CF3 case 4
0x761D0B: retn
0x761D0C: mov     eax, 5; jumptable 00761CF3 case 5
0x761D11: retn
0x761D12: mov     eax, 6; jumptable 00761CF3 case 6
0x761D17: retn
0x761D18: mov     eax, 7; jumptable 00761CF3 case 7
0x761D1D: retn
0x761D1E: mov     eax, 8; jumptable 00761CF3 case 8
0x761D23: retn
0x761D24: mov     eax, 9; jumptable 00761CF3 case 9
0x761D29: retn
0x761D2A: mov     eax, 0Ah; jumptable 00761CF3 case 10
0x761D2F: retn
0x761D30: mov     eax, 0Bh; jumptable 00761CF3 case 11
0x761D35: retn
0x761D36: mov     eax, 0Ch; jumptable 00761CF3 case 12
0x761D3B: retn
0x761D3C: mov     eax, 0Dh; jumptable 00761CF3 case 13
0x761D41: retn
0x761D42: mov     eax, 0Eh; jumptable 00761CF3 case 14
0x761D47: retn
0x761D48: mov     eax, 0Fh; jumptable 00761CF3 case 15
0x761D4D: retn
0x761D4E: mov     eax, 10h; jumptable 00761CF3 case 16
0x761D53: retn
0x761D54: xor     eax, eax; jumptable 00761CF3 default case, cases 0,1
0x761D56: retn
