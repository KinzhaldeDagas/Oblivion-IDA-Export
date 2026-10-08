// Refreshes DialogMenu topic/persuasion/service tile availability from the current speaker and package/service flags. Called when entering or leaving response display; it does not run TESTopicInfo results.
void __thiscall DialogMenu::RefreshActionAvailability(DialogMenu *this, bool enableActions)
{
  double v3; // st7
  void *v4; // ecx
  int v5; // edx
  BSExtraDataVtbl *ExtraPackage; // edi
  char v7; // al
  bool v8; // bl
  TESForm *ActorBaseForm; // eax
  unsigned __int8 TrainingLevel; // al
  TESTopic *Topic; // eax
  TESObjectREFR *v12; // ecx
  DialogueItemView *DialogueItem; // eax
  TESForm *v15; // eax
  float value; // [esp+0h] [ebp-14h]
  float valuea; // [esp+0h] [ebp-14h]
  float valueb; // [esp+0h] [ebp-14h]
  float valuec; // [esp+0h] [ebp-14h]
  float valued; // [esp+0h] [ebp-14h]
  float a3a; // [esp+10h] [ebp-4h]
  int a3; // [esp+10h] [ebp-4h]
  int v23; // [esp+18h] [ebp+4h]
  int v24; // [esp+18h] [ebp+4h]
  int v25; // [esp+18h] [ebp+4h]

  a3a = (float)(enableActions + 1); /*0x59e2cf*/
  Tile_SetFloat(*((Tile **)this + 0x10), 0xFA1u, a3a); /*0x59e2df*/
  v3 = a3a; /*0x59e2e4*/
  Tile_SetFloat(*((Tile **)this + 0xC), 0xFA1u, a3a); /*0x59e2f4*/
  v4 = *((void **)this + 0x18); /*0x59e2f9*/
  if ( v4 ) /*0x59e2fe*/
  {
    if ( (unsigned __int8)sub_5E1AB0(v4) ) /*0x59e304*/
    {
      v3 = 1.0; /*0x59e30d*/
      Tile_SetFloat(*((Tile **)this + 0x10), 0xFA1u, 1.0); /*0x59e31b*/
    }
    v5 = *(_DWORD *)(*((_DWORD *)this + 0x18) + 0x58); /*0x59e323*/
    ExtraPackage = *(BSExtraDataVtbl **)(v5 + 8); /*0x59e327*/
    if ( ExtraPackage ) /*0x59e32c*/
    {
      if ( TESPackage::IsTemporaryOverrideType(*(TESPackage **)(v5 + 8)) ) /*0x59e334*/
        ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(*((_DWORD *)this + 0x18) + 0x44)); /*0x59e348*/
      if ( ExtraPackage ) /*0x59e34c*/
      {
        if ( ((int)ExtraPackage[3].CompareTo & 1) != 0 ) /*0x59e356*/
        {
          if ( !enableActions || (sub_5E8900(*((Actor **)this + 0x18), v3), a3 = 2, !v7) ) /*0x59e373*/
            a3 = 1; /*0x59e375*/
          value = (float)a3; /*0x59e385*/
          Tile_SetFloat(*((Tile **)this + 0x13), 0xFA1u, value); /*0x59e38d*/
          v8 = 0; /*0x59e392*/
          if ( enableActions && sub_5E89B0(*((_DWORD **)this + 0x18)) ) /*0x59e39d*/
          {
            ActorBaseForm = Actor_GetActorBaseForm(*((Actor **)this + 0x18), 0); /*0x59e3ab*/
            TrainingLevel = TESAIForm_GetTrainingLevel(&ActorBaseForm[4].member.flags); /*0x59e3b5*/
            v8 = 1; /*0x59e3be*/
            if ( Calc_MasteryFromSkill(TrainingLevel) == kSkillMastery_Master ) /*0x59e3cb*/
            {
              Topic = TESTopic::GetTopic(DialogueType_Service, 0); /*0x59e3d1*/
              if ( Topic ) /*0x59e3db*/
              {
                v12 = (TESObjectREFR *)reference; /*0x59e3dd*/
                dword_B131F8 = 2; /*0x59e3e6*/
                DialogueItem = TESTopic::CreateDialogueItem(Topic, *((Actor **)this + 0x18), v12, Topic, 0); /*0x59e3f3*/
                dword_B131F8 = 0xFFFFFFFF; /*0x59e3fa*/
                v8 = DialogueItem == 0; /*0x59e406*/
              }
            }
          }
          valuea = (float)(v8 + 1); /*0x59e41e*/
          Tile_SetFloat(*((Tile **)this + 0x14), 0xFA1u, valuea); /*0x59e426*/
          if ( !enableActions || (v23 = 2, !sub_5E8A20(*((_DWORD **)this + 0x18))) ) /*0x59e436*/
            v23 = 1; /*0x59e443*/
          valueb = (float)v23; /*0x59e453*/
          Tile_SetFloat(*((Tile **)this + 0x16), 0xFA1u, valueb); /*0x59e45b*/
          if ( !enableActions || (v24 = 2, !sub_5E8890(*((_DWORD **)this + 0x18))) ) /*0x59e467*/
            v24 = 1; /*0x59e474*/
          valuec = (float)v24; /*0x59e484*/
          Tile_SetFloat(*((Tile **)this + 0x15), 0xFA1u, valuec); /*0x59e48c*/
          if ( !enableActions /*0x59e4a9*/
            || (v15 = Actor_GetActorBaseForm(*((Actor **)this + 0x18), 0),
                v25 = 2,
                !TESAIForm_OffersService(&v15[4].member.flags, 0x800)) )
          {
            v25 = 1; /*0x59e4b6*/
          }
          valued = (float)v25; /*0x59e4c6*/
          Tile_SetFloat(*((Tile **)this + 0x17), 0xFA1u, valued); /*0x59e4ce*/
        }
      }
    }
  }
}
