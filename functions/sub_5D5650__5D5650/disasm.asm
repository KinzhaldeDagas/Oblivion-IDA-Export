0x5D5650: mov     eax, [esp+arg_0]
0x5D5654: add     eax, 0FFFFFFFFh; switch 5 cases
0x5D5657: cmp     eax, 4
0x5D565A: ja      short def_5D565C
0x5D565C: jmp     ds:jpt_5D565C[eax*4]; switch jump
0x5D5663: mov     eax, [esp+arg_4]; jumptable 005D565C case 1
0x5D5667: mov     [ecx+28h], eax
0x5D566A: retn    8
0x5D566D: mov     edx, [esp+arg_4]; jumptable 005D565C case 3
0x5D5671: mov     [ecx+30h], edx
0x5D5674: retn    8
0x5D5677: mov     eax, [esp+arg_4]; jumptable 005D565C case 2
0x5D567B: mov     [ecx+2Ch], eax
0x5D567E: retn    8
0x5D5681: mov     edx, [esp+arg_4]; jumptable 005D565C case 4
0x5D5685: mov     [ecx+34h], edx
0x5D5688: retn    8
0x5D568B: mov     eax, [esp+arg_4]; jumptable 005D565C case 5
0x5D568F: mov     [ecx+38h], eax
