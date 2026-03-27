0x5D2C60: mov     eax, [esp+arg_0]
0x5D2C64: add     eax, 0FFFFFFFFh; switch 9 cases
0x5D2C67: cmp     eax, 8
0x5D2C6A: ja      short def_5D2C6C; jumptable 005D2C6C default case, case 8
0x5D2C6C: jmp     ds:jpt_5D2C6C[eax*4]; switch jump
0x5D2C73: mov     eax, [esp+arg_4]; jumptable 005D2C6C case 5
0x5D2C77: mov     [ecx+3Ch], eax
0x5D2C7A: retn    8
0x5D2C7D: mov     edx, [esp+arg_4]; jumptable 005D2C6C case 4
0x5D2C81: mov     [ecx+38h], edx
0x5D2C84: retn    8
0x5D2C87: mov     eax, [esp+arg_4]; jumptable 005D2C6C case 3
0x5D2C8B: mov     [ecx+34h], eax
0x5D2C8E: retn    8
0x5D2C91: mov     edx, [esp+arg_4]; jumptable 005D2C6C case 1
0x5D2C95: mov     [ecx+28h], edx
0x5D2C98: retn    8
0x5D2C9B: mov     eax, [esp+arg_4]; jumptable 005D2C6C case 2
0x5D2C9F: mov     [ecx+2Ch], eax
0x5D2CA2: retn    8
0x5D2CA5: mov     edx, [esp+arg_4]; jumptable 005D2C6C case 6
0x5D2CA9: mov     [ecx+40h], edx
0x5D2CAC: retn    8
0x5D2CAF: mov     eax, [esp+arg_4]; jumptable 005D2C6C case 7
0x5D2CB3: mov     [ecx+44h], eax
0x5D2CB6: retn    8
0x5D2CB9: mov     edx, [esp+arg_4]; jumptable 005D2C6C case 9
0x5D2CBD: mov     [ecx+48h], edx
0x5D2CC0: retn    8; jumptable 005D2C6C default case, case 8
