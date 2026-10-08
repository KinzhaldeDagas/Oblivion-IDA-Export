0x668440: push    ebx; Applies one selected level-up attribute: current base plus the multiplier derived from the oldest bucket's skill-increase count, clamped to 100. Invalid/sentinel attribute AVs are ignored.
0x668441: push    esi
0x668442: mov     esi, [esp+8+a2]
0x668446: cmp     esi, 7
0x668449: mov     ebx, ecx
0x66844B: ja      short loc_66849E
0x66844D: push    edi
0x66844E: push    esi
0x66844F: call    Actor_GetBaseCalcAVi
0x668454: push    esi; attributeAV
0x668455: mov     ecx, ebx; this
0x668457: mov     edi, eax
0x668459: call    Player_GetAttributeBonusSkillIncreaseCount; Returns the selected attribute's skill-increase count from the oldest queued eight-byte attribute-bonus bucket. The queue preserves separate bonus sets when multiple player levels are pending.
0x66845E: push    eax; skillIncreaseCount
0x66845F: call    LevelUp_GetAttributeMultiplierFromCount; Oblivion native attribute-bonus lookup. skillIncreaseCount <= 0 returns 1; values >= 10 use iLevelUp10Mult. Constructor defaults: counts 1-4 => x2, 5-7 => x3, 8-9 => x4, 10+ => x5.
0x668464: add     edi, eax
0x668466: add     esp, 4
0x668469: cmp     edi, 64h ; 'd'; Clamp the computed final attribute value to Oblivion's native cap of 100 before writing the actor-base value.
0x66846C: jle     short loc_668473; Oblivion clamps the final selected attribute value to 100 before writing it to the actor base.
0x66846E: mov     edi, 64h ; 'd'
0x668473: push    0; a2
0x668475: mov     ecx, ebx; this
0x668477: call    Actor_GetActorBaseForm
0x66847C: mov     edx, [eax]
0x66847E: push    edi
0x66847F: mov     ecx, eax
0x668481: mov     eax, [edx+134h]
0x668487: push    esi
0x668488: call    eax
0x66848A: push    esi; actorValue
0x66848B: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x668490: add     esp, 4
0x668493: push    1; updatePlayerUI
0x668495: push    esi; actorValue
0x668496: mov     ecx, ebx; this
0x668498: call    Player_OnActorValueBaseChanged; Handles player base actor-value changes. For native skill AVs, optional UI refresh also recalculates required experience for all 21 skills; major/non-major membership affects the recomputed requirement through TESClass_IsMajorSkillAV.
0x66849D: pop     edi
0x66849E: pop     esi
0x66849F: pop     ebx
0x6684A0: retn    4
