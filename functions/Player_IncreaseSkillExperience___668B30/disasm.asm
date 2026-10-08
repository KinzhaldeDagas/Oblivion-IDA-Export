0x668B30: sub     esp, 8; Normal skill-use award levels only when accumulated progress is strictly greater than the requirement, consumes at most one requirement per call, and carries all excess progress (including the 99->100 transition).
0x668B33: push    ebp
0x668B34: mov     ebp, [esp+0Ch+a2]
0x668B38: push    esi
0x668B39: push    ebp; Reject all accumulation when the native base skill is already 100 or greater.
0x668B3A: mov     esi, ecx
0x668B3C: call    Actor_GetBaseCalcAVi
0x668B41: cmp     eax, 64h ; 'd'
0x668B44: jge     loc_668C1F
0x668B4A: push    edi
0x668B4B: mov     edi, [esp+14h+skill]
0x668B4F: test    edi, edi
0x668B51: jnz     short loc_668B74
0x668B53: push    ebp
0x668B54: push    2
0x668B56: call    ActorValue_GetGroupOffsetFromAV; If no TESSkill pointer was supplied, map the native AV through Oblivion group 2 and resolve one of the 21 inline TESSkill records.
0x668B5B: mov     ecx, ds:0B33A98h; this
0x668B61: add     esp, 8
0x668B64: push    eax; skillIndex
0x668B65: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x668B6A: mov     edi, eax
0x668B6C: test    edi, edi
0x668B6E: jz      loc_668C15
0x668B74: fldz
0x668B76: lea     eax, [ebp-0Ch]
0x668B79: cmp     eax, 14h
0x668B7C: fstp    [esp+14h+a2]
0x668B80: ja      short loc_668B9B
0x668B82: push    ebp
0x668B83: push    2
0x668B85: call    ActorValue_GetGroupOffsetFromAV; Map the native skill AV to skillExp index 0..20 before reading existing raw progress.
0x668B8A: movsx   ecx, al
0x668B8D: add     esp, 8
0x668B90: fld     dword ptr [esi+ecx*4+130h]; Read the raw progress numerator; major/non-major has not changed this stored value.
0x668B97: fstp    [esp+14h+a2]
0x668B9B: fld     [esp+14h+a2]
0x668B9F: push    ebx
0x668BA0: fadd    [esp+18h+progressDelta]; Add the supplied raw progressDelta to existing progress without applying class membership here.
0x668BA4: push    ecx
0x668BA5: mov     ecx, esi; this
0x668BA7: fstp    [esp+1Ch+a2]
0x668BAB: fld     [esp+1Ch+a2]
0x668BAF: fstp    [esp+1Ch+progress]; progress
0x668BB2: push    ebp; actorValue
0x668BB3: call    Player_SetSkillProgress; Store new raw progress through Player_SetSkillProgress, which clamps only negative values and preserves excess above the requirement.
0x668BB8: fld     [esp+18h+a2]
0x668BBC: push    edi; skill
0x668BBD: fstp    [esp+1Ch+var_8]
0x668BC1: mov     ecx, esi; this
0x668BC3: call    Player_GetRequiredSkillProgress; Fetch the precomputed requirement whose denominator already reflects specialization and strict major/non-major membership.
0x668BC8: fcomp   [esp+18h+var_8]
0x668BCC: mov     bl, [esp+18h+suppressFeedbackAndDeferredTracking]
0x668BD0: fnstsw  ax
0x668BD2: test    ah, 5
0x668BD5: jp      short loc_668BE7; Level only when newProgress > requiredProgress. Exact equality remains pending until a later positive use call. This call can trigger at most one level even if progress exceeds several thresholds.
0x668BD7: test    bl, bl
0x668BD9: setz    dl
0x668BDC: mov     ecx, esi; this
0x668BDE: push    edx; showFeedback
0x668BDF: push    0; skipProgressConsumption
0x668BE1: push    edi; skill
0x668BE2: call    Player_SkillLevelIncrease; Normal use consumes one old requirement, increases the base skill by one, recalculates the next requirement, carries excess, and applies all major/non-major advancement side effects.
0x668BE7: cmp     byte ptr [esi+6E5h], 0; Chargen-only deferred accounting begins after live accumulation.
0x668BEE: jz      short loc_668C14
0x668BF0: test    bl, bl
0x668BF2: jnz     short loc_668C14; Only unsuppressed chargen use is copied into deferredCharGenSkillUsage for replay after the final class is committed.
0x668BF4: push    ebp
0x668BF5: push    2
0x668BF7: call    ActorValue_GetGroupOffsetFromAV; Map the native skill AV to the deferred chargen progress[21] index.
0x668BFC: mov     ecx, [esi+5B0h]
0x668C02: movsx   eax, al
0x668C05: fld     dword ptr [ecx+eax*4]
0x668C08: lea     eax, [ecx+eax*4]
0x668C0B: fadd    [esp+20h+progressDelta]
0x668C0F: add     esp, 8
0x668C12: fstp    dword ptr [eax]; Accumulate the unsuppressed raw skill-use delta in deferredCharGenSkillUsage for replay after the final class is committed. A separated sidecar skill needs an equivalent persisted deferred ledger; reseeding its level/progress at class apply otherwise erases tutorial use.
0x668C14: pop     ebx
0x668C15: push    ebp; actorValue
0x668C16: call    UI_UpdateActorValueDisplays; Refresh UI actor-value displays after a sub-100 accumulation attempt, even when TESSkill resolution failed.
0x668C1B: add     esp, 4
0x668C1E: pop     edi
0x668C1F: pop     esi
0x668C20: pop     ebp
0x668C21: add     esp, 8
0x668C24: retn    10h
