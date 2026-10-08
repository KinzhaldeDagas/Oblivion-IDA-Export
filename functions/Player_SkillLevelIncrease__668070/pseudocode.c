// Single Oblivion skill-level increase. Optionally consume exactly one old requirement, increment the base skill, recalculate its next requirement, update universal counters/buckets, and enter the level-progress branch only for a strict TESClass major match.
void __thiscall Player_SkillLevelIncrease(
        PlayerCharacter *this,
        TESSkill_RecordView *skill,
        bool skipProgressConsumption,
        bool showFeedback)
{
  int v4; // ebx
  double v5; // st5
  double v6; // st6
  double v7; // st7
  SkillActorValue actorValue; // eax
  double RequiredSkillProgress; // st7
  SkillActorValue v11; // ecx
  SkillMasteryLevel SkillMasteryLevel; // eax
  SkillActorValue v13; // ebp
  int v14; // ebx
  TESForm *ActorBaseForm; // eax
  SkillMasteryLevel v16; // ebp
  SkillSpecialization specialization; // eax
  TESClass *BaseClass; // eax
  _DWORD *v19; // ebx
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  const char *v22; // ebx
  const char *v23; // eax
  int *v24; // ecx
  int *v25; // eax
  int *v26; // ebx
  const char *value; // ebx
  const char *Name; // eax
  int *sound; // ecx
  UInt32 *v30; // eax
  int *v31; // ebx
  CHAR *v32; // ebx
  char *v33; // ecx
  SkillActorValue v34; // edi
  ActorAnimData *AnimData; // edi
  ActorAnimData *firstPersonAnimData; // edi
  const char *v37; // [esp+4h] [ebp-21Ch]
  SkillActorValue duration; // [esp+8h] [ebp-218h]
  const char *durationa; // [esp+8h] [ebp-218h]
  const char *durationb; // [esp+8h] [ebp-218h]
  char isMajorIncrease; // [esp+1Fh] [ebp-201h]
  float oldProgress; // [esp+20h] [ebp-200h]
  float carriedProgress; // [esp+20h] [ebp-200h]
  SkillMasteryLevel oldMastery; // [esp+20h] [ebp-200h]
  char v45[500]; // [esp+28h] [ebp-1F8h] BYREF

  ++this->miscStats[2];                         // Increment the lifetime skill-increase misc statistic for every level gained, including purchased training and non-major skills. /*0x668089*/
  if ( !skipProgressConsumption ) /*0x6680a0*/
  {
    actorValue = skill->data.actorValue; /*0x6680a6*/
    oldProgress = 0.0; /*0x6680ae*/
    if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x6680b5*/
      oldProgress = this->skillExp[ActorValue_GetGroupOffsetFromAV(2, actorValue)];// Map the TESSkill native actor value to skillExp index 0..20. /*0x6680cc*/
    RequiredSkillProgress = Player_GetRequiredSkillProgress(this, skill);// Fetch the old precomputed requirement before changing the base skill. /*0x6680db*/
    v11 = skill->data.actorValue; /*0x6680e4*/
    carriedProgress = oldProgress - RequiredSkillProgress;// Carry progress as oldProgress - oldRequirement; this consumes exactly one threshold. /*0x6680e7*/
    v6 = 0.0; /*0x6680f3*/
    v7 = 0.0; /*0x6680f9*/
    if ( carriedProgress < 0.0 ) /*0x6680fe*/
      carriedProgress = 0.0;                    // Clamp a negative remainder to 0; positive excess is preserved. /*0x668100*/
    if ( (unsigned int)(v11 - 0xC) <= 0x14 ) /*0x66810e*/
    {
      v7 = carriedProgress; /*0x668118*/
      this->skillExp[ActorValue_GetGroupOffsetFromAV(2, v11)] = carriedProgress; /*0x668122*/
    }
  }
  SkillMasteryLevel = Actor_GetSkillMasteryLevel((Actor *)this, skill->data.actorValue); /*0x66812f*/
  v13 = skill->data.actorValue; /*0x668134*/
  oldMastery = SkillMasteryLevel; /*0x66813a*/
  v14 = Actor_GetBaseCalcAVi((int *)this, v4, (int)skill, (int)this, v13) + 1;// Increase the base skill value by exactly one. This operation itself is identical for major and non-major skills. /*0x668149*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 0); /*0x66814c*/
  ((void (__thiscall *)(TESForm *, SkillActorValue, int))ActorBaseForm->vtbl[1].Unk_16)(ActorBaseForm, v13, v14); /*0x66815d*/
  UI_UpdateActorValueDisplays(v13); /*0x668160*/
  Player_OnActorValueBaseChanged(this, v13, 1); /*0x66816d*/
  v16 = Actor_GetSkillMasteryLevel((Actor *)this, skill->data.actorValue); /*0x668183*/
  Player_RecalculateRequiredSkillExperience(this, skill->data.actorValue);// Recompute the next required-use threshold at the new base value, including specialization and strict major/non-major multipliers. /*0x668185*/
  ++LODWORD(this->skillExp[skill->data.actorValue + 0xA]);// Increment this native skill's lifetime advance counter for every increase, irrespective of class membership. /*0x66818d*/
  specialization = skill->data.specialization;  // Increment the skill's Combat/Magic/Stealth specialization counter for every increase, irrespective of class membership. /*0x66819c*/
  if ( (unsigned int)specialization <= kSkillSpecialization_Stealth ) /*0x6681a2*/
    ++*((_BYTE *)&this->combatAndMagicAdvanceCounts + specialization); /*0x6681a4*/
  Player_IncrementAttributeBonus(this, skill->data.governingAttribute);// Increment the current governing-attribute bonus bucket for every increase before any major-only bucket rollover. /*0x6681b2*/
  isMajorIncrease = 0; /*0x6681bd*/
  if ( Actor_GetBaseClass((Actor *)reference) ) /*0x6681c2*/
  {
    duration = skill->data.actorValue; /*0x6681d4*/
    BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)reference); /*0x6681d5*/
    if ( TESClass_IsMajorSkillAV(BaseClass, duration) )// Strict seven-slot TESClass membership is the only gate into major level progress. False means the full non-major/minor path. /*0x6681dc*/
    {
      ++this->majorSkillAdvances;               // Major-only: increment PlayerCharacter::majorSkillAdvances. /*0x6681e5*/
      isMajorIncrease = 1; /*0x6681ee*/
      Player_MaybeStartNextAttributeBonusBucket(this);// Major-only: after the attribute increment, start a new bonus bucket at each g_iLevelUpSkillCount multiple. /*0x6681f3*/
    }
  }
  v19 = 0; /*0x6681fd*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x6681ff*/
  if ( OpenMenuTile ) /*0x668209*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x668219*/
    v19 = OblivionDynamicCast( /*0x668227*/
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &HUDMainMenu `RTTI Type Descriptor',
            0);
  }
  if ( !isMajorIncrease || (signed int)this->majorSkillAdvances < g_iLevelUpSkillCount.value )// Only a major increase can reach the readiness test; compare cumulative majorSkillAdvances against g_iLevelUpSkillCount. /*0x668240*/
  {
    if ( !showFeedback ) /*0x668311*/
      goto LABEL_31;                            // Non-major increases and majors below the threshold may show the ordinary skill-increased message but cannot set bCanLevelUp here. /*0x668311*/
    goto LABEL_26; /*0x668311*/
  }
  if ( sub_5A56C0(v19) ) /*0x668248*/
  {
    if ( !showFeedback ) /*0x668259*/
    {
      this->bCanLevelUp = 1; /*0x66825f*/
      goto LABEL_31; /*0x668266*/
    }
LABEL_26:
    value = MEMORY[0xB38D28].value; /*0x668317*/
    durationb = MEMORY[0xB383A8].value; /*0x668323*/
    Name = TESSkill_GetName(skill);             // Resolve the native Oblivion TESSkill display name for the ordinary skill-increased message. /*0x668326*/
    _sprintf(v45, "%s %s %s.", value, Name, durationb); /*0x668337*/
    sound = (int *)MEMORY[0xB33398]->sound; /*0x668341*/
    if ( sound ) /*0x668349*/
    {
      v30 = PlaySound___(sound, "UIStatsSkillUp", 0x121, 0); /*0x668357*/
      v31 = (int *)v30; /*0x66835c*/
      if ( v30 ) /*0x668360*/
      {
        if ( !SoundHandle::IsPlaying(v30) ) /*0x668364*/
        {
          sub_6B7190(v31, 0); /*0x668371*/
          sub_6B73E0(v31); /*0x668378*/
          FormHeapFree((unsigned int)v31); /*0x66837e*/
        }
      }
    }
    v7 = kTerrainLODQuadRayDirectionZ; /*0x668386*/
    GameUI_QueueMessage(v45, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x668399*/
    goto LABEL_31; /*0x668399*/
  }
  if ( showFeedback ) /*0x668273*/
  {
    v22 = MEMORY[0xB38D28].value; /*0x668284*/
    durationa = MEMORY[0xB383B8].value; /*0x66828a*/
    v37 = MEMORY[0xB383A8].value; /*0x66828b*/
    v23 = TESSkill_GetName(skill);              // Resolve the native Oblivion TESSkill display name for the combined skill-increased/rest-and-meditate message. /*0x66828e*/
    _sprintf(v45, "%s %s %s.  %s", v22, v23, v37, durationa); /*0x66829f*/
    v7 = flt_A46B10; /*0x6682a4*/
    GameUI_QueueMessage(v45, 0, 1u, flt_A46B10); /*0x6682b9*/
    v24 = (int *)MEMORY[0xB33398]->sound; /*0x6682c3*/
    if ( v24 ) /*0x6682cb*/
    {
      v25 = PlaySound___(v24, "UIStatsSkillUp", 0x121, 1); /*0x6682d9*/
      v26 = v25; /*0x6682de*/
      if ( v25 ) /*0x6682e2*/
      {
        sub_6B7190(v25, 0); /*0x6682e8*/
        sub_6B73E0(v26); /*0x6682ef*/
        FormHeapFree((unsigned int)v26); /*0x6682f5*/
      }
    }
  }
  this->bCanLevelUp = 1;                        // Set PlayerCharacter::bCanLevelUp once a major increase reaches the configured threshold, regardless of whether feedback is shown. /*0x6682fd*/
LABEL_31:
  if ( v16 != oldMastery )                      // Mastery-threshold feedback depends only on the new skill value and applies equally to major and non-major skills. /*0x6683a5*/
  {
    v32 = *(CHAR **)&skill->formComponentsAndIcon[0x24]; /*0x6683a7*/
    if ( !v32 ) /*0x6683b1*/
      v32 = EmptyString; /*0x6683b3*/
    TESSkill_GetMasteryDescription((TESSkill *)skill, v16); /*0x6683c0*/
    sub_57B370(v33, v5, v7, "skill_perk.xml", 0, 1, 0, 2, (char)v32); /*0x6683d6*/
    v34 = skill->data.actorValue; /*0x6683db*/
    if ( v34 == kSkillAV_Blade || (unsigned int)(v34 - 0x10) <= 1 ) /*0x6683ec*/
    {
      AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x6683f5*/
      ActorAnimData_RemovePowerAttackGroups(AnimData); /*0x6683f9*/
      ActorAnimData_RebuildPowerAttackKFList(AnimData, (int)AnimData, v5, v6, v7, (TESObjectREFR *)this, 0); /*0x668403*/
      firstPersonAnimData = this->firstPersonAnimData; /*0x668408*/
      ActorAnimData_RemovePowerAttackGroups(firstPersonAnimData); /*0x668410*/
      ActorAnimData_RebuildPowerAttackKFList( /*0x66841a*/
        firstPersonAnimData,
        (int)firstPersonAnimData,
        v5,
        v6,
        v7,
        (TESObjectREFR *)this,
        0);
    }
  }
  UI_RefreshStatsMenuActorValues(); /*0x66841f*/
}
