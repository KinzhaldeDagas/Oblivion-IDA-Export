0x5B6670: mov     eax, [esp+arg_0]
0x5B6674: add     eax, 0FFFFFFFFh; switch 63 cases
0x5B6677: cmp     eax, 3Eh
0x5B667A: ja      def_5B6687; jumptable 005B6687 default case, cases 6-8,10,14-22,24-30,33-40,43-45,49-60
0x5B6680: movzx   eax, ds:byte_5B67AC[eax]
0x5B6687: jmp     ds:jpt_5B6687[eax*4]; switch jump
0x5B668E: mov     edx, [esp+arg_4]; jumptable 005B6687 case 9
0x5B6692: mov     [ecx+28h], edx
0x5B6695: retn    8
0x5B6698: mov     eax, [esp+arg_4]; jumptable 005B6687 case 1
0x5B669C: mov     [ecx+2Ch], eax
0x5B669F: retn    8
0x5B66A2: mov     edx, [esp+arg_4]; jumptable 005B6687 case 2
0x5B66A6: mov     [ecx+30h], edx
0x5B66A9: retn    8
0x5B66AC: mov     eax, [esp+arg_4]; jumptable 005B6687 case 3
0x5B66B0: mov     [ecx+34h], eax
0x5B66B3: retn    8
0x5B66B6: mov     edx, [esp+arg_4]; jumptable 005B6687 case 4
0x5B66BA: mov     [ecx+38h], edx
0x5B66BD: retn    8
0x5B66C0: mov     eax, [esp+arg_4]; jumptable 005B6687 case 5
0x5B66C4: mov     [ecx+3Ch], eax
0x5B66C7: retn    8
0x5B66CA: mov     edx, [esp+arg_4]; jumptable 005B6687 case 11
0x5B66CE: mov     [ecx+40h], edx
0x5B66D1: retn    8
0x5B66D4: mov     eax, [esp+arg_4]; jumptable 005B6687 case 12
0x5B66D8: mov     [ecx+44h], eax
0x5B66DB: retn    8
0x5B66DE: mov     edx, [esp+arg_4]; jumptable 005B6687 case 13
0x5B66E2: mov     [ecx+48h], edx
0x5B66E5: retn    8
0x5B66E8: mov     eax, [esp+arg_4]; jumptable 005B6687 case 23
0x5B66EC: mov     [ecx+4Ch], eax
0x5B66EF: retn    8
0x5B66F2: mov     edx, [esp+arg_4]; jumptable 005B6687 case 31
0x5B66F6: mov     [ecx+50h], edx
0x5B66F9: retn    8
0x5B66FC: mov     eax, [esp+arg_4]; jumptable 005B6687 case 32
0x5B6700: mov     [ecx+54h], eax
0x5B6703: retn    8
0x5B6706: mov     edx, [esp+arg_4]; jumptable 005B6687 case 41
0x5B670A: mov     [ecx+58h], edx
0x5B670D: retn    8
0x5B6710: mov     eax, [esp+arg_4]; jumptable 005B6687 case 42
0x5B6714: mov     [ecx+5Ch], eax
0x5B6717: retn    8
0x5B671A: mov     edx, [esp+arg_4]; jumptable 005B6687 case 46
0x5B671E: mov     [ecx+60h], edx
0x5B6721: retn    8
0x5B6724: mov     eax, [esp+arg_4]; jumptable 005B6687 case 47
0x5B6728: mov     [ecx+64h], eax
0x5B672B: retn    8
0x5B672E: mov     edx, [esp+arg_4]; jumptable 005B6687 case 48
0x5B6732: mov     [ecx+68h], edx
0x5B6735: retn    8
0x5B6738: mov     eax, [esp+arg_4]; jumptable 005B6687 case 61
0x5B673C: mov     [ecx+6Ch], eax
0x5B673F: retn    8
0x5B6742: mov     edx, [esp+arg_4]; jumptable 005B6687 case 62
0x5B6746: mov     [ecx+70h], edx
0x5B6749: retn    8
0x5B674C: mov     eax, [esp+arg_4]; jumptable 005B6687 case 63
0x5B6750: mov     [ecx+74h], eax
0x5B6753: retn    8; jumptable 005B6687 default case, cases 6-8,10,14-22,24-30,33-40,43-45,49-60
