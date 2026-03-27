0x565BE0: mov     eax, [esp+arg_0]
0x565BE4: cmp     eax, 6; switch 7 cases
0x565BE7: ja      short ActorValue_GetAVFromGroupOffset___def_565BE9
0x565BE9: jmp     ds:jpt_565BE9[eax*4]; switch jump
0x565BF0: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 0
0x565BF5: retn
0x565BF6: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 1
0x565BFB: add     eax, 8
0x565BFE: retn
0x565BFF: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 2
0x565C04: add     eax, 0Ch
0x565C07: retn
0x565C08: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 3
0x565C0D: add     eax, 21h ; '!'
0x565C10: retn
0x565C11: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 4
0x565C16: add     eax, 25h ; '%'
0x565C19: retn
0x565C1A: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 5
0x565C1F: add     eax, 28h ; '('
0x565C22: retn
0x565C23: movsx   eax, [esp+arg_4]; jumptable 00565BE9 case 6
0x565C28: add     eax, 2Ah ; '*'
0x565C2B: retn
