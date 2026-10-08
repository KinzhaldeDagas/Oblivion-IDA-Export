// Reinitializes post-character-generation skill progression: resets skill-increase statistics/buckets, recomputes required progress for all 21 skills, clears native skill progress and specialization counters, then replays deferred chargen usage. Major/minor behavior during replay comes from the same TESClass seven-slot predicate.
void __thiscall Player_ReplayDeferredCharGenSkillUsage(PlayerCharacter *this)
{
  unsigned int v1; // ebx
  int i; // edi
  SkillActorValue AVFromGroupOffset; // eax
  int j; // edi
  double v6; // st7
  double v7; // st6
  UInt8 GroupOffsetFromAV; // al
  TESSkill_RecordView *TESSkillByCode; // ebp
  double v10; // st7
  SkillActorValue actorValue; // eax
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+14h] [ebp-8h]
  float v15; // [esp+18h] [ebp-4h]
  float v16; // [esp+18h] [ebp-4h]
  float v17; // [esp+18h] [ebp-4h]

  this->miscStats[2] = 0;                       // Start chargen reclassification: reset the skill-increase misc statistic and current attribute-bonus bucket before replay. /*0x66c209*/
  Player_ConsumeOldestAttributeBonusBucket(this); /*0x66c213*/
  for ( i = 0; i < 0x15; ++i )                  // Rebuild requiredSkillExp for all 21 native skills using the final class's specialization and seven-major membership. /*0x66c218*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i); /*0x66c223*/
    Player_RecalculateRequiredSkillExperience(this, AVFromGroupOffset); /*0x66c22e*/
  }
  Player_ClearAllSkillProgress(this);           // Clear all accumulated skillExp[21] before replaying the deferred chargen-use totals under the final class. /*0x66c23d*/
  this->combatAndMagicAdvanceCounts = 0;        // Reset the packed Combat and Magic specialization advance counters before replaying deferred chargen skill use; Stealth is reset separately at 0x66C24B. /*0x66c244*/
  this->stealthAdvanceCount = 0; /*0x66c24b*/
  for ( j = 0xC; j < 0x21; ++j )                // Replay each of the 21 deferred chargen progress totals from PlayerCharacter::deferredCharGenSkillUsage. /*0x66c251*/
  {
    v6 = 0.0; /*0x66c271*/
    v7 = this->deferredCharGenSkillUsage->progress[ActorValue_GetGroupOffsetFromAV(2, j)]; /*0x66c273*/
    if ( v7 > 0.0 ) /*0x66c27e*/
    {
      do /*0x66c3bf*/
      {                                         // Replay in chunks no larger than 1.0 progress. This permits repeated threshold checks and skill-level side effects for large deferred totals.
        if ( v7 <= 1.0 ) /*0x66c28d*/
        {
          v15 = v7; /*0x66c2a1*/
        }
        else
        {
          v15 = 1.0; /*0x66c293*/
          v6 = v7 - dbl_A2F928; /*0x66c297*/
        }
        v12 = v6; /*0x66c2a6*/
        if ( Actor_GetBaseCalcAVi((int *)this, v1, j, (int)this, j) < 0x64 ) /*0x66c2b4*/
        {
          GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, j); /*0x66c2bd*/
          TESSkillByCode = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, GroupOffsetFromAV); /*0x66c2d1*/
          if ( TESSkillByCode ) /*0x66c2d5*/
          {
            v10 = 0.0; /*0x66c2db*/
            v1 = j - 0xC; /*0x66c2dd*/
            v13 = 0.0; /*0x66c2e3*/
            if ( (unsigned int)(j - 0xC) <= 0x14 ) /*0x66c2e7*/
            {
              v13 = this->skillExp[ActorValue_GetGroupOffsetFromAV(2, j)]; /*0x66c300*/
              v10 = 0.0; /*0x66c304*/
            }
            v14 = v13 + v15; /*0x66c30e*/
            v16 = v14; /*0x66c316*/
            if ( v14 < v10 ) /*0x66c321*/
              v16 = v10; /*0x66c323*/
            if ( v1 <= 0x14 ) /*0x66c32e*/
              this->skillExp[ActorValue_GetGroupOffsetFromAV(2, j)] = v16; /*0x66c342*/
            v17 = 1.0; /*0x66c34d*/
            if ( Actor_GetBaseClass((Actor *)this) ) /*0x66c351*/
            {
              actorValue = TESSkillByCode->data.actorValue;// Use TESSkill_Data::actorValue to fetch the rebuilt requirement belonging to this skill. /*0x66c35a*/
              v17 = 1.0; /*0x66c362*/
              if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x66c369*/
                v17 = this->requiredSkillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)]; /*0x66c380*/
            }
            if ( v17 < (double)v14 )            // The replay uses the same strict accumulated-progress > required test as live skill use; any resulting major/non-major accounting occurs in Player_SkillLevelIncrease. /*0x66c39b*/
              Player_SkillLevelIncrease(this, TESSkillByCode, 0, 0); /*0x66c3a4*/
          }
          UI_UpdateActorValueDisplays(j); /*0x66c3aa*/
        }
        v6 = 0.0; /*0x66c3b2*/
        v7 = v12; /*0x66c3b4*/
      }
      while ( v12 > 0.0 ); /*0x66c3bf*/
    }
  }
}
