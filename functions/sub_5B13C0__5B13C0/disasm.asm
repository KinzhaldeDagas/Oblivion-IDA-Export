0x5B13C0: mov     eax, [esp+arg_0]
0x5B13C4: add     eax, 0FFFFFFF7h; switch 4 cases
0x5B13C7: cmp     eax, 3
0x5B13CA: ja      short def_5B13CC
0x5B13CC: jmp     ds:jpt_5B13CC[eax*4]; switch jump
0x5B13D3: mov     eax, [esp+arg_4]; jumptable 005B13CC case 9
0x5B13D7: mov     [ecx+28h], eax
0x5B13DA: retn    8
0x5B13DD: mov     edx, [esp+arg_4]; jumptable 005B13CC case 10
0x5B13E1: mov     [ecx+2Ch], edx
0x5B13E4: retn    8
0x5B13E7: mov     eax, [esp+arg_4]; jumptable 005B13CC case 11
0x5B13EB: mov     [ecx+30h], eax
0x5B13EE: retn    8
0x5B13F1: mov     edx, [esp+arg_4]; jumptable 005B13CC case 12
0x5B13F5: mov     [ecx+34h], edx
