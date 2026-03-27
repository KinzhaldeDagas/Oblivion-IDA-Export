0x41BA00: mov     eax, [esp+arg_0]
0x41BA04: push    eax
0x41BA05: call    Calc_MasteryFromSkill
0x41BA0A: add     eax, 0FFFFFFFFh; switch 4 cases
0x41BA0D: add     esp, 4
0x41BA10: cmp     eax, 3
0x41BA13: ja      short Magic_GetWortcraftMaxEffects___def_41BA15
0x41BA15: jmp     ds:jpt_41BA15[eax*4]; switch jump
0x41BA1C: mov     eax, iWortcraftMaxEffectsApprentice; jumptable 0041BA15 case 1
0x41BA21: retn
0x41BA22: mov     eax, iWortcraftMaxEffectsJourneyman; jumptable 0041BA15 case 2
0x41BA27: retn
0x41BA28: mov     eax, iWortcraftMaxEffectsExpert; jumptable 0041BA15 case 3
0x41BA2D: retn
0x41BA2E: mov     eax, iWortcraftMaxEffectsMaster; jumptable 0041BA15 case 4
0x41BA33: retn
