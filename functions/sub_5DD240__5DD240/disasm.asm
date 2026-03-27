0x5DD240: mov     eax, [esp+arg_0]
0x5DD244: add     eax, 0FFFFFFFFh; switch 12 cases
0x5DD247: cmp     eax, 0Bh
0x5DD24A: ja      short def_5DD24C; jumptable 005DD24C default case, case 5
0x5DD24C: jmp     ds:jpt_5DD24C[eax*4]; switch jump
0x5DD253: mov     eax, [esp+arg_4]; jumptable 005DD24C case 1
0x5DD257: mov     [ecx+28h], eax
0x5DD25A: retn    8
0x5DD25D: mov     edx, [esp+arg_4]; jumptable 005DD24C case 2
0x5DD261: mov     [ecx+2Ch], edx
0x5DD264: retn    8
0x5DD267: mov     eax, [esp+arg_4]; jumptable 005DD24C case 3
0x5DD26B: mov     [ecx+30h], eax
0x5DD26E: retn    8
0x5DD271: mov     edx, [esp+arg_4]; jumptable 005DD24C case 4
0x5DD275: mov     [ecx+34h], edx
0x5DD278: retn    8
0x5DD27B: mov     eax, [esp+arg_4]; jumptable 005DD24C case 9
0x5DD27F: mov     [ecx+44h], eax
0x5DD282: retn    8
0x5DD285: mov     edx, [esp+arg_4]; jumptable 005DD24C case 6
0x5DD289: mov     [ecx+38h], edx
0x5DD28C: retn    8
0x5DD28F: mov     eax, [esp+arg_4]; jumptable 005DD24C case 7
0x5DD293: mov     [ecx+3Ch], eax
0x5DD296: retn    8
0x5DD299: mov     edx, [esp+arg_4]; jumptable 005DD24C case 8
0x5DD29D: mov     [ecx+40h], edx
0x5DD2A0: retn    8
0x5DD2A3: mov     eax, [esp+arg_4]; jumptable 005DD24C case 10
0x5DD2A7: mov     [ecx+48h], eax
0x5DD2AA: retn    8
0x5DD2AD: mov     edx, [esp+arg_4]; jumptable 005DD24C case 11
0x5DD2B1: mov     [ecx+4Ch], edx
0x5DD2B4: retn    8
0x5DD2B7: mov     eax, [esp+arg_4]; jumptable 005DD24C case 12
0x5DD2BB: mov     [ecx+50h], eax
0x5DD2BE: retn    8; jumptable 005DD24C default case, case 5
