0x5D8860: mov     eax, [esp+arg_0]
0x5D8864: add     eax, 0FFFFFFFFh; switch 8 cases
0x5D8867: cmp     eax, 7
0x5D886A: ja      short def_5D886C
0x5D886C: jmp     ds:jpt_5D886C[eax*4]; switch jump
0x5D8873: mov     eax, [esp+arg_4]; jumptable 005D886C case 1
0x5D8877: mov     [ecx+28h], eax
0x5D887A: retn    8
0x5D887D: mov     edx, [esp+arg_4]; jumptable 005D886C case 2
0x5D8881: mov     [ecx+34h], edx
0x5D8884: retn    8
0x5D8887: mov     eax, [esp+arg_4]; jumptable 005D886C case 6
0x5D888B: mov     [ecx+30h], eax
0x5D888E: retn    8
0x5D8891: mov     edx, [esp+arg_4]; jumptable 005D886C case 4
0x5D8895: mov     [ecx+38h], edx
0x5D8898: retn    8
0x5D889B: mov     eax, [esp+arg_4]; jumptable 005D886C case 5
0x5D889F: mov     [ecx+3Ch], eax
0x5D88A2: retn    8
0x5D88A5: mov     edx, [esp+arg_4]; jumptable 005D886C case 3
0x5D88A9: mov     [ecx+2Ch], edx
0x5D88AC: retn    8
0x5D88AF: mov     eax, [esp+arg_4]; jumptable 005D886C case 8
0x5D88B3: mov     [ecx+44h], eax
0x5D88B6: retn    8
0x5D88B9: mov     edx, [esp+arg_4]; jumptable 005D886C case 7
0x5D88BD: mov     [ecx+40h], edx
