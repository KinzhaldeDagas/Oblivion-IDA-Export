0x774EE0: mov     eax, [esp+arg_0]
0x774EE4: cmp     eax, 3154454Dh
0x774EE9: jg      short loc_774F28
0x774EEB: jz      loc_774F71; jumptable 00774EFD cases 0,100
0x774EF1: cmp     eax, 75h; switch 118 cases
0x774EF4: ja      short def_774EFD; jumptable 00774EFD default case, cases 1-19,37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774EF6: movzx   eax, ds:byte_774F94[eax]
0x774EFD: jmp     ds:jpt_774EFD[eax*4]; switch jump
0x774F04: mov     eax, 8; jumptable 00774EFD cases 27,28,41,50,52
0x774F09: retn
0x774F0A: mov     eax, 10h; jumptable 00774EFD cases 23-26,29,30,34,40,51,60,61,70,73,80,81,101,111,117
0x774F0F: retn
0x774F10: mov     eax, 18h; jumptable 00774EFD case 20
0x774F15: retn
0x774F16: mov     eax, 20h ; ' '; jumptable 00774EFD cases 21,22,31-33,35,62-64,67,71,75,77,79,82,83,102,112,114
0x774F1B: retn
0x774F1C: mov     eax, 40h ; '@'; jumptable 00774EFD cases 36,110,113,115
0x774F21: retn
0x774F22: mov     eax, 80h ; '€'; jumptable 00774EFD case 116
0x774F27: retn
0x774F28: cmp     eax, 34545844h
0x774F2D: jg      short loc_774F4F
0x774F2F: jz      short loc_774F71; jumptable 00774EFD cases 0,100
0x774F31: cmp     eax, 32595559h
0x774F36: jg      short loc_774F48
0x774F38: jz      short loc_774F71; jumptable 00774EFD cases 0,100
0x774F3A: cmp     eax, 31545844h
0x774F3F: jz      short loc_774F71; jumptable 00774EFD cases 0,100
0x774F41: cmp     eax, 32545844h
0x774F46: jmp     short loc_774F6B
0x774F48: cmp     eax, 33545844h
0x774F4D: jmp     short loc_774F6B
0x774F4F: cmp     eax, 47424752h
0x774F54: jg      short loc_774F66
0x774F56: jz      short loc_774F71; jumptable 00774EFD cases 0,100
0x774F58: cmp     eax, 35545844h
0x774F5D: jz      short loc_774F71; jumptable 00774EFD cases 0,100
0x774F5F: cmp     eax, 42475247h
0x774F64: jmp     short loc_774F6B
0x774F66: cmp     eax, 59565955h
0x774F6B: jz      short loc_774F71; jumptable 00774EFD cases 0,100
0x774F6D: or      eax, 0FFFFFFFFh; jumptable 00774EFD default case, cases 1-19,37-39,42-49,53-59,65,66,68,69,72,74,76,78,84-99,103-109
0x774F70: retn
0x774F71: xor     eax, eax; jumptable 00774EFD cases 0,100
0x774F73: retn
