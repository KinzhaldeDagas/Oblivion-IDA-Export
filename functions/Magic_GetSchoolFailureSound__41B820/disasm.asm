0x41B820: mov     eax, [esp+arg_0]
0x41B824: cmp     eax, 5; switch 6 cases
0x41B827: ja      short Magic_GetSchoolFailureSound___def_41B829
0x41B829: jmp     ds:jpt_41B829[eax*4]; switch jump
0x41B830: mov     eax, MagicFailureSoundAlteration; jumptable 0041B829 case 0
0x41B835: retn
0x41B836: mov     eax, MagicFailureSoundConjuration; jumptable 0041B829 case 1
0x41B83B: retn
0x41B83C: mov     eax, MagicFailureSoundDestruction; jumptable 0041B829 case 2
0x41B841: retn
0x41B842: mov     eax, MagicFailureSoundIllusion; jumptable 0041B829 case 3
0x41B847: retn
0x41B848: mov     eax, MagicFailureSoundMysticism; jumptable 0041B829 case 4
0x41B84D: retn
0x41B84E: mov     eax, MagicFailureSoundRestoration; jumptable 0041B829 case 5
0x41B853: retn
