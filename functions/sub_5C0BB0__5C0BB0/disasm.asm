0x5C0BB0: mov     eax, [esp+arg_0]
0x5C0BB4: add     eax, 0FFFFFFFAh; switch 10 cases
0x5C0BB7: cmp     eax, 9
0x5C0BBA: ja      short def_5C0BBC
0x5C0BBC: jmp     ds:jpt_5C0BBC[eax*4]; switch jump
0x5C0BC3: mov     eax, [esp+arg_4]; jumptable 005C0BBC case 6
0x5C0BC7: mov     [ecx+28h], eax
0x5C0BCA: retn    8
0x5C0BCD: mov     edx, [esp+arg_4]; jumptable 005C0BBC case 7
0x5C0BD1: mov     [ecx+2Ch], edx
0x5C0BD4: retn    8
0x5C0BD7: mov     eax, [esp+arg_4]; jumptable 005C0BBC case 8
0x5C0BDB: mov     [ecx+30h], eax
0x5C0BDE: retn    8
0x5C0BE1: mov     edx, [esp+arg_4]; jumptable 005C0BBC case 9
0x5C0BE5: mov     [ecx+34h], edx
0x5C0BE8: retn    8
0x5C0BEB: mov     eax, [esp+arg_4]; jumptable 005C0BBC case 10
0x5C0BEF: mov     [ecx+38h], eax
0x5C0BF2: retn    8
0x5C0BF5: mov     edx, [esp+arg_4]; jumptable 005C0BBC case 11
0x5C0BF9: mov     [ecx+3Ch], edx
0x5C0BFC: retn    8
0x5C0BFF: mov     eax, [esp+arg_4]; jumptable 005C0BBC case 12
0x5C0C03: mov     [ecx+40h], eax
0x5C0C06: retn    8
0x5C0C09: mov     edx, [esp+arg_4]; jumptable 005C0BBC case 13
0x5C0C0D: mov     [ecx+44h], edx
0x5C0C10: retn    8
0x5C0C13: mov     eax, [esp+arg_4]; jumptable 005C0BBC case 14
0x5C0C17: mov     [ecx+48h], eax
0x5C0C1A: retn    8
0x5C0C1D: mov     edx, [esp+arg_4]; jumptable 005C0BBC case 15
0x5C0C21: mov     [ecx+4Ch], edx
