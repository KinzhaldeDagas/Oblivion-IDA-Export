0x5CE730: mov     eax, [esp+arg_0]
0x5CE734: add     eax, 0FFFFFFFFh; switch 6 cases
0x5CE737: cmp     eax, 5
0x5CE73A: ja      short def_5CE73C; jumptable 005CE73C default case, case 2
0x5CE73C: jmp     ds:jpt_5CE73C[eax*4]; switch jump
0x5CE743: mov     eax, [esp+arg_4]; jumptable 005CE73C case 3
0x5CE747: mov     [ecx+2Ch], eax
0x5CE74A: retn    8
0x5CE74D: mov     edx, [esp+arg_4]; jumptable 005CE73C case 4
0x5CE751: mov     [ecx+30h], edx
0x5CE754: retn    8
0x5CE757: mov     eax, [esp+arg_4]; jumptable 005CE73C case 5
0x5CE75B: mov     [ecx+34h], eax
0x5CE75E: retn    8
0x5CE761: mov     edx, [esp+arg_4]; jumptable 005CE73C case 6
0x5CE765: mov     [ecx+38h], edx
0x5CE768: retn    8
0x5CE76B: mov     eax, [esp+arg_4]; jumptable 005CE73C case 1
0x5CE76F: mov     [ecx+28h], eax
0x5CE772: retn    8; jumptable 005CE73C default case, case 2
