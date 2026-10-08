// Normal skill-use award levels only when accumulated progress is strictly greater than the requirement, consumes at most one requirement per call, and carries all excess progress (including the 99->100 transition).
void __thiscall Player_AddSkillUseProgress(
        PlayerCharacter *this,
        SkillActorValue actorValue,
        float progressDelta,
        TESSkill_RecordView *skill,
        bool suppressFeedbackAndDeferredTracking)
{                                               // Reject all accumulation when the native base skill is already 100 or greater.
  int v5; // ebx
  int v6; // edi
  TESSkill_RecordView *resolvedSkill; // edi
  UInt8 v10; // al
  char GroupOffsetFromAV; // al
  float oldProgress; // [esp+20h] [ebp+4h]
  float newProgress; // [esp+20h] [ebp+4h]

  if ( Actor_GetBaseCalcAVi((int *)this, v5, v6, (int)this, actorValue) < 0x64 ) /*0x668b44*/
  {
    resolvedSkill = skill; /*0x668b4b*/
    if ( skill /*0x668b6e*/
      || (v10 = ActorValue_GetGroupOffsetFromAV(2, actorValue),
          (resolvedSkill = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, v10)) != 0) )// If no TESSkill pointer was supplied, map the native AV through Oblivion group 2 and resolve one of the 21 inline TESSkill records.
    {
      oldProgress = 0.0; /*0x668b7c*/
      if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x668b80*/
        oldProgress = this->skillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)];// Read the raw progress numerator; major/non-major has not changed this stored value. /*0x668b97*/
      newProgress = oldProgress + progressDelta;// Add the supplied raw progressDelta to existing progress without applying class membership here. /*0x668ba7*/
      Player_SetSkillProgress(this, actorValue, newProgress);// Store new raw progress through Player_SetSkillProgress, which clamps only negative values and preserves excess above the requirement. /*0x668bb3*/
      if ( Player_GetRequiredSkillProgress(this, resolvedSkill) < (double)newProgress )// Level only when newProgress > requiredProgress. Exact equality remains pending until a later positive use call. This call can trigger at most one level even if progress exceeds several thresholds. /*0x668bd5*/
        Player_SkillLevelIncrease(this, resolvedSkill, 0, !suppressFeedbackAndDeferredTracking);// Normal use consumes one old requirement, increases the base skill by one, recalculates the next requirement, carries excess, and applies all major/non-major advancement side effects. /*0x668be2*/
      if ( this->isInCharGen )                  // Chargen-only deferred accounting begins after live accumulation. /*0x668be7*/
      {                                         // Only unsuppressed chargen use is copied into deferredCharGenSkillUsage for replay after the final class is committed.
        if ( !suppressFeedbackAndDeferredTracking ) /*0x668bf2*/
        {
          GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, actorValue);// Map the native skill AV to the deferred chargen progress[21] index. /*0x668bf7*/
          this->deferredCharGenSkillUsage->progress[GroupOffsetFromAV] = this->deferredCharGenSkillUsage->progress[GroupOffsetFromAV] /*0x668c12*/
                                                                       + progressDelta;// Accumulate the unsuppressed raw skill-use delta in deferredCharGenSkillUsage for replay after the final class is committed. A separated sidecar skill needs an equivalent persisted deferred ledger; reseeding its level/progress at class apply otherwise erases tutorial use.
        }
      }
    }
    UI_UpdateActorValueDisplays(actorValue);    // Refresh UI actor-value displays after a sub-100 accumulation attempt, even when TESSkill resolution failed. /*0x668c16*/
  }
}
