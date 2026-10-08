// Open native TrainingMenu. Resolve the trainer's configured skill and maximum level, calculate cost from the player's current skill, and gate purchase by gold, trainer cap, and per-level session limit.
BSStringT *__usercall TrainingMenu_Open@<eax>(
        int a1@<ebp>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        Actor *a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  Menu *v10; // esi
  TileMenu *v11; // eax
  void *trainingMenu; // esi
  TESForm *ActorBaseForm; // eax
  char TrainingSkillAV; // al
  UInt8 GroupOffsetFromAV; // al
  TESForm *v16; // eax
  PlayerCharacterVtbl *vtbl; // ebp
  TESForm *v18; // eax
  SkillActorValue v19; // eax
  double v20; // st7
  SkillMasteryLevel v21; // eax
  const char *MasteryName; // eax
  const char *v23; // edi
  const char *v24; // ebp
  int v25; // eax
  unsigned __int8 *v26; // edi
  const char *Name; // eax
  CHAR *v28; // eax
  CHAR *v29; // eax
  SkillMasteryLevel SkillMasteryLevel; // eax
  CHAR *v31; // eax
  CHAR *v32; // eax
  const char *v33; // eax
  char *v34; // eax
  char *v35; // ecx
  int v36; // eax
  _DWORD *a2; // [esp+10h] [ebp-150h]
  int a3a; // [esp+14h] [ebp-14Ch]
  const char *a3b; // [esp+14h] [ebp-14Ch]
  int a3c; // [esp+14h] [ebp-14Ch]
  float v43; // [esp+24h] [ebp-13Ch]
  char *v44; // [esp+28h] [ebp-138h]
  char v45[4]; // [esp+30h] [ebp-130h] BYREF
  unsigned __int8 v46[296]; // [esp+34h] [ebp-12Ch] BYREF

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x404); /*0x5dd4d7*/
  if ( OpenMenuTile ) /*0x5dd4e1*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x5dd4eb*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5dd4f9*/
  Depth = InterfaceManager_GetDepth(a4); /*0x5dd4fb*/
  v43 = Depth; /*0x5dd500*/
  XML = Tile::ReadFile((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\training_menu.xml"); /*0x5dd511*/
  ParentMenu = Tile_GetParentMenu(XML); /*0x5dd515*/
  v10 = (Menu *)ParentMenu; /*0x5dd51a*/
  if ( ParentMenu )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x404 )
    {
      v11 = (TileMenu *)OblivionDynamicCast( /*0x5dd54b*/
                          XML,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                          &TileMenu `RTTI Type Descriptor',
                          0);
      Menu_SetTileMenu(v10, st6_0, Depth, v11); /*0x5dd556*/
      trainingMenu = OblivionDynamicCast( /*0x5dd579*/
                       v10,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                       &TrainingMenu `RTTI Type Descriptor',
                       0);
      if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5dd5a4*/
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v43); /*0x5dd5b5*/
      *((_DWORD *)trainingMenu + 0x15) = a5;    // Store the trainer Actor at TrainingMenu+0x54. /*0x5dd5bf*/
      ActorBaseForm = Actor_GetActorBaseForm(a5, 0); /*0x5dd5c2*/
      TrainingSkillAV = TESAIForm_GetTrainingSkillAV(&ActorBaseForm[4].member.flags); /*0x5dd5cc*/
      GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, TrainingSkillAV); /*0x5dd5d4*/
      *((_DWORD *)trainingMenu + 0x16) = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, GroupOffsetFromAV);// Store the trainer's native TESSkill record at TrainingMenu+0x58. /*0x5dd5ec*/
      v16 = Actor_GetActorBaseForm(a5, 0); /*0x5dd5ef*/
      *((_DWORD *)trainingMenu + 0x18) = (unsigned __int8)TESAIForm_GetTrainingLevel(&v16[4].member.flags);// Store the trainer's maximum teachable skill level at TrainingMenu+0x60. /*0x5dd601*/
      vtbl = reference->vtbl; /*0x5dd60a*/
      v18 = Actor_GetActorBaseForm(a5, 0); /*0x5dd610*/
      v19 = TESAIForm_GetTrainingSkillAV(&v18[4].member.flags); /*0x5dd61a*/
      v20 = ((double (__thiscall *)(PlayerCharacter *, SkillActorValue, int))vtbl->super.GetAV_F)(reference, v19, a1) /*0x5dd62e*/
          * g_fTrainingCostMult.value;
      *((_DWORD *)trainingMenu + 0x17) = Double_To_SInt32(v20);// Training cost = current player value of the configured skill multiplied by fTrainingCostMult, converted to integer; store at TrainingMenu+0x5C. /*0x5dd639*/
      if ( *((_DWORD *)trainingMenu + 0x17) > sub_5E4420((Actor *)reference) ) /*0x5dd64a*/
      {
        v20 = 1.0; /*0x5dd64c*/
        Tile_SetFloat(*((Tile **)trainingMenu + 0xE), (_DWORD *)0xFAF, 1.0); /*0x5dd65a*/
      }
      v21 = Calc_MasteryFromSkill(*((_DWORD *)trainingMenu + 0x18)); /*0x5dd663*/
      MasteryName = ActorValue_GetMasteryName(v21); /*0x5dd669*/
      v23 = (const char *)stru_B38D20; /*0x5dd67a*/
      v24 = MasteryName; /*0x5dd683*/
      v44 = (char *)MEMORY[0xB38D28]; /*0x5dd685*/
      v25 = sub_5E4420((Actor *)reference); /*0x5dd689*/
      _sprintf((char *)v46, "%s %s: %d", v44, v23, v25);
      v26 = _mbsstr(v46, stru_B38D20); /*0x5dd6b5*/
      *v26 = toupper((char)*v26); /*0x5dd6cf*/
      Tile_SetString(XML, (_DWORD *)0xFAE, (char *)v46); /*0x5dd6d1*/
      Name = (const char *)ActorValue_GetName(*(_DWORD *)(*((_DWORD *)trainingMenu + 0x16) + 0x2C));// TrainingMenu writes the resolved native skill name at this exact UI callsite. A separated skill should replace the TrainingMenu tile text locally rather than globally detouring ActorValue_GetName. /*0x5dd6dd*/
      _sprintf((char *)v46, "%s", Name); /*0x5dd6ed*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0xB), (_DWORD *)0xFDE, (char *)v46); /*0x5dd702*/
      v28 = sub_588C10(*((_DWORD **)trainingMenu + 0x11), 0xFDE); /*0x5dd710*/
      _sprintf((char *)v46, "%s %s", v28, v24); /*0x5dd720*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0x11), (_DWORD *)0xFDE, (char *)v46); /*0x5dd735*/
      a3a = *((_DWORD *)trainingMenu + 0x17); /*0x5dd740*/
      v29 = sub_588C10(*((_DWORD **)trainingMenu + 0x10), 0xFDE); /*0x5dd746*/
      _sprintf((char *)v46, "%s %i", v29, a3a); /*0x5dd756*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0x10), (_DWORD *)0xFDE, (char *)v46); /*0x5dd76b*/
      SkillMasteryLevel = Actor_GetSkillMasteryLevel( /*0x5dd77d*/
                            (Actor *)reference,
                            *(SkillActorValue *)(*((_DWORD *)trainingMenu + 0x16) + 0x2C));
      a3b = ActorValue_GetMasteryName(SkillMasteryLevel); /*0x5dd78e*/
      v31 = sub_588C10(*((_DWORD **)trainingMenu + 0x13), 0xFDE); /*0x5dd794*/
      _sprintf((char *)v46, "%s %s", v31, a3b); /*0x5dd7a4*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0x13), (_DWORD *)0xFDE, (char *)v46); /*0x5dd7b9*/
      a3c = g_iTrainingSkills.value; /*0x5dd7d0*/
      a2 = (_DWORD *)reference->trainingSessionsUsed; /*0x5dd7d4*/
      v32 = sub_588C10(*((_DWORD **)trainingMenu + 0x14), 0xFDE); /*0x5dd7da*/
      _sprintf((char *)v46, "%s %i/%i", v32, a2, a3c); /*0x5dd7ea*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0x14), (_DWORD *)0xFDE, (char *)v46); /*0x5dd7ff*/
      v33 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(*((_DWORD *)trainingMenu + 0x16) + 0x18) /*0x5dd817*/
                                                             + 0x10))(
                            *((_DWORD *)trainingMenu + 0x16) + 0x18,
                            0);
      _sprintf(v45, "%s", v33); /*0x5dd824*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0xD), (_DWORD *)0xFDE, v45); /*0x5dd839*/
      v34 = *(char **)(*((_DWORD *)trainingMenu + 0x16) + 0x24); /*0x5dd841*/
      if ( !v34 ) /*0x5dd847*/
        v34 = EmptyString; /*0x5dd849*/
      Tile_SetString(*((_DWORD **)trainingMenu + 0xC), (_DWORD *)0xFE6, v34); /*0x5dd857*/
      if ( reference->vtbl->super.GetActorValue( /*0x5dd876*/
             (Actor *)reference,
             *(AVCode *)(*((_DWORD *)trainingMenu + 0x16) + 0x2C)) < *((_DWORD *)trainingMenu + 0x18) )// Enable purchase only while the player's current skill is below the trainer's configured maximum level.
      {                                         // Also require trainingSessionsUsed < iTrainingSkills for the current player level.
        if ( (signed int)reference->trainingSessionsUsed < g_iTrainingSkills.value ) /*0x5dd892*/
        {
LABEL_17:
          EnableMenu((Menu *)v44, st5_0, st6_0, v20, 0); /*0x5dd8d2*/
          sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x5dd8e6*/
          v36 = TESTopic::GetTopic(5, 5); /*0x5dd8ef*/
          ((void (__thiscall *)(Actor *, int, PlayerCharacter *, int, int, _DWORD))a5->vtbl->super.super.Unk_37)( /*0x5dd911*/
            a5,
            v36,
            reference,
            1,
            1,
            0);
          return XML; /*0x5dd92e*/
        }
        v35 = (char *)stru_B38578; /*0x5dd894*/
      }
      else
      {
        v35 = (char *)stru_B38580; /*0x5dd878*/
      }
      Tile_SetString(*((_DWORD **)trainingMenu + 0x12), (_DWORD *)0xFDE, v35); /*0x5dd8a3*/
      Tile_SetFloat(*((Tile **)trainingMenu + 0xE), (_DWORD *)0xFA1, 1.0); /*0x5dd8b6*/
      v20 = fConstant_2; /*0x5dd8bb*/
      Tile_SetFloat(*((Tile **)trainingMenu + 0x12), (_DWORD *)0xFA1, fConstant_2); /*0x5dd8cd*/
      goto LABEL_17; /*0x5dd8cd*/
    }
    if ( v10->members.tile ) /*0x5dd92f*/
      v10->__vftable->Destructor(v10, 1); /*0x5dd93d*/
  }
  return 0; /*0x5dd915*/
}
