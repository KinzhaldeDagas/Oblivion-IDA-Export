0x5D74B0: mov     eax, [esp+arg_0]
0x5D74B4: add     eax, 0FFFFFFFFh; switch 20 cases
0x5D74B7: cmp     eax, 13h
0x5D74BA: ja      short def_5D74BC; jumptable 005D74BC default case, cases 3-5,13,16-19
0x5D74BC: jmp     ds:jpt_5D74BC[eax*4]; switch jump
0x5D74C3: mov     eax, [esp+arg_4]; jumptable 005D74BC case 1
0x5D74C7: mov     [ecx+28h], eax
0x5D74CA: retn    8
0x5D74CD: mov     edx, [esp+arg_4]; jumptable 005D74BC case 6
0x5D74D1: mov     [ecx+2Ch], edx
0x5D74D4: retn    8
0x5D74D7: mov     eax, [esp+arg_4]; jumptable 005D74BC case 7
0x5D74DB: mov     [ecx+30h], eax
0x5D74DE: retn    8
0x5D74E1: mov     edx, [esp+arg_4]; jumptable 005D74BC case 8
0x5D74E5: mov     [ecx+34h], edx
0x5D74E8: retn    8
0x5D74EB: mov     eax, [esp+arg_4]; jumptable 005D74BC case 9
0x5D74EF: mov     [ecx+38h], eax
0x5D74F2: retn    8
0x5D74F5: mov     edx, [esp+arg_4]; jumptable 005D74BC case 10
0x5D74F9: mov     [ecx+3Ch], edx
0x5D74FC: retn    8
0x5D74FF: mov     eax, [esp+arg_4]; jumptable 005D74BC case 11
0x5D7503: mov     [ecx+40h], eax
0x5D7506: retn    8
0x5D7509: mov     edx, [esp+arg_4]; jumptable 005D74BC case 12
0x5D750D: mov     [ecx+44h], edx
0x5D7510: retn    8
0x5D7513: mov     eax, [esp+arg_4]; jumptable 005D74BC case 14
0x5D7517: mov     [ecx+48h], eax
0x5D751A: retn    8
0x5D751D: mov     edx, [esp+arg_4]; jumptable 005D74BC case 15
0x5D7521: mov     [ecx+4Ch], edx
0x5D7524: retn    8
0x5D7527: mov     eax, [esp+arg_4]; jumptable 005D74BC case 2
0x5D752B: mov     [ecx+50h], eax
0x5D752E: retn    8
0x5D7531: mov     edx, [esp+arg_4]; jumptable 005D74BC case 20
0x5D7535: mov     [ecx+54h], edx
0x5D7538: retn    8; jumptable 005D74BC default case, cases 3-5,13,16-19
