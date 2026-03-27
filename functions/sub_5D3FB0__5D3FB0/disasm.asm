0x5D3FB0: mov     eax, [esp+arg_0]
0x5D3FB4: add     eax, 0FFFFFFFEh; switch 25 cases
0x5D3FB7: cmp     eax, 18h
0x5D3FBA: ja      def_5D3FC7; jumptable 005D3FC7 default case, cases 4,5,13,16-19,21,23,24
0x5D3FC0: movzx   eax, ds:byte_5D40A4[eax]
0x5D3FC7: jmp     ds:jpt_5D3FC7[eax*4]; switch jump
0x5D3FCE: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 2
0x5D3FD2: mov     [ecx+30h], edx
0x5D3FD5: retn    8
0x5D3FD8: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 3
0x5D3FDC: mov     [ecx+34h], eax
0x5D3FDF: retn    8
0x5D3FE2: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 6
0x5D3FE6: mov     [ecx+38h], edx
0x5D3FE9: retn    8
0x5D3FEC: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 7
0x5D3FF0: mov     [ecx+3Ch], eax
0x5D3FF3: retn    8
0x5D3FF6: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 8
0x5D3FFA: mov     [ecx+40h], edx
0x5D3FFD: retn    8
0x5D4000: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 9
0x5D4004: mov     [ecx+44h], eax
0x5D4007: retn    8
0x5D400A: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 10
0x5D400E: mov     [ecx+48h], edx
0x5D4011: retn    8
0x5D4014: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 12
0x5D4018: mov     [ecx+4Ch], eax
0x5D401B: retn    8
0x5D401E: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 11
0x5D4022: mov     [ecx+50h], edx
0x5D4025: retn    8
0x5D4028: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 14
0x5D402C: mov     [ecx+54h], eax
0x5D402F: retn    8
0x5D4032: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 15
0x5D4036: mov     [ecx+58h], edx
0x5D4039: retn    8
0x5D403C: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 20
0x5D4040: mov     [ecx+5Ch], eax
0x5D4043: retn    8
0x5D4046: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 22
0x5D404A: mov     [ecx+60h], edx
0x5D404D: retn    8
0x5D4050: mov     eax, [esp+arg_4]; jumptable 005D3FC7 case 25
0x5D4054: mov     [ecx+68h], eax
0x5D4057: retn    8
0x5D405A: mov     edx, [esp+arg_4]; jumptable 005D3FC7 case 26
0x5D405E: mov     [ecx+64h], edx
0x5D4061: retn    8; jumptable 005D3FC7 default case, cases 4,5,13,16-19,21,23,24
