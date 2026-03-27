0x612DE0: push    esi
0x612DE1: mov     esi, [esp+4+arg_0]
0x612DE5: push    edi
0x612DE6: mov     edi, ecx
0x612DE8: cmp     esi, [edi+70h]
0x612DEB: jz      loc_612E98
0x612DF1: cmp     byte ptr ds:0B3B908h, 0
0x612DF8: jz      loc_612E8C
0x612DFE: cmp     esi, 0Dh
0x612E01: jz      loc_612E8C
0x612E07: test    esi, esi
0x612E09: jnz     short loc_612E12
0x612E0B: mov     eax, offset aFightHandToHan; "fight Hand-to-Hand"
0x612E10: jmp     short loc_612E75
0x612E12: cmp     esi, 1
0x612E15: jnz     short loc_612E1E
0x612E17: mov     eax, offset aFightWithAMele; "fight with a Melee Weapon"
0x612E1C: jmp     short loc_612E75
0x612E1E: cmp     esi, 2
0x612E21: jnz     short loc_612E2A
0x612E23: mov     eax, offset aFightWithARang; "fight with a Ranged Weapon"
0x612E28: jmp     short loc_612E75
0x612E2A: cmp     esi, 3
0x612E2D: jnz     short loc_612E36
0x612E2F: mov     eax, offset aCastTouchSpell; "cast Touch spells"
0x612E34: jmp     short loc_612E75
0x612E36: cmp     esi, 4
0x612E39: jnz     short loc_612E42
0x612E3B: mov     eax, offset aCastRangedSpel; "cast Ranged spells"
0x612E40: jmp     short loc_612E75
0x612E42: cmp     esi, 5
0x612E45: jnz     short loc_612E4E
0x612E47: mov     eax, offset aAttemptToYield; "attempt to Yield"
0x612E4C: jmp     short loc_612E75
0x612E4E: cmp     esi, 0Ah
0x612E51: jnz     short loc_612E5A
0x612E53: mov     eax, offset aSwitchWeapons; "Switch weapons"
0x612E58: jmp     short loc_612E75
0x612E5A: cmp     esi, 0Ch
0x612E5D: jnz     short loc_612E66
0x612E5F: mov     eax, offset aGetOutOfTheWat; "Get out of the water"
0x612E64: jmp     short loc_612E75
0x612E66: cmp     esi, 7
0x612E69: mov     eax, offset aAttemptToFlee; "attempt to Flee"
0x612E6E: jz      short loc_612E75
0x612E70: mov     eax, offset a___justKindaSt; "...just kinda stand around"
0x612E75: mov     ecx, [edi+3Ch]; this
0x612E78: push    eax
0x612E79: call    TESObjectREFR_GetName
0x612E7E: push    eax
0x612E7F: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x612E84: call    Interface_ConsolePrint
0x612E89: add     esp, 0Ch
0x612E8C: fld     dword ptr ds:0A30634h
0x612E92: fstp    dword ptr [edi+188h]
0x612E98: mov     [edi+70h], esi
0x612E9B: pop     edi
0x612E9C: pop     esi
0x612E9D: retn    4
