// MW Medium Armor v20 deliberately leaves ServeSentence native. A deterministic post-call Medium loss is invalid because this function makes one random native-skill choice per unit (max ten), applies Security/Sneak +1 versus other skills -1, preserves progress, and bypasses ordinary advancement counters.
EffectNode *__usercall ServeSentence@<eax>(
        Actor *a1@<ecx>,
        TESSkill_RecordView *selectedSkill@<ebx>,
        signed int randomSkillAV@<edi>,
        double a4@<st7>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        double a10@<st6>,
        double a11@<st5>)
{
  UInt32 v12; // eax
  Sky *GlobalObject; // eax
  Sky *v14; // eax
  UInt8 GroupOffsetFromAV; // al
  char v16; // al
  TESForm *v17; // eax
  SkillActorValue actorValue; // ebp
  TESForm *ActorBaseForm; // eax
  char v20; // al
  unsigned __int8 *****ContainerChanges; // eax
  int v22; // edi
  int v23; // ebp
  TESObjectCELL *DwordAtOffset40; // ebx
  TeleportData *TeleportData; // eax
  TESObjectREFR *LinkedDoor; // eax
  TeleportData *v27; // eax
  TESObjectCELL *ExteriorCellAtCoord; // eax
  int *v29; // edi
  char *Head; // eax
  PlayerCharacterVtbl *vtbl; // edi
  int i; // edi
  UInt8 v33; // al
  TESSkill_RecordView *TESSkillByCode; // ebx
  double v35; // st7
  int v36; // eax
  char *v37; // ecx
  const char *value; // edx
  const char *v39; // ebp
  const char *Name; // eax
  EffectNode *result; // eax
  EffectNode *j; // esi
  const char *v43; // [esp+8h] [ebp-854h]
  int v44; // [esp+Ch] [ebp-850h]
  TESObjectREFR **p_linkedDoor; // [esp+20h] [ebp-83Ch]
  float v46; // [esp+28h] [ebp-834h]
  int ArgList; // [esp+2Ch] [ebp-830h]
  float ArgLista; // [esp+2Ch] [ebp-830h]
  TESWorldSpace *WorldSpace; // [esp+30h] [ebp-82Ch]
  _DWORD skillBaseDeltas[21]; // [esp+34h] [ebp-828h] BYREF
  char v51[2000]; // [esp+88h] [ebp-7D4h] BYREF

  v12 = a1[5].members.unk0E8[3]; /*0x670719*/
  a1[5].members.unk07C = (Actor *)(0x18 * v12); /*0x670732*/
  LOBYTE(a1[5].members.unk080[0]) = 1; /*0x670738*/
  a1[6].members.super.super.parentCell = (TESObjectCELL *)((char *)a1[6].members.super.super.parentCell + v12); /*0x67073f*/
  byte_B14E4C = 0; /*0x670746*/
  _sprintf(v51, "\n"); /*0x67074d*/
  LOBYTE(a1[1].members.unk0E8[5]) = 0; /*0x670755*/
  GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x67075c*/
  GlobalObject->Flags0FC &= ~0x20u; /*0x670761*/
  while ( (int)a1[5].members.unk07C > 0 ) /*0x670777*/
    sub_65F770((MagicTarget *)reference, (int)selectedSkill, randomSkillAV, a8); /*0x67077f*/
  v14 = Sky_CreateOrGetGlobalObject(); /*0x670786*/
  v14->Flags0FC |= 0x20u; /*0x67078b*/
  memset(skillBaseDeltas, 0, sizeof(skillBaseDeltas));// Initialize a 21-entry signed skill-delta accumulator used only to summarize the sentence's direct base-skill changes. /*0x670794*/
  if ( (int)a1[5].members.unk0E8[3] > 0xA )     // Clamp the number of prison skill-mutation iterations to at most 10. /*0x6707f3*/
    a1[5].members.unk0E8[3] = 0xA; /*0x6707f5*/
  for ( ; a1[5].members.unk0E8[3]; --a1[5].members.unk0E8[3] ) /*0x6707fb*/
  {                                             // Choose a native skill AV in 0x0C..0x20 using Oblivion's random/additive loop; the selection does not consult TESClass majorSkills.
    for ( randomSkillAV = Game_RandomLargeInteger(0) % 0x15; /*0x67082d*/
          randomSkillAV < 0xC;
          randomSkillAV += Game_RandomLargeInteger(0) % 0xA )
    {
      ; /*0x670842*/
    }
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, randomSkillAV); /*0x67084c*/
    selectedSkill = TESDataHandler_GetTESSkillByCode(g_TESDataHandler, GroupOffsetFromAV); /*0x670862*/
    a9 = ((double (__thiscall *)(Actor *, SkillActorValue))a1->vtbl->GetAV_F)(a1, selectedSkill->data.actorValue); /*0x670870*/
    if ( Double_To_SInt32(a9) > 1 )             // Apply a sentence mutation only when the selected skill's current value is greater than 1. /*0x67087a*/
    {                                           // Security (AV 0x1E) and Sneak (AV 0x1F) increase by one during sentence service; every other selected native skill takes the decrement branch.
      if ( randomSkillAV == 0x1F || randomSkillAV == 0x1E ) /*0x670888*/
      {
        actorValue = selectedSkill->data.actorValue; /*0x6708e4*/
        selectedSkill = (TESSkill_RecordView *)(Actor_GetBaseCalcAVi( /*0x6708f5*/
                                                  (int *)a1,
                                                  (int)selectedSkill,
                                                  randomSkillAV,
                                                  (int)a1,
                                                  actorValue)
                                              + 1);
        ActorBaseForm = Actor_GetActorBaseForm(a1, 0); /*0x6708f8*/
        ((void (__thiscall *)(TESForm *, SkillActorValue, TESSkill_RecordView *))ActorBaseForm->vtbl[1].Unk_16)( /*0x670909*/
          ActorBaseForm,
          actorValue,
          selectedSkill);                       // Security/Sneak branch: write base skill +1 directly to the actor base form, bypassing Player_SkillLevelIncrease side effects.
        UI_UpdateActorValueDisplays(actorValue); /*0x67090c*/
        Player_OnActorValueBaseChanged((PlayerCharacter *)a1, actorValue, 1);// After a direct prison increase, rebuild player skill requirements through Player_OnActorValueBaseChanged. /*0x670919*/
        v20 = ActorValue_GetGroupOffsetFromAV(2, randomSkillAV); /*0x670921*/
        a9 = *(float *)&skillBaseDeltas[v20] + dbl_A2F928; /*0x670931*/
        *(float *)&skillBaseDeltas[v20] = a9; /*0x67093a*/
      }
      else
      {
        v16 = ActorValue_GetGroupOffsetFromAV(2, randomSkillAV); /*0x67088d*/
        a9 = *(float *)&skillBaseDeltas[v16] - dbl_A2F928; /*0x6708a0*/
        randomSkillAV = selectedSkill->data.actorValue; /*0x670892*/
        *(float *)&skillBaseDeltas[v16] = a9; /*0x6708ac*/
        selectedSkill = (TESSkill_RecordView *)(Actor_GetBaseCalcAVi( /*0x6708b9*/
                                                  (int *)a1,
                                                  (int)selectedSkill,
                                                  randomSkillAV,
                                                  (int)a1,
                                                  randomSkillAV)
                                              - 1);
        v17 = Actor_GetActorBaseForm(a1, 0); /*0x6708bc*/
        ((void (__thiscall *)(TESForm *, signed int, TESSkill_RecordView *))v17->vtbl[1].Unk_16)( /*0x6708cd*/
          v17,
          randomSkillAV,
          selectedSkill);                       // Non-Security/Sneak branch: write base skill -1 directly to the actor base form. No normal skill-level counters or majorSkillAdvances are incremented.
        UI_UpdateActorValueDisplays(randomSkillAV); /*0x6708d0*/
        Player_OnActorValueBaseChanged((PlayerCharacter *)a1, randomSkillAV, 1);// After a direct prison decrement, notify Player_OnActorValueBaseChanged; for a player skill this rebuilds all 21 requiredSkillExp entries. /*0x6708dd*/
      }
    }
  }
  sub_6765F0( /*0x670960*/
    (int)selectedSkill,
    randomSkillAV,
    a7,
    a8,
    a9,
    (ActorProcessManager *)&qword_B3BB2C[0x75],
    a6,
    0,
    MEMORY[0xB3BAD0],
    1);
  if ( MEMORY[0xB3BAD4] ) /*0x670965*/
  {
    ContainerChanges = (unsigned __int8 *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(MEMORY[0xB3BAD4] + 0x44)); /*0x670971*/
    if ( ContainerChanges ) /*0x670978*/
      sub_4917E0(ContainerChanges, a7, a8, a9, (TESObjectREFR *)MEMORY[0xB3BAD4], (TESForm *)reference); /*0x67098a*/
    sub_57A3B0(a8, 0); /*0x670991*/
  }
  if ( MEMORY[0xB3BAD0] ) /*0x670999*/
  {
    if ( unk_B35B90 ) /*0x6709a6*/
      sub_4BE5A0((_DWORD *)unk_B35B90); /*0x6709b0*/
    if ( g_DistantLODLoaderTasksByCell ) /*0x6709b5*/
      sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x6709bf*/
    v22 = 0x7FFFFFFF; /*0x6709ca*/
    v23 = 0x7FFFFFFF; /*0x6709cf*/
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)MEMORY[0xB3BAD0]); /*0x6709dc*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(MEMORY[0xB3BAD0]); /*0x6709e5*/
    if ( DwordAtOffset40 /*0x670a4f*/
      || WorldSpace
      && (v22 = (int)*(float *)(*((int (__thiscall **)(TESChildCELL *))MEMORY[0xB3BAD0]->vtbl + 0x5D))(MEMORY[0xB3BAD0]) >> 0xC,
          a9 = *(float *)((*((int (__thiscall **)(TESChildCELL *))MEMORY[0xB3BAD0]->vtbl + 0x5D))(MEMORY[0xB3BAD0]) + 4),
          v23 = (int)a9 >> 0xC,
          (DwordAtOffset40 = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(WorldSpace, a7, a8, a9, v22, v23)) != 0) )
    {
      TeleportData = TESObjectREFR_GetTeleportData((TESObjectREFR *)MEMORY[0xB3BAD0]); /*0x670a5b*/
      LinkedDoor = TeleportData_GetLinkedDoor(TeleportData); /*0x670a62*/
      v27 = TESObjectREFR_GetTeleportData(LinkedDoor); /*0x670a69*/
      p_linkedDoor = &v27->linkedDoor; /*0x670a70*/
      if ( v27 ) /*0x670a74*/
      {
        if ( sub_42B460(&v27->linkedDoor) ) /*0x670a7c*/
        {
          ExteriorCellAtCoord = sub_42B460(p_linkedDoor); /*0x670adf*/
        }
        else
        {
          ArgList = (int)*(float *)EmbeddedList_GetHead((char *)p_linkedDoor) >> 0xC; /*0x670aa7*/
          v46 = *((float *)EmbeddedList_GetHead((char *)p_linkedDoor) + 1); /*0x670ab3*/
          a9 = v46; /*0x670ab7*/
          if ( ArgList == v22 && v23 == (int)v46 >> 0xC ) /*0x670ad0*/
            goto LABEL_34; /*0x670ad0*/
          ExteriorCellAtCoord = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord( /*0x670ad8*/
                                                   WorldSpace,
                                                   a7,
                                                   a8,
                                                   a9,
                                                   ArgList,
                                                   (int)v46 >> 0xC);
        }
        DwordAtOffset40 = ExteriorCellAtCoord; /*0x670ae4*/
LABEL_34:
        v29 = (int *)sub_42B430((char *)p_linkedDoor); /*0x670ae6*/
        Head = EmbeddedList_GetHead((char *)p_linkedDoor); /*0x670af5*/
        PlayerCharacter_ChangeCellAndPosition( /*0x670b2d*/
          (TESObjectREFR *)reference,
          a9,
          a6,
          a7,
          a8,
          a4,
          a5,
          a10,
          a11,
          *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))Head,
          *((NiAVObject *(__thiscall **)(NiAVObject *, const char *))Head + 1),
          *((void *(__thiscall **)(NiAVObject *))Head + 2),
          *v29,
          v29[1],
          v29[2],
          DwordAtOffset40,
          1);
      }
    }
  }
  vtbl = reference->vtbl; /*0x670b32*/
  ArgLista = ((double (__thiscall *)(PlayerCharacter *))vtbl->super.Unk_94)(reference) * dbl_A3D360; /*0x670b55*/
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))vtbl->super.Unk_95)(reference, LODWORD(ArgLista)); /*0x670b60*/
  a1[5].members.unk0E8[3] = 0; /*0x670b64*/
  MEMORY[0xB3BAD4] = 0; /*0x670b70*/
  MEMORY[0xB3BAD0] = 0; /*0x670b75*/
  ActorProcessManager_RemoveCrimesForCriminal((ActorProcessManager *)&qword_B3BB2C[0x75], a1); /*0x670b7a*/
  for ( i = 0xC; i < 0x21; ++i )                // Walk all 21 accumulated skill deltas and build the native sentence-result message. This reporting pass also has no major/minor distinction. /*0x670b7f*/
  {
    v33 = ActorValue_GetGroupOffsetFromAV(2, i); /*0x670b87*/
    TESSkillByCode = TESDataHandler_GetTESSkillByCode(g_TESDataHandler, v33); /*0x670b9e*/
    v35 = *(float *)&skillBaseDeltas[ActorValue_GetGroupOffsetFromAV(2, i)]; /*0x670bab*/
    v36 = Double_To_SInt32(v35); /*0x670baf*/
    if ( v36 ) /*0x670bb6*/
    {
      if ( i == 0x1F || i == 0x1E ) /*0x670bc2*/
      {
        value = MEMORY[0xB383A8].value; /*0x670bce*/
      }
      else
      {
        value = stru_B383B0.value; /*0x670bc4*/
        v36 = -v36; /*0x670bca*/
      }
      v39 = MEMORY[0xB38D28].value; /*0x670bd4*/
      v44 = v36; /*0x670bda*/
      v43 = value; /*0x670bdb*/
      Name = TESSkill_GetName(TESSkillByCode); /*0x670bde*/
      _sprintf(v51, "%s %s %s %s by %d.\n", v51, v39, Name, v43, v44); /*0x670bf5*/
    }
  }
  ShowUIMessageBox(v37, a7, a8, v35, v51, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x670c1e*/
  result = a1->members.magicTarget.vtbl->GetActiveEffectList(&a1->members.magicTarget); /*0x670c31*/
  for ( j = result; j; j = j->next ) /*0x670c37*/
  {
    if ( !j->next && !j->data ) /*0x670c46*/
      break; /*0x670c49*/
    result = (EffectNode *)j->data; /*0x670c4b*/
    if ( j->data->members.effectItem->setting->effectCode == 0x47445553 ) /*0x670c59*/
    {
      result = (EffectNode *)OblivionDynamicCast( /*0x670c6a*/
                               result,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                               &SunDamageEffect `RTTI Type Descriptor',
                               0);
      BYTE1(result[7].next) = 1; /*0x670c72*/
    }
  }
  return result; /*0x670c7d*/
}
