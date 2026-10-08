0x65D1E0: push    esi; Player integer base-AV setter. Write the actor-base value, refresh UI, and call Player_OnActorValueBaseChanged with rebuild=true. For skills this rebuilds all requiredSkillExp entries but bypasses normal advancement counters.
0x65D1E1: push    edi
0x65D1E2: push    0; a2
0x65D1E4: mov     esi, ecx
0x65D1E6: call    Actor_GetActorBaseForm
0x65D1EB: mov     ecx, [esp+8+arg_4]
0x65D1EF: mov     edx, [eax]
0x65D1F1: mov     edi, [esp+8+a2]
0x65D1F5: mov     edx, [edx+134h]
0x65D1FB: push    ecx
0x65D1FC: push    edi
0x65D1FD: mov     ecx, eax
0x65D1FF: call    edx
0x65D201: push    edi; actorValue
0x65D202: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x65D207: add     esp, 4
0x65D20A: push    1; updatePlayerUI
0x65D20C: push    edi; actorValue
0x65D20D: mov     ecx, esi; this
0x65D20F: call    Player_OnActorValueBaseChanged; Handles player base actor-value changes. For native skill AVs, optional UI refresh also recalculates required experience for all 21 skills; major/non-major membership affects the recomputed requirement through TESClass_IsMajorSkillAV.
0x65D214: pop     edi
0x65D215: pop     esi
0x65D216: retn    8
