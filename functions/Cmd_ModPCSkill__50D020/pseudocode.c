// Shared Oblivion console execute routine for AdvSkill/AdvancePCSkill and ModPCSkill. It raises the base skill and manually increments skill, specialization, governing-attribute, and major counters. Unlike Player_SkillLevelIncrease, it never calls Player_MaybeStartNextAttributeBonusBucket, so repeated command-driven major advances do not perform normal attribute-bucket rollover.
void __usercall Cmd_ModPCSkill(
        double st6_0@<st1>,
        double a2@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a10)
{
  UInt8 GroupOffsetFromAV; // al
  TESSkill_RecordView *TESSkillByCode; // esi
  SkillMasteryLevel SkillMasteryLevel; // eax
  UInt32 majorSkillAdvances; // ebx
  SkillMasteryLevel i; // ebp
  PlayerCharacter *v15; // ecx
  double RequiredSkillProgress; // st5
  SkillActorValue actorValue; // edx
  PlayerCharacter *v18; // ecx
  unsigned int v19; // edi
  int BaseCalcAVi; // eax
  float *v21; // eax
  TESClass *BaseClass; // eax
  _DWORD *v23; // edi
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  signed int v26; // eax
  char *v27; // edi
  const char *v28; // eax
  double v29; // st5
  int *v30; // ecx
  const char *Name; // eax
  int *sound; // ecx
  char *MasteryDescription; // eax
  char *v34; // ecx
  SkillActorValue v35; // esi
  _DWORD *AnimData; // esi
  _DWORD *v37; // esi
  const char *v38; // [esp-4h] [ebp-224h]
  char *v39; // [esp-4h] [ebp-224h]
  SkillActorValue duration; // [esp+0h] [ebp-220h]
  const char *durationa; // [esp+0h] [ebp-220h]
  const char *durationb; // [esp+0h] [ebp-220h]
  int v43; // [esp+14h] [ebp-20Ch] BYREF
  UInt32 *a3[2]; // [esp+18h] [ebp-208h]
  UInt16 v45[2]; // [esp+20h] [ebp-200h] BYREF
  SkillMasteryLevel v46; // [esp+24h] [ebp-1FCh]
  char string[500]; // [esp+28h] [ebp-1F8h] BYREF

  a3[0] = a10; /*0x50d069*/
  *(_DWORD *)v45 = 0; /*0x50d06f*/
  v43 = 0; /*0x50d073*/
  if ( Script_ExtractArgs(a1, arg4, a10, a4, a6, a7, l, v45, &v43) ) /*0x50d08c*/
  {
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, v45[0]); /*0x50d0a3*/
    TESSkillByCode = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, GroupOffsetFromAV); /*0x50d0b7*/
    if ( TESSkillByCode ) /*0x50d0bb*/
    {
      SkillMasteryLevel = Actor_GetSkillMasteryLevel((Actor *)reference, TESSkillByCode->data.actorValue); /*0x50d0cb*/
      majorSkillAdvances = reference->majorSkillAdvances; /*0x50d0db*/
      v46 = SkillMasteryLevel; /*0x50d0e1*/
      for ( i = SkillMasteryLevel; v43; --v43 ) /*0x50d0e7*/
      {
        *(float *)a3 = Player_GetSkillProgress(reference, TESSkillByCode->data.actorValue); /*0x50d0ff*/
        v15 = reference; /*0x50d107*/
        *(double *)a3 = *(float *)a3; /*0x50d10e*/
        RequiredSkillProgress = Player_GetRequiredSkillProgress(v15, TESSkillByCode); /*0x50d112*/
        actorValue = TESSkillByCode->data.actorValue; /*0x50d11b*/
        v18 = reference; /*0x50d11f*/
        *(float *)a3 = *(double *)a3 - RequiredSkillProgress; /*0x50d125*/
        Player_SetSkillProgress(v18, actorValue, *(float *)a3); /*0x50d131*/
        v19 = TESSkillByCode->data.actorValue; /*0x50d136*/
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, majorSkillAdvances, v19, (int)TESSkillByCode, v19); /*0x50d140*/
        Player_Actor_SetAViBase((Actor *)reference, v19, BaseCalcAVi + 1); /*0x50d150*/
        i = Actor_GetSkillMasteryLevel((Actor *)reference, TESSkillByCode->data.actorValue); /*0x50d16a*/
        v21 = &reference->skillExp[TESSkillByCode->data.actorValue + 0xA]; /*0x50d16f*/
        ++*(_DWORD *)v21; /*0x50d17b*/
        Player_IncrementSpecializationAdvanceCount(reference, TESSkillByCode->data.specialization); /*0x50d187*/
        Player_IncrementAttributeBonus(reference, TESSkillByCode->data.governingAttribute); /*0x50d196*/
        duration = TESSkillByCode->data.actorValue; /*0x50d1a4*/
        BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)reference); /*0x50d1a5*/
        if ( TESClass_IsMajorSkillAV(BaseClass, duration) ) /*0x50d1ac*/
          ++reference->majorSkillAdvances; /*0x50d1ba*/
      }
      v23 = 0; /*0x50d1cf*/
      OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC); /*0x50d1d1*/
      if ( OpenMenuTile ) /*0x50d1db*/
      {
        ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x50d1eb*/
        v23 = OblivionDynamicCast( /*0x50d1f9*/
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &HUDMainMenu `RTTI Type Descriptor',
                0);
      }
      v26 = reference->majorSkillAdvances; /*0x50d201*/
      if ( majorSkillAdvances == v26 || v26 < 0xA || sub_5A56C0(v23) ) /*0x50d21a*/
      {
        v27 = (char *)MEMORY[0xB38D28]; /*0x50d2c3*/
        durationb = (const char *)MEMORY[0xB383A8]; /*0x50d2c9*/
        Name = TESSkill_GetName(TESSkillByCode);// Resolve the native Oblivion TESSkill display name for the ordinary console-command skill-increased message. /*0x50d2cc*/
        _sprintf(string, "%s %s %s.", v27, Name, durationb); /*0x50d2dd*/
        sound = (int *)MEMORY[0xB33398]->sound; /*0x50d2e8*/
        if ( sound ) /*0x50d2f0*/
        {
          v27 = (char *)PlaySound___(sound, "UIStatsSkillUp", 0x121, 1); /*0x50d303*/
          sub_6B7190((int *)v27, 0); /*0x50d309*/
          if ( v27 ) /*0x50d310*/
          {
            sub_6B73E0(v27); /*0x50d314*/
            FormHeapFree((unsigned int)v27); /*0x50d31a*/
          }
        }
        v29 = kTerrainLODQuadRayDirectionZ; /*0x50d322*/
        GameUI_QueueMessage(string, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x50d335*/
      }
      else
      {
        v27 = (char *)MEMORY[0xB38D28]; /*0x50d232*/
        durationa = (const char *)MEMORY[0xB383B8]; /*0x50d238*/
        v38 = (const char *)MEMORY[0xB383A8]; /*0x50d239*/
        v28 = TESSkill_GetName(TESSkillByCode); // Resolve the native Oblivion TESSkill display name for the console-command level-up message. /*0x50d23c*/
        _sprintf(string, "%s %s %s.  %s", v27, v28, v38, durationa); /*0x50d24d*/
        v29 = flt_A46B10; /*0x50d252*/
        GameUI_QueueMessage(string, 0, 1u, flt_A46B10); /*0x50d267*/
        v30 = (int *)MEMORY[0xB33398]->sound; /*0x50d271*/
        if ( v30 ) /*0x50d279*/
        {
          v27 = (char *)PlaySound___(v30, "UIStatsSkillUp", 0x121, 1); /*0x50d28c*/
          sub_6B7190((int *)v27, 0); /*0x50d292*/
          if ( v27 ) /*0x50d299*/
          {
            sub_6B73E0(v27); /*0x50d29d*/
            FormHeapFree((unsigned int)v27); /*0x50d2a3*/
          }
        }
        reference->bCanLevelUp = 1; /*0x50d2b1*/
      }
      if ( i != v46 ) /*0x50d341*/
      {
        v39 = (char *)MEMORY[0xB38CF0]; /*0x50d34a*/
        MasteryDescription = (char *)TESSkill_GetMasteryDescription((TESSkill *)TESSkillByCode, i); /*0x50d352*/
        ShowUIMessageBox(v34, v29, st6_0, a2, MasteryDescription, 0, 1, v39, 0); /*0x50d358*/
        v35 = TESSkillByCode->data.actorValue; /*0x50d35d*/
        if ( v35 == kSkillAV_Blade || (unsigned int)(v35 - 0x10) <= 1 ) /*0x50d36e*/
        {
          AnimData = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0); /*0x50d37d*/
          ActorAnimData_RemovePowerAttackGroups(AnimData); /*0x50d381*/
          ActorAnimData_RebuildPowerAttackKFList(AnimData, (int)v27, v29, st6_0, a2, (TESObjectREFR *)reference, 0); /*0x50d391*/
          v37 = PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1); /*0x50d3a3*/
          ActorAnimData_RemovePowerAttackGroups(v37); /*0x50d3a7*/
          ActorAnimData_RebuildPowerAttackKFList(v37, (int)v27, v29, st6_0, a2, (TESObjectREFR *)reference, 0); /*0x50d3b7*/
        }
      }
      UI_RefreshStatsMenuActorValues(); /*0x50d3bc*/
    }
  }
}
