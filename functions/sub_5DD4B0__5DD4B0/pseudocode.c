BSStringT *__usercall sub_5DD4B0@<eax>(
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
  void *v12; // esi
  TESForm *ActorBaseForm; // eax
  char TrainingSkillAV; // al
  char GroupOffsetFromAV; // al
  TESForm *v16; // eax
  PlayerCharacterVtbl *vtbl; // ebp
  TESForm *v18; // eax
  int v19; // eax
  double v20; // st7
  unsigned int v21; // eax
  int MasteryName; // eax
  const char *v23; // edi
  const char *v24; // ebp
  int v25; // eax
  unsigned __int8 *v26; // edi
  const char *Name; // eax
  CHAR *v28; // eax
  CHAR *v29; // eax
  unsigned int SkillMasteryLevel; // eax
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

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x404);
  if ( OpenMenuTile )
    (**OpenMenuTile)(OpenMenuTile, 1);
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(a4);
  v43 = Depth;
  XML = Menu_LoadXML((BSStringT *)Singleton->menuRoot, st5_0, st6_0, Depth, "Data\\Menus\\training_menu.xml");
  ParentMenu = Tile_GetParentMenu(XML);
  v10 = (Menu *)ParentMenu;
  if ( ParentMenu )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x404 )
    {
      v11 = (TileMenu *)OblivionDynamicCast(
                          XML,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                          &TileMenu `RTTI Type Descriptor',
                          0);
      Menu_SetTileMenu(v10, st6_0, Depth, v11);
      v12 = OblivionDynamicCast(
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
              &TrainingMenu `RTTI Type Descriptor',
              0);
      if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
        Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v43);
      *((_DWORD *)v12 + 0x15) = a5;
      ActorBaseForm = Actor_GetActorBaseForm(a5, 0);
      TrainingSkillAV = TESAIForm_GetTrainingSkillAV((unsigned __int8 *)&ActorBaseForm[4].member.flags);
      GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, TrainingSkillAV);
      *((_DWORD *)v12 + 0x16) = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
      v16 = Actor_GetActorBaseForm(a5, 0);
      *((_DWORD *)v12 + 0x18) = (unsigned __int8)TESAIForm_GetTrainingLevel(&v16[4].member.flags);
      vtbl = TESDataHandler_g_PlayerRef->vtbl;
      v18 = Actor_GetActorBaseForm(a5, 0);
      v19 = TESAIForm_GetTrainingSkillAV((unsigned __int8 *)&v18[4].member.flags);
      v20 = ((double (__thiscall *)(PlayerCharacter *, int, int))vtbl->super.GetAV_F)(
              TESDataHandler_g_PlayerRef,
              v19,
              a1)
          * fTrainingCostMult;
      *((_DWORD *)v12 + 0x17) = Double_To_SInt32(v20);
      if ( *((_DWORD *)v12 + 0x17) > sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) )
      {
        v20 = 1.0;
        Tile_SetFloat(*((Tile **)v12 + 0xE), (_DWORD *)0xFAF, 1.0);
      }
      v21 = Calc_MasteryFromSkill(*((_DWORD *)v12 + 0x18));
      MasteryName = ActorValue_GetMasteryName(v21);
      v23 = (const char *)dword_B38D20;
      v24 = (const char *)MasteryName;
      v44 = (char *)sYour;
      v25 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
      _sprintf((char *)v46, "%s %s: %d", v44, v23, v25);
      v26 = _mbsstr(v46, dword_B38D20);
      *v26 = toupper((char)*v26);
      Tile_SetString(XML, (_DWORD *)0xFAE, (char *)v46);
      Name = (const char *)ActorValue_GetName(*(_DWORD *)(*((_DWORD *)v12 + 0x16) + 0x2C));
      _sprintf((char *)v46, "%s", Name);
      Tile_SetString(*((_DWORD **)v12 + 0xB), (_DWORD *)0xFDE, (char *)v46);
      v28 = sub_588C10(*((_DWORD **)v12 + 0x11), 0xFDE);
      _sprintf((char *)v46, "%s %s", v28, v24);
      Tile_SetString(*((_DWORD **)v12 + 0x11), (_DWORD *)0xFDE, (char *)v46);
      a3a = *((_DWORD *)v12 + 0x17);
      v29 = sub_588C10(*((_DWORD **)v12 + 0x10), 0xFDE);
      _sprintf((char *)v46, "%s %i", v29, a3a);
      Tile_SetString(*((_DWORD **)v12 + 0x10), (_DWORD *)0xFDE, (char *)v46);
      SkillMasteryLevel = Actor_GetSkillMasteryLevel(*(_DWORD *)(*((_DWORD *)v12 + 0x16) + 0x2C));
      a3b = (const char *)ActorValue_GetMasteryName(SkillMasteryLevel);
      v31 = sub_588C10(*((_DWORD **)v12 + 0x13), 0xFDE);
      _sprintf((char *)v46, "%s %s", v31, a3b);
      Tile_SetString(*((_DWORD **)v12 + 0x13), (_DWORD *)0xFDE, (char *)v46);
      a3c = iTrainingSkills;
      a2 = (_DWORD *)TESDataHandler_g_PlayerRef->trainingSessionsUsed;
      v32 = sub_588C10(*((_DWORD **)v12 + 0x14), 0xFDE);
      _sprintf((char *)v46, "%s %i/%i", v32, a2, a3c);
      Tile_SetString(*((_DWORD **)v12 + 0x14), (_DWORD *)0xFDE, (char *)v46);
      v33 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(*((_DWORD *)v12 + 0x16) + 0x18) + 0x10))(
                            *((_DWORD *)v12 + 0x16) + 0x18,
                            0);
      _sprintf(v45, "%s", v33);
      Tile_SetString(*((_DWORD **)v12 + 0xD), (_DWORD *)0xFDE, v45);
      v34 = *(char **)(*((_DWORD *)v12 + 0x16) + 0x24);
      if ( !v34 )
        v34 = EmptyString;
      Tile_SetString(*((_DWORD **)v12 + 0xC), (_DWORD *)0xFE6, v34);
      if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
             (Actor *)TESDataHandler_g_PlayerRef,
             *(AVCode *)(*((_DWORD *)v12 + 0x16) + 0x2C)) < *((_DWORD *)v12 + 0x18) )
      {
        if ( (signed int)TESDataHandler_g_PlayerRef->trainingSessionsUsed < iTrainingSkills )
        {
LABEL_17:
          EnableMenu((Menu *)v44, st5_0, st6_0, v20, 0);
          sub_6AC3D0((_DWORD *)OSGlobals->sound);
          v36 = TESTopic::GEtTopic(5, 5);
          ((void (__thiscall *)(Actor *, int, PlayerCharacter *, int, int, _DWORD))a5->vtbl->super.super.Unk_37)(
            a5,
            v36,
            TESDataHandler_g_PlayerRef,
            1,
            1,
            0);
          return XML;
        }
        v35 = (char *)dword_B38578;
      }
      else
      {
        v35 = (char *)dword_B38580;
      }
      Tile_SetString(*((_DWORD **)v12 + 0x12), (_DWORD *)0xFDE, v35);
      Tile_SetFloat(*((Tile **)v12 + 0xE), (_DWORD *)0xFA1, 1.0);
      v20 = fConstant_2;
      Tile_SetFloat(*((Tile **)v12 + 0x12), (_DWORD *)0xFA1, fConstant_2);
      goto LABEL_17;
    }
    if ( v10->members.tile )
      v10->__vftable->Destructor(v10, 1);
  }
  return 0;
}
