0x668C30: push    ebx; Oblivion skill-use router. Exhaustive vtable-dispatch scan finds 21 native gameplay callsites: 18 [vtable+0x39C] loads plus three magic paths using an adjusted vtable pointer. It selects TESSkill useValue0/useValue1 and forwards positive progress below skill 100. Major membership affects the required-use denominator, not this raw award.
0x668C31: mov     ebx, [esp+4+actorValue]
0x668C35: push    esi
0x668C36: push    edi
0x668C37: push    ebx
0x668C38: push    2
0x668C3A: mov     edi, ecx
0x668C3C: call    ActorValue_GetGroupOffsetFromAV; Oblivion group 2 maps the caller-supplied native SkillActorValue to TESSkill index 0..20.
0x668C41: mov     ecx, ds:0B33A98h; this
0x668C47: add     esp, 8
0x668C4A: push    eax; skillIndex
0x668C4B: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x668C50: mov     esi, eax
0x668C52: mov     eax, [esp+0Ch+useIndex]
0x668C56: fld     dword ptr [esi+eax*4+38h]; Read TESSkill_Data::useValues[useIndex] at +0x38+(index*4). This routine has no local actorValue/useIndex bounds check before dereference; callers must provide a valid native skill and use slot.
0x668C5A: push    ebx
0x668C5B: mov     ecx, edi
0x668C5D: fstp    [esp+10h+actorValue]; Unchecked indexed read beginning at useValue0. SKIL DATA contains exactly two floats and native callers pass only 0 or 1; an out-of-range useIndex would read beyond TESSkill_Data.
0x668C61: call    Actor_GetBaseCalcAVi; Normal skill-use entry point checks the native base skill cap of 100 before awarding progress.
0x668C66: cmp     eax, 64h ; 'd'
0x668C69: jge     short loc_668CB4; Skill-use progress is suppressed once the player's base calculated skill reaches 100.
0x668C6B: fldz
0x668C6D: fld     st
0x668C6F: fld     [esp+0Ch+scale]
0x668C73: fucom   st(1)
0x668C75: fnstsw  ax
0x668C77: fstp    st(1)
0x668C79: test    ah, 44h
0x668C7C: jnp     short loc_668C88; scale == 0.0 is the identity/default convention. Any nonzero scale multiplies the selected SKIL use value.
0x668C7E: fmul    [esp+0Ch+actorValue]
0x668C82: fstp    [esp+0Ch+actorValue]
0x668C86: jmp     short loc_668C8A
0x668C88: fstp    st
0x668C8A: test    esi, esi
0x668C8C: jz      short loc_668CB2; The null check occurs after the indexed SKIL DATA read; native callers therefore rely on a valid SkillActorValue/TESSkill lookup.
0x668C8E: fld     [esp+0Ch+actorValue]
0x668C92: fcom    st(1)
0x668C94: fnstsw  ax
0x668C96: fstp    st(1)
0x668C98: test    ah, 41h
0x668C9B: jnz     short loc_668CB2; Only a strictly positive computed use value reaches the accumulator.
0x668C9D: push    0; Normal live use passes suppressFeedbackAndDeferredTracking=false.
0x668C9F: push    esi; Pass the resolved native TESSkill record to the accumulator.
0x668CA0: push    ecx; Reserve/push the computed float progressDelta before actorValue.
0x668CA1: fstp    [esp+18h+progressDelta]; progressDelta
0x668CA4: push    ebx; actorValue
0x668CA5: mov     ecx, edi; this
0x668CA7: call    Player_AddSkillUseProgress; Accumulate actorValue, computed positive progressDelta, resolved TESSkill, and suppression=false. Major/minor classification is deferred to the required threshold and eventual level-increase routine.
0x668CAC: pop     edi
0x668CAD: pop     esi
0x668CAE: pop     ebx
0x668CAF: retn    0Ch
0x668CB2: fstp    st
0x668CB4: pop     edi
0x668CB5: pop     esi
0x668CB6: pop     ebx
0x668CB7: retn    0Ch
