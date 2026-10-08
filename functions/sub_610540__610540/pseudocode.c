// RadiantAI: final pickpocket crime side-effect path. Builds crime type 1 record and notifies witnesses/dialogue/combat processing.
void __userpurge sub_610540(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        Actor *a5,
        int a6,
        int a7)
{
  Actor *v8; // ebp
  _DWORD *v9; // eax
  Crime *v10; // edi
  TESObjectREFR *target; // ecx
  int v12; // eax
  char v13; // al
  char v14; // al
  TESObjectREFR *v15; // ebx
  char *v16; // eax
  char *v17; // ecx
  TESForm *v18; // eax
  void *v19; // eax
  signed int v20; // eax
  TESTopic *Topic; // eax
  TESTopic *v22; // ebx
  PlayerCharacter *criminal; // edi
  TESForm *ActorBaseForm; // eax
  char *v25; // [esp+4h] [ebp-15Ch]
  char *Name; // [esp+8h] [ebp-158h]
  bool v27; // [esp+Ch] [ebp-154h]
  bool useBase; // [esp+20h] [ebp-140h]
  float useBasea; // [esp+20h] [ebp-140h]
  char v30[300]; // [esp+24h] [ebp-13Ch] BYREF
  unsigned int v31; // [esp+15Ch] [ebp-4h]

  v8 = (Actor *)OblivionDynamicCast( /*0x61059f*/
                  a5,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( (Actor_IsGuardClass(v8) /*0x610612*/
     || (Actor::GetRaceIfNPC(v8)->isPlayable & 1) != 0
     && !v8->vtbl->IsTresspassing(v8)
     && Actor_IsNPC(v8)
     && (Actor::GetRaceIfNPC(v8)->isPlayable & 1) != 0)
    && (a1 == (TESObjectREFR *)reference
     || ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 0x1F) != 0x64
     || !Actor_IsSneaking(a1)) )
  {
    v9 = (_DWORD *)FormHeapAlloc(0x30u); /*0x610621*/
    v31 = 0; /*0x61062f*/
    if ( v9 ) /*0x61063a*/
      v10 = (Crime *)sub_6070B0(v9, 1u, (int)a5, (int)a1, a6, a7, 0); /*0x610652*/
    else
      v10 = 0; /*0x610656*/
    target = v10->target; /*0x610658*/
    v31 = 0xFFFFFFFF; /*0x61065d*/
    useBase = 0; /*0x610668*/
    if ( a5 == (Actor *)target || TESObjectREFR_GetOwner(target) == (TESForm *)a5 ) /*0x610676*/
      useBase = 1; /*0x610678*/
    v12 = (int)a5->members.super.process->GetDetectionState(a5->members.super.process, v10->criminal); /*0x61068c*/
    if ( v12 ) /*0x610690*/
      *(_DWORD *)(v12 + 4) = 3; /*0x6106a4*/
    else
      ((void (__thiscall *)(LowProcess *, Actor *, int))a5->members.super.process->Unk_EC)( /*0x6106a0*/
        a5->members.super.process,
        a5,
        3);
    sub_4DB760(a1); /*0x6106ad*/
    if ( !v13 || (sub_4DB760((TESObjectREFR *)a5), v14) ) /*0x6106bf*/
    {
      useBasea = (float)Crime_GetDispositionPenalty(v10, a5, useBase); /*0x61072f*/
      ((void (__thiscall *)(Actor *, Actor *, _DWORD))a5->vtbl->Unk_DD)(a5, v10->criminal, LODWORD(useBasea)); /*0x61073d*/
      v18 = a5->vtbl->super.super.GetBaseForm(a5); /*0x610757*/
      v19 = OblivionDynamicCast( /*0x61075a*/
              v18,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
      if ( a1 == (TESObjectREFR *)reference ) /*0x610768*/
      {
        if ( v19 ) /*0x61076c*/
          TESActorBaseData_SetSharedPlayerFactionFlags(2); /*0x610773*/
      }
      v20 = ((int (__thiscall *)(Actor *, Actor *))a5->vtbl->GetDisposition)(a5, v10->criminal); /*0x610787*/
      if ( sub_605E20(v20, (int)a5) ) /*0x61078c*/
      {
        v8->members.super.process->Unk_2C(v8->members.super.process, 1); /*0x6107a2*/
        if ( !sub_5E8A90(a1) ) /*0x6107a6*/
        {
          unk_B361C4 = (int)v8->vtbl->super.super.GetBaseForm((TESObjectREFR *)v8); /*0x6107bf*/
          Crime_AddWitness(v10, (Actor *)a1); /*0x6107c4*/
          a5->members.unk0E4 = v10->criminal; /*0x6107d0*/
          Topic = TESTopic::GetTopic(DialogueType_Combat, 7); /*0x6107d6*/
          a5->members.super.process->SayTopic(a5->members.super.process, a5, Topic, 0, 0, 1); /*0x6107f1*/
          unk_B361C4 = 0; /*0x6107f3*/
        }
        ((void (__thiscall *)(Actor *, Crime *, _DWORD, int, _DWORD))a5->vtbl->ManageAlarm)(a5, v10, 0, 1, 0); /*0x61080e*/
      }
      else
      {
        unk_B361C4 = (int)v8->vtbl->super.super.GetBaseForm((TESObjectREFR *)v8); /*0x61081f*/
        a5->members.unk0E4 = v10->criminal; /*0x61082b*/
        v22 = TESTopic::GetTopic(DialogueType_Combat, 0xD); /*0x610836*/
        if ( v10->criminal && sub_5EA050((TESObjectREFR *)a5, (TESObjectREFR *)v10->criminal, v27) ) /*0x610845*/
          ((void (__thiscall *)(Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, int))a5->vtbl->Unk_CB)( /*0x610866*/
            a5,
            v10->criminal,
            0,
            0,
            0,
            0,
            1);
        else
          a5->members.super.process->SayTopic(a5->members.super.process, a5, v22, 0, 0, 1); /*0x61087d*/
        unk_B361C4 = 0; /*0x61087f*/
      }
    }
    else
    {
      v15 = v10->target; /*0x6106c1*/
      Name = TESObjectREFR_GetName((TESObjectREFR *)a5); /*0x6106cb*/
      v25 = TESObjectREFR_GetName(v15); /*0x6106d9*/
      v16 = TESObjectREFR_GetName((TESObjectREFR *)reference); /*0x6106da*/
      _sprintf(v30, "%s  tried to pickpocket %s and %s did not care", v16, v25, Name); /*0x6106ea*/
      ShowUIMessageBox(v17, a2, a3, a4, v30, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x610701*/
    }
    if ( Crime_GetWitnessCount(v10) ) /*0x61088b*/
    {
      ActorProcessManager_AddCrime((ActorProcessManager *)&qword_B3BB2C[0x75], v10); /*0x6108ac*/
      criminal = (PlayerCharacter *)v10->criminal; /*0x6108b1*/
      ActorBaseForm = Actor_GetActorBaseForm(a5, 1); /*0x6108b8*/
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x6108c3*/
        ActorBaseForm = Actor_GetActorBaseForm(a5, 0); /*0x6108cd*/
      OblivionDynamicCast( /*0x6108e1*/
        ActorBaseForm,
        0,
        (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
        &TESNPC `RTTI Type Descriptor',
        0);
      if ( criminal == reference ) /*0x6108ef*/
        TESActorBaseData_SetSharedPlayerFactionFlags(2); /*0x6108f6*/
    }
    else
    {
      Crime_Destructor(v10); /*0x610896*/
      FormHeapFree((unsigned int)v10); /*0x61089c*/
    }
  }
}
