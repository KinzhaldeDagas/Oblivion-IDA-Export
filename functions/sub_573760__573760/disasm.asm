0x573760: mov     cl, [esp+arg_0]
0x573764: movsx   eax, cl
0x573767: cmp     eax, 7Dh; switch 126 cases
0x57376A: ja      short def_573773; jumptable 00573773 default case, cases 1-33,35-38,40-59,63-122,124
0x57376C: movzx   eax, ds:byte_5737CC[eax]
0x573773: jmp     ds:jpt_573773[eax*4]; switch jump
0x57377A: mov     eax, 20h ; ' '; jumptable 00573773 case 0
0x57377F: retn    4
0x573782: mov     eax, 1; jumptable 00573773 cases 60,123
0x573787: retn    4
0x57378A: mov     eax, 2; jumptable 00573773 cases 62,125
0x57378F: retn    4
0x573792: mov     eax, 8; jumptable 00573773 cases 34,39
0x573797: retn    4
0x57379A: mov     eax, 10h; jumptable 00573773 case 61
0x57379F: retn    4
0x5737A2: xor     eax, eax; jumptable 00573773 default case, cases 1-33,35-38,40-59,63-122,124
0x5737A4: cmp     cl, 20h ; ' '
0x5737A7: setnle  al
0x5737AA: sub     eax, 1
0x5737AD: and     eax, 4
0x5737B0: retn    4
