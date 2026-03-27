void __thiscall sub_59E2B0(int *this, char a2)
{
  void *v3; // ecx
  int v4; // edx
  BSExtraDataVtbl *ExtraPackage; // edi
  bool v6; // bl
  TESForm *ActorBaseForm; // eax
  unsigned __int8 TrainingLevel; // al
  TESTopic *v9; // eax
  TESObjectREFR *v10; // ecx
  Unk1C *DialogueInfo; // eax
  TESForm *v13; // eax
  float v14; // [esp+0h] [ebp-14h]
  float v15; // [esp+0h] [ebp-14h]
  float v16; // [esp+0h] [ebp-14h]
  float v17; // [esp+0h] [ebp-14h]
  float v18; // [esp+0h] [ebp-14h]
  float a3a; // [esp+10h] [ebp-4h]
  int a3; // [esp+10h] [ebp-4h]
  int v21; // [esp+18h] [ebp+4h]
  int v22; // [esp+18h] [ebp+4h]
  int v23; // [esp+18h] [ebp+4h]

  a3a = (float)((a2 != 0) + 1);
  Tile_SetFloat((Tile *)*(this + 0x10), (_DWORD *)0xFA1, a3a);
  Tile_SetFloat((Tile *)*(this + 0xC), (_DWORD *)0xFA1, a3a);
  v3 = (void *)*(this + 0x18);
  if ( v3 )
  {
    if ( (unsigned __int8)sub_5E1AB0(v3) )
      Tile_SetFloat((Tile *)*(this + 0x10), (_DWORD *)0xFA1, 1.0);
    v4 = *(_DWORD *)(*(this + 0x18) + 0x58);
    ExtraPackage = *(BSExtraDataVtbl **)(v4 + 8);
    if ( ExtraPackage )
    {
      if ( sub_567770(*(char **)(v4 + 8)) )
        ExtraPackage = ExtraDataList::GetExtraPackage((ExtraDataList *)(*(this + 0x18) + 0x44));
      if ( ExtraPackage )
      {
        if ( ((int)ExtraPackage[3].CompareTo & 1) != 0 )
        {
          if ( !a2 || (a3 = 2, !sub_5E8900(*(this + 0x18))) )
            a3 = 1;
          v14 = (float)a3;
          Tile_SetFloat((Tile *)*(this + 0x13), (_DWORD *)0xFA1, v14);
          v6 = 0;
          if ( a2 )
          {
            if ( sub_5E89B0((_DWORD *)*(this + 0x18)) )
            {
              ActorBaseForm = Actor_GetActorBaseForm((Actor *)*(this + 0x18), 0);
              TrainingLevel = TESAIForm_GetTrainingLevel(&ActorBaseForm[4].member.flags);
              v6 = 1;
              if ( Calc_MasteryFromSkill(TrainingLevel) == 4 )
              {
                v9 = (TESTopic *)TESTopic::GEtTopic(5, 0);
                if ( v9 )
                {
                  v10 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
                  dword_B131F8 = 2;
                  DialogueInfo = TESTopic::CreateDialogueInfo(v9, (Actor *)*(this + 0x18), v10, (int)v9, 0);
                  dword_B131F8 = 0xFFFFFFFF;
                  v6 = DialogueInfo == 0;
                }
              }
            }
          }
          v15 = (float)(v6 + 1);
          Tile_SetFloat((Tile *)*(this + 0x14), (_DWORD *)0xFA1, v15);
          if ( !a2 || (v21 = 2, !sub_5E8A20((_DWORD *)*(this + 0x18))) )
            v21 = 1;
          v16 = (float)v21;
          Tile_SetFloat((Tile *)*(this + 0x16), (_DWORD *)0xFA1, v16);
          if ( !a2 || (v22 = 2, !sub_5E8890((_DWORD *)*(this + 0x18))) )
            v22 = 1;
          v17 = (float)v22;
          Tile_SetFloat((Tile *)*(this + 0x15), (_DWORD *)0xFA1, v17);
          if ( !a2
            || (v13 = Actor_GetActorBaseForm((Actor *)*(this + 0x18), 0),
                v23 = 2,
                !TESAIForm_OffersService(&v13[4].member.flags, 0x800)) )
          {
            v23 = 1;
          }
          v18 = (float)v23;
          Tile_SetFloat((Tile *)*(this + 0x17), (_DWORD *)0xFA1, v18);
        }
      }
    }
  }
}
