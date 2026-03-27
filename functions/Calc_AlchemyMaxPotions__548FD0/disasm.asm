0x548FD0: mov     eax, [esp+arg_0]
0x548FD4: push    eax
0x548FD5: call    Calc_MasteryFromSkill
0x548FDA: add     eax, 0FFFFFFFFh; switch 4 cases
0x548FDD: add     esp, 4
0x548FE0: cmp     eax, 3
0x548FE3: ja      short Calc_AlchemyMaxPotions___def_548FE5
0x548FE5: jmp     ds:jpt_548FE5[eax*4]; switch jump
0x548FEC: mov     eax, ds:0B380B0h; jumptable 00548FE5 case 1
0x548FF1: retn
0x548FF2: mov     eax, ds:0B380B8h; jumptable 00548FE5 case 2
0x548FF7: retn
0x548FF8: mov     eax, ds:0B380C0h; jumptable 00548FE5 case 3
0x548FFD: retn
0x548FFE: mov     eax, ds:0B380C8h; jumptable 00548FE5 case 4
0x549003: retn
