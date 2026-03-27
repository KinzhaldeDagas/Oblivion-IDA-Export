0x5D02A0: mov     eax, [esp+arg_0]
0x5D02A4: add     eax, 0FFFFFFFFh; switch 17 cases
0x5D02A7: cmp     eax, 10h
0x5D02AA: ja      short def_5D02AC; jumptable 005D02AC default case, cases 4,9,10,12-14
0x5D02AC: jmp     ds:jpt_5D02AC[eax*4]; switch jump
0x5D02B3: mov     eax, [esp+arg_4]; jumptable 005D02AC case 1
0x5D02B7: mov     [ecx+28h], eax
0x5D02BA: retn    8
0x5D02BD: mov     edx, [esp+arg_4]; jumptable 005D02AC case 2
0x5D02C1: mov     [ecx+2Ch], edx
0x5D02C4: retn    8
0x5D02C7: mov     eax, [esp+arg_4]; jumptable 005D02AC case 16
0x5D02CB: mov     [ecx+30h], eax
0x5D02CE: retn    8
0x5D02D1: mov     edx, [esp+arg_4]; jumptable 005D02AC case 17
0x5D02D5: mov     [ecx+50h], edx
0x5D02D8: retn    8
0x5D02DB: mov     eax, [esp+arg_4]; jumptable 005D02AC case 3
0x5D02DF: mov     [ecx+34h], eax
0x5D02E2: retn    8
0x5D02E5: mov     edx, [esp+arg_4]; jumptable 005D02AC case 5
0x5D02E9: mov     [ecx+38h], edx
0x5D02EC: retn    8
0x5D02EF: mov     eax, [esp+arg_4]; jumptable 005D02AC case 6
0x5D02F3: mov     [ecx+40h], eax
0x5D02F6: retn    8
0x5D02F9: mov     edx, [esp+arg_4]; jumptable 005D02AC case 8
0x5D02FD: mov     [ecx+44h], edx
0x5D0300: retn    8
0x5D0303: mov     eax, [esp+arg_4]; jumptable 005D02AC case 7
0x5D0307: mov     [ecx+3Ch], eax
0x5D030A: retn    8
0x5D030D: mov     edx, [esp+arg_4]; jumptable 005D02AC case 11
0x5D0311: mov     [ecx+48h], edx
0x5D0314: retn    8
0x5D0317: mov     eax, [esp+arg_4]; jumptable 005D02AC case 15
0x5D031B: mov     [ecx+4Ch], eax
0x5D031E: retn    8; jumptable 005D02AC default case, cases 4,9,10,12-14
