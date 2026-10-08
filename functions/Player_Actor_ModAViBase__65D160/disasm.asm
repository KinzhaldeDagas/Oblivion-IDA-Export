0x65D160: push    esi; Player integer base-AV modifier. Mutate actor-base storage directly, refresh UI, and notify with rebuild=true. This is not Player_SkillLevelIncrease.
0x65D161: push    edi
0x65D162: push    0; a2
0x65D164: mov     esi, ecx
0x65D166: call    Actor_GetActorBaseForm
0x65D16B: mov     ecx, [esp+8+arg_4]
0x65D16F: mov     edx, [eax]
0x65D171: mov     edi, [esp+8+a2]
0x65D175: mov     edx, [edx+13Ch]
0x65D17B: push    ecx
0x65D17C: push    edi
0x65D17D: mov     ecx, eax
0x65D17F: call    edx
0x65D181: push    edi; actorValue
0x65D182: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x65D187: add     esp, 4
0x65D18A: push    1; updatePlayerUI
0x65D18C: push    edi; actorValue
0x65D18D: mov     ecx, esi; this
0x65D18F: call    Player_OnActorValueBaseChanged; Handles player base actor-value changes. For native skill AVs, optional UI refresh also recalculates required experience for all 21 skills; major/non-major membership affects the recomputed requirement through TESClass_IsMajorSkillAV.
0x65D194: pop     edi
0x65D195: pop     esi
0x65D196: retn    8
