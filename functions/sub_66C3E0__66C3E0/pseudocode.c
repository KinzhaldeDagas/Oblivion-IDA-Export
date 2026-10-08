// Commit one Oblivion character level: apply three attributes, raise player level, consume the oldest all-skill attribute-bonus bucket, age specialization counters, subtract exactly g_iLevelUpSkillCount from majorSkillAdvances, clear all 21 per-skill advance counters, reset training use, and preserve any excess major progress/readiness.
void __thiscall Player_CommitLevelUp(PlayerCharacter *this, UInt32 attribute1, UInt32 attribute2, UInt32 attribute3)
{
  char *activeMagicItem; // edi
  int DefaultPlayerSpell; // eax
  TESObjectBOOK *book; // ebx
  TESForm *ActorBaseForm; // eax
  TESForm *v9; // eax
  int v10; // ecx
  int i; // edx
  char v12; // al
  signed int majorSkillAdvances; // eax
  int v14; // eax
  TESForm *v15; // edi
  unsigned __int8 AVi; // bl
  int Health; // eax
  UInt32 v18; // eax
  __int16 v19; // [esp-8h] [ebp-10h]

  Player_LevelUpAttribute(this, attribute1); /*0x66c3e9*/
  Player_LevelUpAttribute(this, attribute2); /*0x66c3f5*/
  Player_LevelUpAttribute(this, attribute3); /*0x66c401*/
  activeMagicItem = (char *)this->activeMagicItem; /*0x66c406*/
  if ( !activeMagicItem ) /*0x66c40e*/
  {
    DefaultPlayerSpell = Magic_GetDefaultPlayerSpell(); /*0x66c410*/
    if ( DefaultPlayerSpell ) /*0x66c417*/
      activeMagicItem = (char *)(DefaultPlayerSpell + 0x18); /*0x66c419*/
    else
      activeMagicItem = 0; /*0x66c41e*/
  }
  book = this->book; /*0x66c421*/
  PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x66c42b*/
  if ( this->book )                             // Commit one Oblivion character level: apply three attributes, raise player level, consume the oldest all-skill attribute-bonus bucket, age specialization counters, subtract exactly g_iLevelUpSkillCount from majorSkillAdvances, clear all 21 per-skill advance counters, reset training use, and preserve any excess major progress/readiness. /*0x66c430*/
    PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x66c43d*/
  this->book = 0; /*0x66c446*/
  PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x66c450*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 0); /*0x66c459*/
  v19 = TESActorBaseData_GetLevel((TESActorBaseData *)&ActorBaseForm[1].member.refID) + 1; /*0x66c46e*/
  v9 = Actor_GetActorBaseForm((Actor *)this, 0); /*0x66c471*/
  TESActorBaseData_SetLevel(&v9[1].member.refID, v19); /*0x66c47b*/
  if ( activeMagicItem ) /*0x66c482*/
    PlayerCharacter_SetCurrentMagicItem(this, activeMagicItem); /*0x66c487*/
  if ( book ) /*0x66c48e*/
    sub_664850(this, (int)book); /*0x66c493*/
  Player_ConsumeOldestAttributeBonusBucket(this);// After applying the three selected attributes and raising level, consume the oldest queued attribute-bonus bucket. /*0x66c49a*/
  v10 = 0; /*0x66c49f*/
  for ( i = 0; i < g_iLevelUpSkillCount.value; ++i )// For g_iLevelUpSkillCount iterations, visit bytes +0x5B8..+0x5BB round-robin and decrement the selected byte only if positive. Skill increases populate specialization bytes 0..2; byte 3 is normally unused, so zero visits are not reassigned. /*0x66c4a1*/
  {
    v12 = *((_BYTE *)&this->combatAndMagicAdvanceCounts + v10); /*0x66c4ac*/
    if ( v12 > 0 ) /*0x66c4b5*/
      *((_BYTE *)&this->combatAndMagicAdvanceCounts + v10) = v12 - 1; /*0x66c4b9*/
    if ( ++v10 > 3 ) /*0x66c4c9*/
      v10 = 0; /*0x66c4cb*/
  }
  this->majorSkillAdvances -= g_iLevelUpSkillCount.value;// Subtract exactly g_iLevelUpSkillCount from majorSkillAdvances. Excess major increases survive and may keep another level pending. /*0x66c4cf*/
  Player_ClearSkillAdvanceCounts(this);         // Clear every per-skill advance counter after committing the level, for majors and non-majors alike. Raw skill-use progress is deliberately preserved. /*0x66c4d7*/
  majorSkillAdvances = this->majorSkillAdvances; /*0x66c4dc*/
  this->trainingSessionsUsed = 0; /*0x66c4e2*/
  if ( majorSkillAdvances < g_iLevelUpSkillCount.value )// Clear bCanLevelUp only if the remaining majorSkillAdvances is below the configured threshold; otherwise another level remains ready. /*0x66c4f2*/
    this->bCanLevelUp = 0; /*0x66c4f4*/
  v14 = ((int (*)(void))this->vtbl->super.super.super.GetBaseForm)(); /*0x66c503*/
  v15 = (TESForm *)v14; /*0x66c505*/
  if ( v14 ) /*0x66c509*/
  {
    AVi = TESAttributes_GetAVi((_BYTE *)(v14 + 0x88), 5); /*0x66c51a*/
    Health = TESActorBase_GetHealth(v15); /*0x66c51c*/
    v18 = Double_To_SInt32((double)Health + MEMORY[0xB37708] * (double)AVi); /*0x66c53e*/
    TESActorBase_SetHealth(v15, v18); /*0x66c546*/
  }
  sub_447300((TESHealthForm **)g_TESDataHandler); /*0x66c551*/
  sub_6772E0((ActorProcessManager *)&qword_B3BB2C[0x75]); /*0x66c55b*/
  if ( trackLevelUps ) /*0x66c560*/
    Player_AppendLevelUpTrackingRecord(this); /*0x66c56c*/
}
