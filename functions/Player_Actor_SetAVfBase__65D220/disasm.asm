0x65D220: push    esi; Player float base-AV setter. Write actor-base storage, refresh UI, and notify with rebuild=true; direct skill writes do not increment majorSkillAdvances.
0x65D221: push    edi
0x65D222: push    0; a2
0x65D224: mov     esi, ecx
0x65D226: call    Actor_GetActorBaseForm
0x65D22B: fld     [esp+8+arg_4]
0x65D22F: mov     edx, [eax]
0x65D231: mov     edi, [esp+8+a2]
0x65D235: push    ecx
0x65D236: fstp    [esp+0Ch+var_C]
0x65D239: mov     ecx, eax
0x65D23B: mov     eax, [edx+130h]
0x65D241: push    edi
0x65D242: call    eax
0x65D244: push    edi; actorValue
0x65D245: call    UI_UpdateActorValueDisplays; UI_UpdateActorValueDisplays(actorValue), called by player base-AV setters/modifiers after changing base form values.
0x65D24A: add     esp, 4
0x65D24D: push    1; updatePlayerUI
0x65D24F: push    edi; actorValue
0x65D250: mov     ecx, esi; this
0x65D252: call    Player_OnActorValueBaseChanged; Handles player base actor-value changes. For native skill AVs, optional UI refresh also recalculates required experience for all 21 skills; major/non-major membership affects the recomputed requirement through TESClass_IsMajorSkillAV.
0x65D257: pop     edi
0x65D258: pop     esi
0x65D259: retn    8
