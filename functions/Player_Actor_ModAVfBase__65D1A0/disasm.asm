0x65D1A0: push    esi; Player float base-AV modifier. Mutate the actor-base value, refresh UI, and notify with rebuild=true; skill thresholds are rebuilt without awarding skill-level side effects.
0x65D1A1: push    edi
0x65D1A2: push    0; a2
0x65D1A4: mov     esi, ecx
0x65D1A6: call    Actor_GetActorBaseForm
0x65D1AB: fld     [esp+8+arg_4]
0x65D1AF: mov     edx, [eax]
0x65D1B1: mov     edi, [esp+8+a2]
0x65D1B5: push    ecx
0x65D1B6: fstp    [esp+0Ch+var_C]
0x65D1B9: mov     ecx, eax
0x65D1BB: mov     eax, [edx+138h]
0x65D1C1: push    edi
0x65D1C2: call    eax
0x65D1C4: push    edi; actorValue
0x65D1C5: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x65D1CA: add     esp, 4
0x65D1CD: push    1; updatePlayerUI
0x65D1CF: push    edi; actorValue
0x65D1D0: mov     ecx, esi; this
0x65D1D2: call    Player_OnActorValueBaseChanged; Handles player base actor-value changes. For native skill AVs, optional UI refresh also recalculates required experience for all 21 skills; major/non-major membership affects the recomputed requirement through TESClass_IsMajorSkillAV.
0x65D1D7: pop     edi
0x65D1D8: pop     esi
0x65D1D9: retn    8
