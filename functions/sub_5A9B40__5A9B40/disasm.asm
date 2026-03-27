0x5A9B40: mov     eax, [esp+arg_0]
0x5A9B44: add     eax, 0FFFFFFF7h; switch 5 cases
0x5A9B47: cmp     eax, 4
0x5A9B4A: ja      short def_5A9B4C
0x5A9B4C: jmp     ds:jpt_5A9B4C[eax*4]; switch jump
0x5A9B53: mov     eax, [esp+arg_4]; jumptable 005A9B4C case 9
0x5A9B57: mov     [ecx+28h], eax
0x5A9B5A: retn    8
0x5A9B5D: mov     edx, [esp+arg_4]; jumptable 005A9B4C case 10
0x5A9B61: mov     [ecx+2Ch], edx
0x5A9B64: retn    8
0x5A9B67: mov     eax, [esp+arg_4]; jumptable 005A9B4C case 11
0x5A9B6B: mov     [ecx+30h], eax
0x5A9B6E: retn    8
0x5A9B71: mov     edx, [esp+arg_4]; jumptable 005A9B4C case 12
0x5A9B75: mov     [ecx+34h], edx
0x5A9B78: retn    8
0x5A9B7B: mov     eax, [esp+arg_4]; jumptable 005A9B4C case 13
0x5A9B7F: mov     [ecx+38h], eax
