0x5A3380: mov     eax, [esp+arg_0]
0x5A3384: add     eax, 0FFFFFFFFh; switch 10 cases
0x5A3387: cmp     eax, 9
0x5A338A: ja      short def_5A338C; jumptable 005A338C default case, case 9
0x5A338C: jmp     ds:jpt_5A338C[eax*4]; switch jump
0x5A3393: mov     eax, [esp+arg_4]; jumptable 005A338C case 10
0x5A3397: mov     [ecx+48h], eax
0x5A339A: retn    8
0x5A339D: mov     edx, [esp+arg_4]; jumptable 005A338C case 1
0x5A33A1: mov     [ecx+28h], edx
0x5A33A4: retn    8
0x5A33A7: mov     eax, [esp+arg_4]; jumptable 005A338C case 2
0x5A33AB: mov     [ecx+2Ch], eax
0x5A33AE: retn    8
0x5A33B1: mov     edx, [esp+arg_4]; jumptable 005A338C case 3
0x5A33B5: mov     [ecx+30h], edx
0x5A33B8: retn    8
0x5A33BB: mov     eax, [esp+arg_4]; jumptable 005A338C case 4
0x5A33BF: mov     [ecx+34h], eax
0x5A33C2: retn    8
0x5A33C5: mov     edx, [esp+arg_4]; jumptable 005A338C case 5
0x5A33C9: mov     [ecx+38h], edx
0x5A33CC: retn    8
0x5A33CF: mov     eax, [esp+arg_4]; jumptable 005A338C case 6
0x5A33D3: mov     [ecx+3Ch], eax
0x5A33D6: retn    8
0x5A33D9: mov     edx, [esp+arg_4]; jumptable 005A338C case 7
0x5A33DD: mov     [ecx+40h], edx
0x5A33E0: retn    8
0x5A33E3: mov     eax, [esp+arg_4]; jumptable 005A338C case 8
0x5A33E7: mov     [ecx+44h], eax
0x5A33EA: retn    8; jumptable 005A338C default case, case 9
