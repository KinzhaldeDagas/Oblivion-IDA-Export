0x592E80: mov     eax, [esp+arg_0]
0x592E84: add     eax, 0FFFFFFFEh; switch 20 cases
0x592E87: cmp     eax, 13h
0x592E8A: ja      def_592E90
0x592E90: jmp     ds:jpt_592E90[eax*4]; switch jump
0x592E97: mov     eax, [esp+arg_4]; jumptable 00592E90 case 2
0x592E9B: mov     [ecx+28h], eax
0x592E9E: retn    8
0x592EA1: mov     edx, [esp+arg_4]; jumptable 00592E90 case 3
0x592EA5: mov     [ecx+2Ch], edx
0x592EA8: retn    8
0x592EAB: mov     eax, [esp+arg_4]; jumptable 00592E90 case 4
0x592EAF: mov     [ecx+30h], eax
0x592EB2: retn    8
0x592EB5: mov     edx, [esp+arg_4]; jumptable 00592E90 case 5
0x592EB9: mov     [ecx+34h], edx
0x592EBC: retn    8
0x592EBF: mov     eax, [esp+arg_4]; jumptable 00592E90 case 6
0x592EC3: mov     [ecx+38h], eax
0x592EC6: retn    8
0x592EC9: mov     edx, [esp+arg_4]; jumptable 00592E90 case 7
0x592ECD: mov     [ecx+3Ch], edx
0x592ED0: retn    8
0x592ED3: mov     eax, [esp+arg_4]; jumptable 00592E90 case 8
0x592ED7: mov     [ecx+40h], eax
0x592EDA: retn    8
0x592EDD: mov     edx, [esp+arg_4]; jumptable 00592E90 case 9
0x592EE1: mov     [ecx+44h], edx
0x592EE4: retn    8
0x592EE7: mov     eax, [esp+arg_4]; jumptable 00592E90 case 10
0x592EEB: mov     [ecx+48h], eax
0x592EEE: retn    8
0x592EF1: mov     edx, [esp+arg_4]; jumptable 00592E90 case 11
0x592EF5: mov     [ecx+4Ch], edx
0x592EF8: retn    8
0x592EFB: mov     eax, [esp+arg_4]; jumptable 00592E90 case 12
0x592EFF: mov     [ecx+50h], eax
0x592F02: retn    8
0x592F05: mov     edx, [esp+arg_4]; jumptable 00592E90 case 13
0x592F09: mov     [ecx+54h], edx
0x592F0C: retn    8
0x592F0F: mov     eax, [esp+arg_4]; jumptable 00592E90 case 14
0x592F13: mov     [ecx+58h], eax
0x592F16: retn    8
0x592F19: mov     edx, [esp+arg_4]; jumptable 00592E90 case 15
0x592F1D: mov     [ecx+5Ch], edx
0x592F20: retn    8
0x592F23: mov     eax, [esp+arg_4]; jumptable 00592E90 case 16
0x592F27: mov     [ecx+60h], eax
0x592F2A: retn    8
0x592F2D: mov     edx, [esp+arg_4]; jumptable 00592E90 case 17
0x592F31: mov     [ecx+64h], edx
0x592F34: retn    8
0x592F37: mov     eax, [esp+arg_4]; jumptable 00592E90 case 18
0x592F3B: mov     [ecx+68h], eax
0x592F3E: retn    8
0x592F41: mov     edx, [esp+arg_4]; jumptable 00592E90 case 19
0x592F45: mov     [ecx+6Ch], edx
0x592F48: retn    8
0x592F4B: mov     eax, [esp+arg_4]; jumptable 00592E90 case 20
0x592F4F: mov     [ecx+70h], eax
0x592F52: retn    8
0x592F55: mov     edx, [esp+arg_4]; jumptable 00592E90 case 21
0x592F59: mov     [ecx+74h], edx
