0x546800: sub     esp, 8; Calculates an attack desirability score from luck-modified skill, CombatStyle weights, target action-state flags, power/regular attack multiplier, and the attack-during-block multiplier.
0x546803: mov     eax, [esp+8+luckValue]
0x546807: mov     ecx, [esp+8+skillValue]
0x54680B: push    esi
0x54680C: push    eax; luckValue
0x54680D: push    ecx; skillValue
0x54680E: call    Calc_LuckModifiedSkill; Compute Luck-adjusted effective skill as skill + iActorLuckSkillBase + Luck*fActorLuckSkillMult, then clamp to 0..100. Defaults simplify to skill + (Luck-50)*0.4.
0x546813: fdiv    qword ptr ds:0A309F0h
0x546819: mov     esi, [esp+14h+combatStyle]
0x54681D: add     esp, 8
0x546820: cmp     byte ptr [esp+0Ch+targetStaggered], 0
0x546825: fstp    dword ptr [esp+0Ch+var_8]
0x546829: jz      short loc_546839
0x54682B: mov     edx, [esi]
0x54682D: mov     eax, [edx+110h]
0x546833: mov     ecx, esi
0x546835: call    eax
0x546837: jmp     short loc_54683B
0x546839: fldz
0x54683B: cmp     byte ptr [esp+0Ch+targetKnockedDown], 0
0x546840: fstp    [esp+0Ch+targetStaggered]
0x546844: jz      short loc_546854
0x546846: mov     edx, [esi]
0x546848: mov     eax, [edx+114h]
0x54684E: mov     ecx, esi
0x546850: call    eax
0x546852: jmp     short loc_546856
0x546854: fldz
0x546856: cmp     byte ptr [esp+0Ch+targetAttacking], 0
0x54685B: fstp    [esp+0Ch+targetKnockedDown]
0x54685F: jz      short loc_54686F
0x546861: mov     edx, [esi]
0x546863: mov     eax, [edx+118h]
0x546869: mov     ecx, esi
0x54686B: call    eax
0x54686D: jmp     short loc_546871
0x54686F: fldz
0x546871: mov     ecx, esi
0x546873: fstp    [esp+0Ch+targetAttacking]
0x546877: call    sub_4AA030
0x54687C: fmul    dword ptr [esp+0Ch+var_8]
0x546880: mov     ecx, esi
0x546882: fstp    [esp+0Ch+var_8]
0x546886: call    sub_4AA070
0x54688B: fadd    [esp+0Ch+var_8]
0x54688F: mov     edx, [esi]
0x546891: mov     eax, [edx+10Ch]
0x546897: mov     ecx, esi
0x546899: fstp    dword ptr [esp+0Ch+var_8]
0x54689D: call    eax
0x54689F: cmp     [esp+0Ch+usePowerAttack], 0
0x5468A4: movsx   ecx, al
0x5468A7: mov     [esp+0Ch+combatStyle], ecx
0x5468AB: mov     ecx, esi
0x5468AD: fild    [esp+0Ch+combatStyle]
0x5468B1: fadd    [esp+0Ch+targetStaggered]
0x5468B5: fadd    [esp+0Ch+targetKnockedDown]
0x5468B9: fadd    [esp+0Ch+targetAttacking]
0x5468BD: fadd    dword ptr [esp+0Ch+var_8]
0x5468C1: fstp    [esp+0Ch+targetStaggered]
0x5468C5: jz      short loc_5468CE
0x5468C7: call    sub_4AA0B0
0x5468CC: jmp     short loc_5468D3
0x5468CE: call    sub_4AA130
0x5468D3: cmp     [esp+0Ch+targetBlocking], 0
0x5468D8: fstp    [esp+0Ch+targetKnockedDown]
0x5468DC: fld     [esp+0Ch+targetKnockedDown]
0x5468E0: fmul    [esp+0Ch+targetStaggered]
0x5468E4: fstp    [esp+0Ch+targetStaggered]
0x5468E8: jz      short loc_54690A
0x5468EA: mov     ecx, esi
0x5468EC: call    CombatStyle_GetAttackDuringBlockMult
0x5468F1: fstp    [esp+0Ch+targetKnockedDown]
0x5468F5: fld     [esp+0Ch+targetKnockedDown]
0x5468F9: pop     esi
0x5468FA: fmul    [esp+8+targetStaggered]
0x5468FE: fstp    [esp+8+targetStaggered]
0x546902: fld     [esp+8+targetStaggered]
0x546906: add     esp, 8
0x546909: retn
0x54690A: fld1
0x54690C: pop     esi
0x54690D: fstp    [esp+8+targetKnockedDown]
0x546911: fld     [esp+8+targetKnockedDown]
0x546915: fmul    [esp+8+targetStaggered]
0x546919: fstp    [esp+8+targetStaggered]
0x54691D: fld     [esp+8+targetStaggered]
0x546921: add     esp, 8
0x546924: retn
