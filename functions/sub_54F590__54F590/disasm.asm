0x54F590: mov     eax, [esp+arg_0]
0x54F594: add     eax, 0FFFFFFFFh; switch 6 cases
0x54F597: cmp     eax, 5
0x54F59A: ja      short def_54F59C
0x54F59C: jmp     ds:jpt_54F59C[eax*4]; switch jump
0x54F5A3: xor     eax, eax; jumptable 0054F59C cases 1,2
0x54F5A5: retn
0x54F5A6: mov     eax, 1; jumptable 0054F59C case 3
0x54F5AB: retn
0x54F5AC: mov     eax, 2; jumptable 0054F59C case 5
0x54F5B1: retn
0x54F5B2: mov     eax, 3; jumptable 0054F59C case 4
0x54F5B7: retn
0x54F5B8: mov     eax, 4; jumptable 0054F59C case 6
0x54F5BD: retn
