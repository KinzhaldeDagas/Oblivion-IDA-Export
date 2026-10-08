// RadiantAI: murder crime side-effect path. Builds crime type 4 record and witness response.
void __userpurge sub_610EB0(
        TESObjectREFR *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  TESObjectREFR *v5; // esi
  PlayerCharacter *v7; // edi
  _DWORD *v8; // eax
  Crime *v9; // edi
  EntryData *v10; // ebx
  TESClass *BaseClass; // eax
  TESForm *ActorBaseForm; // esi
  char *v13; // esi
  TESForm *extendData; // esi
  TESObjectREFR *target; // ecx
  char v16; // al
  char v17; // al
  signed int v18; // eax
  char v19; // al
  TESTopic *v20; // eax
  TESTopic *Topic; // ebx
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // [esp+Ch] [ebp-29Ch]
  char *Name; // [esp+10h] [ebp-298h]
  char *v27; // [esp+10h] [ebp-298h]
  char *v28; // [esp+10h] [ebp-298h]
  bool v29; // [esp+14h] [ebp-294h]
  float useBasea; // [esp+28h] [ebp-280h]
  float useBaseb; // [esp+28h] [ebp-280h]
  bool useBase; // [esp+28h] [ebp-280h]
  EntryData *countDelta; // [esp+2Ch] [ebp-27Ch]
  float DispositionPenalty; // [esp+30h] [ebp-278h]
  EntryData *v35; // [esp+34h] [ebp-274h]
  TESObjectREFR *v36; // [esp+3Ch] [ebp-26Ch]
  char Format[300]; // [esp+40h] [ebp-268h] BYREF
  char v38[300]; // [esp+16Ch] [ebp-13Ch] BYREF
  unsigned int v39; // [esp+2A4h] [ebp-4h]

  v5 = a5; /*0x610eeb*/
  v7 = (PlayerCharacter *)OblivionDynamicCast( /*0x610f0c*/
                            a5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  v36 = (TESObjectREFR *)v7; /*0x610f13*/
  if ( ((Actor::GetRaceIfNPC((Actor *)this)->isPlayable & 1) != 0 || Actor_IsGuardClass((Actor *)this)) /*0x610fd3*/
    && (PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0)
     || v7 != reference
     || !PlayerCharacter::IsJailed(reference))
    && !v7->vtbl->super.IsTresspassing((Actor *)v7)
    && Actor_IsNPC((Actor *)v7)
    && (Actor::GetRaceIfNPC((Actor *)v7)->isPlayable & 1) != 0
    && !Actor_IsGuardClass((Actor *)v7)
    && (!sub_5E8A90(this) || !sub_5E8A90(v7))
    && (v7 == reference || v7->vtbl->super.GetActorValue((Actor *)v7, kActorVal_Sneak) != 0x64 || !Actor_IsSneaking(v7)) )
  {
    v8 = (_DWORD *)FormHeapAlloc(0x30u); /*0x610fe2*/
    v39 = 0; /*0x610ff0*/
    if ( v8 ) /*0x610ffb*/
      v9 = (Crime *)sub_6070B0(v8, 4u, (int)this, (int)a5, 0, 0, 0); /*0x61100e*/
    else
      v9 = 0; /*0x611012*/
    v39 = 0xFFFFFFFF; /*0x61101a*/
    v10 = sub_67A290((int)&qword_B3BB2C[0x75], a2, a3, a4, (int)v9); /*0x61102c*/
    countDelta = v10; /*0x61102e*/
    v35 = v10; /*0x611032*/
    if ( v9 ) /*0x611036*/
    {
      if ( Actor::HasNPCBaseForm(v9->criminal) && !v9->flag11 ) /*0x61104c*/
      {
        if ( ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x24) >= 0x64 /*0x611073*/
          || (BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)this), TESClass::IsGuardClass(BaseClass)) )
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 1); /*0x611085*/
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) ) /*0x61108a*/
            ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 0); /*0x61109c*/
          v13 = (char *)OblivionDynamicCast( /*0x6110b7*/
                          ActorBaseForm,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          useBasea = Crime_GetGoldValue(v9); /*0x6110be*/
          useBaseb = sub_5234A0(v13) * useBasea; /*0x6110d8*/
          a4 = useBaseb; /*0x6110dc*/
          ((void (__stdcall *)(_DWORD))v9->criminal->vtbl->Unk_95)(LODWORD(useBaseb)); /*0x6110e4*/
          v5 = a5; /*0x6110e6*/
          v9->flag11 = 1; /*0x6110ea*/
        }
      }
    }
    if ( v10 ) /*0x6110f0*/
    {
      do /*0x6112c2*/
      {
        extendData = (TESForm *)v10->extendData; /*0x6110f6*/
        if ( !v10->extendData ) /*0x6110f6*/
          break; /*0x6110fa*/
        target = v9->target; /*0x611100*/
        useBase = 0; /*0x611105*/
        if ( extendData == (TESForm *)target || TESObjectREFR_GetOwner(target) == extendData ) /*0x611113*/
          useBase = 1; /*0x611115*/
        sub_4DB760(this); /*0x61111c*/
        if ( v16 ) /*0x611123*/
        {
          sub_4DB760((TESObjectREFR *)extendData); /*0x611127*/
          if ( !v17 ) /*0x61112e*/
            continue; /*0x61112e*/
        }
        DispositionPenalty = (float)Crime_GetDispositionPenalty(v9, (Actor *)extendData, useBase); /*0x611157*/
        ((void (__usercall *)(TESForm *@<ecx>, Actor *, _DWORD, double@<st0>, double@<st1>))extendData->vtbl[4].super.ClearComponentReferences)( /*0x611163*/
          extendData,
          v9->criminal,
          LODWORD(DispositionPenalty),
          a4,
          a3);
        if ( ((unsigned __int8 (__thiscall *)(TESForm *, _DWORD))extendData->vtbl[1].Unk_2F)(extendData, 0) /*0x61118f*/
          || (v18 = ((int (__thiscall *)(TESForm *, Actor *))extendData->vtbl[2].DoPostFixup)(extendData, v9->criminal),
              !sub_605E20(v18, (int)extendData)) )
        {
          unk_B361C4 = (int)this->vtbl->GetBaseForm(this); /*0x611213*/
          extendData[9].member.refID = (UInt32)v9->criminal; /*0x61121f*/
          Topic = TESTopic::GetTopic(DialogueType_Combat, 0xC); /*0x61122a*/
          if ( v9->criminal && sub_5EA050((TESObjectREFR *)extendData, (TESObjectREFR *)v9->criminal, v29) ) /*0x611239*/
            ((void (__thiscall *)(TESForm *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, int))extendData->vtbl[3].Unk_26)( /*0x61125a*/
              extendData,
              v9->criminal,
              0,
              0,
              0,
              0,
              1);
          else
            (*(void (__thiscall **)(Data *, TESForm *, TESTopic *, _DWORD, _DWORD, int))(extendData[3].member.modlist.data->errorState /*0x611271*/
                                                                                       + 0x1A4))(
              extendData[3].member.modlist.data,
              extendData,
              Topic,
              0,
              0,
              1);
          v10 = countDelta; /*0x611273*/
          unk_B361C4 = 0; /*0x611277*/
        }
        else
        {
          sub_4DB760(this); /*0x61119a*/
          if ( !v19 ) /*0x6111a1*/
          {
            unk_B361C4 = (int)this->vtbl->GetBaseForm(this); /*0x6111b0*/
            extendData[9].member.refID = (UInt32)v9->criminal; /*0x6111bc*/
            v20 = TESTopic::GetTopic(DialogueType_Combat, 9); /*0x6111c2*/
            (*(void (__thiscall **)(Data *, TESForm *, TESTopic *, _DWORD, _DWORD, int))(extendData[3].member.modlist.data->errorState /*0x6111dd*/
                                                                                       + 0x1A4))(
              extendData[3].member.modlist.data,
              extendData,
              v20,
              0,
              0,
              1);
            Crime_AddWitness(v9, (Actor *)this); /*0x6111e2*/
            unk_B361C4 = 0; /*0x6111e7*/
          }
          ((void (__thiscall *)(TESForm *, Crime *, _DWORD, int, _DWORD))extendData->vtbl[3].Unk_1F)( /*0x611202*/
            extendData,
            v9,
            0,
            1,
            0);
        }
        Name = TESObjectREFR_GetName((TESObjectREFR *)extendData); /*0x611288*/
        v25 = TESObjectREFR_GetName(this); /*0x611294*/
        v22 = TESObjectREFR_GetName(v36); /*0x611295*/
        _sprintf(Format, "%s been Murdered by %s and sent to  %s ", v22, v25, Name); /*0x6112a5*/
        sub_40FEC0(Format); /*0x6112af*/
        countDelta = (EntryData *)v10->countDelta; /*0x6112bc*/
        v10 = countDelta; /*0x6112c0*/
      }
      while ( countDelta ); /*0x6112c2*/
      BSSimpleList_Clear(v35); /*0x6112ce*/
      FormHeapFree((unsigned int)v35); /*0x6112d4*/
      if ( Crime_GetWitnessCount(v9) ) /*0x6112de*/
      {
        ActorProcessManager_AddCrime((ActorProcessManager *)&qword_B3BB2C[0x75], v9); /*0x611329*/
      }
      else
      {
        if ( v9 ) /*0x6112e9*/
        {
          Crime_Destructor(v9); /*0x6112ed*/
          FormHeapFree((unsigned int)v9); /*0x6112f3*/
        }
        v27 = TESObjectREFR_GetName(a5); /*0x611304*/
        v23 = TESObjectREFR_GetName(this); /*0x611307*/
        _sprintf(Format, "%s  murdering %s no one cared", v23, v27); /*0x611317*/
        Interface_ConsolePrint(Format); /*0x611321*/
      }
    }
    else
    {
      if ( v9 ) /*0x611332*/
      {
        Crime_Destructor(v9); /*0x611336*/
        FormHeapFree((unsigned int)v9); /*0x61133c*/
      }
      v28 = TESObjectREFR_GetName(v5); /*0x61134b*/
      v24 = TESObjectREFR_GetName(this); /*0x61134e*/
      _sprintf(v38, "%s got away with murdering %s", v24, v28); /*0x611361*/
      Interface_ConsolePrint(v38); /*0x61136e*/
    }
    FormHeapFree((unsigned int)v10); /*0x611377*/
  }
}
