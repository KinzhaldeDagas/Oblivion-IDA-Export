0x5A14A0: mov     eax, [esp+arg_0]
0x5A14A4: add     eax, 0FFFFFFFEh; switch 25 cases
0x5A14A7: cmp     eax, 18h
0x5A14AA: ja      EnchMenu_SetField___nullsub_7; jumptable 005A14B0 default case, cases 18,19,21,23
0x5A14B0: jmp     ds:jpt_5A14B0[eax*4]; switch jump
0x5A14B7: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 2
0x5A14BB: mov     [ecx+3Ch], eax
0x5A14BE: retn    8
0x5A14C1: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 24
0x5A14C5: mov     [ecx+40h], edx
0x5A14C8: retn    8
0x5A14CB: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 3
0x5A14CF: mov     [ecx+44h], eax
0x5A14D2: retn    8
0x5A14D5: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 4
0x5A14D9: mov     [ecx+50h], edx
0x5A14DC: retn    8
0x5A14DF: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 5
0x5A14E3: mov     [ecx+48h], eax
0x5A14E6: retn    8
0x5A14E9: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 13
0x5A14ED: mov     [ecx+4Ch], edx
0x5A14F0: retn    8
0x5A14F3: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 6
0x5A14F7: mov     [ecx+54h], eax
0x5A14FA: retn    8
0x5A14FD: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 7
0x5A1501: mov     [ecx+58h], edx
0x5A1504: retn    8
0x5A1507: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 8
0x5A150B: mov     [ecx+5Ch], eax
0x5A150E: retn    8
0x5A1511: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 9
0x5A1515: mov     [ecx+60h], edx
0x5A1518: retn    8
0x5A151B: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 10
0x5A151F: mov     [ecx+64h], eax
0x5A1522: retn    8
0x5A1525: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 12
0x5A1529: mov     [ecx+68h], edx
0x5A152C: retn    8
0x5A152F: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 11
0x5A1533: mov     [ecx+6Ch], eax
0x5A1536: retn    8
0x5A1539: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 14
0x5A153D: mov     [ecx+70h], edx
0x5A1540: retn    8
0x5A1543: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 15
0x5A1547: mov     [ecx+74h], eax
0x5A154A: retn    8
0x5A154D: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 16
0x5A1551: mov     [ecx+78h], edx
0x5A1554: retn    8
0x5A1557: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 17
0x5A155B: mov     [ecx+7Ch], eax
0x5A155E: retn    8
0x5A1561: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 20
0x5A1565: mov     [ecx+80h], edx
0x5A156B: retn    8
0x5A156E: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 22
0x5A1572: mov     [ecx+84h], eax
0x5A1578: retn    8
0x5A157B: mov     edx, [esp+arg_4]; jumptable 005A14B0 case 25
0x5A157F: mov     [ecx+8Ch], edx
0x5A1585: retn    8
0x5A1588: mov     eax, [esp+arg_4]; jumptable 005A14B0 case 26
0x5A158C: mov     [ecx+88h], eax
0x5A1592: retn    8; jumptable 005A14B0 default case, cases 18,19,21,23
