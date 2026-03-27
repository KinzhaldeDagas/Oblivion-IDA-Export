void __userpurge Player_SkillLevelIncrease(
        PlayerCharacter *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        float *a6,
        char a7,
        char a8)
{
  int v9; // eax
  double v10; // st4
  int v11; // ecx
  int SkillMasteryLevel; // eax
  int v13; // ebp
  int v14; // ebx
  TESForm *ActorBaseForm; // eax
  int v16; // ebp
  unsigned int v17; // eax
  TESForm::ModReferenceList *BaseClass; // eax
  _DWORD *v19; // ebx
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  const char *v22; // ebx
  const char *v23; // eax
  _DWORD *v24; // ecx
  int *v25; // eax
  int *v26; // ebx
  const char *v27; // ebx
  const char *v28; // eax
  _DWORD *sound; // ecx
  int *v30; // eax
  int *v31; // ebx
  CHAR *v32; // ebx
  char *v33; // ecx
  int v34; // edi
  BSExtraDataVtbl *AnimData; // edi
  ActorAnimData *firstPersonAnimData; // edi
  const char *v37; // [esp+4h] [ebp-21Ch]
  int duration; // [esp+8h] [ebp-218h]
  const char *durationa; // [esp+8h] [ebp-218h]
  const char *durationb; // [esp+8h] [ebp-218h]
  char v41; // [esp+1Fh] [ebp-201h]
  float v42; // [esp+20h] [ebp-200h]
  float v43; // [esp+20h] [ebp-200h]
  int v44; // [esp+20h] [ebp-200h]
  char v45[500]; // [esp+28h] [ebp-1F8h] BYREF

  ++a1->miscStats[2];
  if ( !a7 )
  {
    v9 = *((_DWORD *)a6 + 0xB);
    v42 = 0.0;
    if ( (unsigned int)(v9 - 0xC) <= 0x14 )
      v42 = a1->skillExp[ActorValue_GetGroupOffsetFromAV(2, v9)];
    v10 = sub_65FAD0((Actor *)a1, (int)a6);
    v11 = *((_DWORD *)a6 + 0xB);
    v43 = v42 - v10;
    if ( v43 < 0.0 )
      v43 = 0.0;
    if ( (unsigned int)(v11 - 0xC) <= 0x14 )
      a1->skillExp[ActorValue_GetGroupOffsetFromAV(2, v11)] = v43;
  }
  SkillMasteryLevel = Actor_GetSkillMasteryLevel((int *)a1, a2, (int)a6, *((_DWORD *)a6 + 0xB));
  v13 = *((_DWORD *)a6 + 0xB);
  v44 = SkillMasteryLevel;
  v14 = Actor_GetBaseCalcAVi((int *)a1, a2, (int)a6, (int)a1, v13) + 1;
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);
  ((void (__thiscall *)(TESForm *, int, int))ActorBaseForm->vtbl[1].Unk_16)(ActorBaseForm, v13, v14);
  sub_57A6F0(v13);
  sub_5E2670(a1, v13, 1);
  v16 = Actor_GetSkillMasteryLevel((int *)a1, v14, (int)a6, *((_DWORD *)a6 + 0xB));
  sub_663C50((Actor *)a1, a6[0xB]);
  ++LODWORD(a1->skillExp[*((_DWORD *)a6 + 0xB) + 0xA]);
  v17 = *((_DWORD *)a6 + 0xD);
  if ( v17 <= 2 )
    ++*((_BYTE *)&a1->unk5B8 + v17);
  sub_6648D0(a1, *((_DWORD *)a6 + 0xC));
  v41 = 0;
  if ( Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef) )
  {
    duration = *((_DWORD *)a6 + 0xB);
    BaseClass = Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
    if ( sub_51C090(BaseClass, duration) )
    {
      ++a1->majorSkillAdvances;
      v41 = 1;
      sub_65FB30(a1);
    }
  }
  v19 = 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EC);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v19 = OblivionDynamicCast(
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &HUDMainMenu `RTTI Type Descriptor',
            0);
  }
  if ( !v41 || (signed int)a1->majorSkillAdvances < iLevelUpSkillCount )
  {
    if ( !a8 )
      goto LABEL_31;
    goto LABEL_26;
  }
  if ( sub_5A56C0(v19) )
  {
    if ( !a8 )
    {
      a1->bCanLevelUp = 1;
      goto LABEL_31;
    }
LABEL_26:
    v27 = (const char *)sYour;
    durationb = (const char *)SGameSetting_SkillIncreased;
    v28 = (const char *)sub_52EA90((int *)a6);
    _sprintf(v45, "%s %s %s.", v27, v28, durationb);
    sound = OSGlobals->sound;
    if ( sound )
    {
      v30 = PlaySound___(sound, "UIStatsSkillUp", 0x121, 0);
      v31 = v30;
      if ( v30 )
      {
        if ( !sub_6B7260(v30) )
        {
          sub_6B7190(v31, 0);
          sub_6B73E0(v31);
          FormHeapFree((unsigned int)v31);
        }
      }
    }
    a5 = flt_A30634;
    GameUI_QueueMessage(v45, 0, 1u, flt_A30634);
    goto LABEL_31;
  }
  if ( a8 )
  {
    v22 = (const char *)sYour;
    durationa = (const char *)sGameSetting_Meditate;
    v37 = (const char *)SGameSetting_SkillIncreased;
    v23 = (const char *)sub_52EA90((int *)a6);
    _sprintf(v45, "%s %s %s.  %s", v22, v23, v37, durationa);
    a5 = flt_A46B10;
    GameUI_QueueMessage(v45, 0, 1u, flt_A46B10);
    v24 = OSGlobals->sound;
    if ( v24 )
    {
      v25 = PlaySound___(v24, "UIStatsSkillUp", 0x121, 1);
      v26 = v25;
      if ( v25 )
      {
        sub_6B7190(v25, 0);
        sub_6B73E0(v26);
        FormHeapFree((unsigned int)v26);
      }
    }
  }
  a1->bCanLevelUp = 1;
LABEL_31:
  if ( v16 != v44 )
  {
    v32 = *((CHAR **)a6 + 9);
    if ( !v32 )
      v32 = EmptyString;
    TESSKill_GetMasteryDescription(a6, v16);
    sub_57B370(v33, a3, a4, a5, "skill_perk.xml", 0, 1, 0, 2, (char)v32);
    v34 = *((_DWORD *)a6 + 0xB);
    if ( v34 == 0xE || (unsigned int)(v34 - 0x10) <= 1 )
    {
      AnimData = TESObjectREFR_GetAnimData((Actor *)a1);
      sub_471990(AnimData);
      sub_476410(AnimData, (int)AnimData, a3, a4, a5, (TESObjectREFR *)a1, 0);
      firstPersonAnimData = a1->firstPersonAnimData;
      sub_471990(firstPersonAnimData);
      sub_476410(firstPersonAnimData, (int)firstPersonAnimData, a3, a4, a5, (TESObjectREFR *)a1, 0);
    }
  }
  sub_57A7D0();
}
