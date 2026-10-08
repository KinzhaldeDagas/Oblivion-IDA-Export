// Oblivion skill-use router. Exhaustive vtable-dispatch scan finds 21 native gameplay callsites: 18 [vtable+0x39C] loads plus three magic paths using an adjusted vtable pointer. It selects TESSkill useValue0/useValue1 and forwards positive progress below skill 100. Major membership affects the required-use denominator, not this raw award.
void __thiscall Player_ModExperience(PlayerCharacter *this, SkillActorValue actorValue, UInt32 useIndex, float scale)
{
  UInt8 GroupOffsetFromAV; // al
  TESSkill_RecordView *skill; // esi
  float progressDelta; // [esp+1Ch] [ebp+4h]

  GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, actorValue); /*0x668c3c*/
  skill = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, GroupOffsetFromAV); /*0x668c50*/
  progressDelta = *(&skill->data.useValue0 + useIndex);// Unchecked indexed read beginning at useValue0. SKIL DATA contains exactly two floats and native callers pass only 0 or 1; an out-of-range useIndex would read beyond TESSkill_Data. /*0x668c5d*/
  if ( Actor_GetBaseCalcAVi((int *)this, actorValue, (int)this, (int)skill, actorValue) < 0x64 )// Skill-use progress is suppressed once the player's base calculated skill reaches 100. /*0x668c69*/
  {                                             // scale == 0.0 is the identity/default convention. Any nonzero scale multiplies the selected SKIL use value.
    if ( scale != 0.0 ) /*0x668c7c*/
      progressDelta = scale * progressDelta; /*0x668c82*/
    if ( skill )                                // The null check occurs after the indexed SKIL DATA read; native callers therefore rely on a valid SkillActorValue/TESSkill lookup. /*0x668c8c*/
    {
      if ( progressDelta > 0.0 ) /*0x668c9b*/
        Player_AddSkillUseProgress(this, actorValue, progressDelta, skill, 0);// Reserve/push the computed float progressDelta before actorValue. /*0x668ca7*/
    }
  }
}
