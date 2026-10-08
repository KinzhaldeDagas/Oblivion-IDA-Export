0x41BA00: mov     eax, [esp+skillValue]
0x41BA04: push    eax; skillValue
0x41BA05: call    Calc_MasteryFromSkill; Map a base skill value to Oblivion's five mastery tiers using iSkillApprenticeMin=25, iSkillJourneymanMin=50, iSkillExpertMin=75, and iSkillMasterMin=100.
0x41BA0A: add     eax, 0FFFFFFFFh; switch 4 cases
0x41BA0D: add     esp, 4
0x41BA10: cmp     eax, 3
0x41BA13: ja      short Magic_GetWortcraftMaxEffects___def_41BA15
0x41BA15: jmp     ds:jpt_41BA15[eax*4]; switch jump
0x41BA1C: mov     eax, ds:0B336D4h; jumptable 0041BA15 case 1
0x41BA21: retn
0x41BA22: mov     eax, ds:0B336DCh; jumptable 0041BA15 case 2
0x41BA27: retn
0x41BA28: mov     eax, ds:0B336E4h; jumptable 0041BA15 case 3
0x41BA2D: retn
0x41BA2E: mov     eax, ds:0B336ECh; jumptable 0041BA15 case 4
0x41BA33: retn
