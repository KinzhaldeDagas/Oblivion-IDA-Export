0x5CE790: mov     eax, [esp+arg_0]
0x5CE794: add     eax, 0FFFFFFFFh; switch 6 cases
0x5CE797: cmp     eax, 5
0x5CE79A: ja      short def_5CE79C; jumptable 005CE79C default case, case 2
0x5CE79C: jmp     ds:jpt_5CE79C[eax*4]; switch jump
0x5CE7A3: mov     eax, [ecx+28h]; jumptable 005CE79C case 1
0x5CE7A6: retn    4
0x5CE7A9: mov     eax, [ecx+2Ch]; jumptable 005CE79C case 3
0x5CE7AC: retn    4
0x5CE7AF: mov     eax, [ecx+30h]; jumptable 005CE79C case 4
0x5CE7B2: retn    4
0x5CE7B5: mov     eax, [ecx+34h]; jumptable 005CE79C case 5
0x5CE7B8: retn    4
0x5CE7BB: mov     eax, [ecx+38h]; jumptable 005CE79C case 6
0x5CE7BE: retn    4
0x5CE7C1: xor     eax, eax; jumptable 005CE79C default case, case 2
0x5CE7C3: retn    4
