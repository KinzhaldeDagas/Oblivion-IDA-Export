void __thiscall sub_679C10(ActorProcessManager *this, Actor *a2)
{
  ActorProcessManager *v3; // esi
  int v4; // edi
  int ExtraDataFollower; // eax
  PlayerCharacter *v6; // eax
  LowProcess *process; // ecx
  Actor *v8; // eax
  ActorList *v9; // eax
  Actor *v10; // eax
  Actor *v11; // eax
  Actor *v12; // eax
  Actor *data; // esi
  LowProcess *v14; // edi
  TESPackage *v15; // ebp
  TargetData *target; // ecx
  TargetData *v17; // ecx
  TESPackage *v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  Actor *v21; // eax
  int v22; // eax
  TESPackage *v23; // eax
  void (__thiscall *SetCurrentPackage)(BaseProcess *__hidden, TESPackage *); // eax
  int v25; // eax
  BSExtraData *ExtraData; // eax
  TESPackage *v27; // eax
  float *v28; // eax
  float *v29; // ebp
  LowProcess *v30; // eax
  TESPackage *v31; // eax
  TESPackage *v32; // eax
  LowProcess *v33; // eax
  TESPackage *editorPackage; // eax
  LocationData *location; // eax
  Unk128 *v36; // eax
  float *v37; // eax
  void (__thiscall **p_Unk_F9)(BaseProcess *__hidden); // ebp
  int v39; // eax
  int v40; // [esp+38h] [ebp-1Ch]
  int v41; // [esp+48h] [ebp-Ch]
  TESPackage *v42; // [esp+4Ch] [ebp-8h]
  ActorList *next; // [esp+58h] [ebp+4h]

  v3 = this;
  v4 = 0;
  if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
  {
    if ( GetExtraDataFollower() )
    {
      if ( *(_DWORD *)(GetExtraDataFollower() + 0xC) )
      {
        ExtraDataFollower = GetExtraDataFollower();
        BSSimpleList_Remove(*(int **)(ExtraDataFollower + 0xC), (int)a2);
      }
    }
    v6 = TESDataHandler_g_PlayerRef;
    process = TESDataHandler_g_PlayerRef->super.super.super.process;
    if ( process )
    {
      ((void (__thiscall *)(LowProcess *, Actor *))process->Unk_6E)(process, a2);
      ((void (__thiscall *)(LowProcess *, Actor *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_2C_1_2)(
        TESDataHandler_g_PlayerRef->super.super.super.process,
        a2);
      v6 = TESDataHandler_g_PlayerRef;
    }
    if ( v6->super.super.unk0E4 == a2 )
      v6->super.super.unk0E4 = 0;
  }
  v41 = 0;
  do
  {
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1:
          v10 = sub_673A50(v3, 1);
          v9 = (ActorList *)sub_7616D0((ActorList *)v10);
          break;
        case 2:
          v11 = sub_673A50(v3, 2);
          v9 = (ActorList *)sub_7616D0((ActorList *)v11);
          break;
        case 3:
          v12 = sub_673A50(v3, 3);
          v9 = (ActorList *)sub_7616D0((ActorList *)v12);
          break;
        default:
          v9 = (ActorList *)&v3->unk4C[2];
          break;
      }
    }
    else
    {
      v8 = sub_673A50(v3, 0);
      v9 = (ActorList *)sub_7616D0((ActorList *)v8);
    }
    next = v9;
    if ( v9 )
    {
      while ( v9->head.node.next || v9->head.node.data )
      {
        if ( v9->head.node.data->vtbl->super.super.IsActor((TESObjectREFR *)v9->head.node.data) )
        {
          data = next->head.node.data;
          if ( next->head.node.data )
          {
            v14 = data->members.super.process;
            if ( data->members.unk0E4 == a2 )
            {
              data->members.unk0E4 = 0;
              if ( v14 )
              {
                ((void (__thiscall *)(LowProcess *, _DWORD))v14->Unk_80)(v14, 0);
                v14->SetUnk278To0(v14);
              }
            }
            if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
            {
              sub_5E21D0(data, a2);
              if ( !v14 )
                goto LABEL_103;
              ((void (__thiscall *)(LowProcess *, Actor *))v14->Unk_2C_1_2)(v14, a2);
            }
            if ( v14 )
            {
              v15 = data->members.super.process->GetCurrentPackage(data->members.super.process);
              v42 = (TESPackage *)sub_5E03A0(data);
              if ( v15 )
              {
                if ( sub_5660A0(v15) && v15->members.type != 0xC )
                {
                  target = v15->members.target;
                  if ( target )
                  {
                    if ( (Actor *)sub_569E60(target).form == a2 )
                      TESPackage_SetTarget(v15, 0);
                  }
                  if ( (Actor *)sub_566D00((char **)v15, (int)data) == a2 )
                    TESPackage_SetLocation(v15, 0);
                }
              }
              if ( v42 )
              {
                if ( sub_5660A0(v42) && v42->members.type != 0xC )
                {
                  v17 = v42->members.target;
                  if ( v17 )
                  {
                    if ( (Actor *)sub_569E60(v17).form == a2 )
                      TESPackage_SetTarget(v42, 0);
                  }
                  if ( (Actor *)sub_566D00((char **)v42, (int)data) == a2 )
                    TESPackage_SetLocation(v42, 0);
                }
              }
              if ( v41 < 2 )
              {
                ((void (__thiscall *)(LowProcess *, Actor *))v14->Unk_6E)(v14, a2);
                v18 = data->members.super.process->GetCurrentPackage(data->members.super.process);
                v19 = OblivionDynamicCast(
                        v18,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                        &SpectatorPackage `RTTI Type Descriptor',
                        0);
                if ( v19 )
                {
                  v20 = v19[0xF];
                  if ( v20 )
                  {
                    if ( *(Actor **)(v20 + 4) == a2 )
                      *(_DWORD *)(v20 + 4) = 0;
                  }
                }
                sub_5E2E00(data);
                if ( v21 == a2
                  || ((int (__thiscall *)(LowProcess *))v14->Unk_5C)(v14)
                  && *(_DWORD *)(((int (__thiscall *)(LowProcess *))v14->Unk_5C)(v14) + 0x28)
                  && (v22 = ((int (__thiscall *)(LowProcess *))v14->Unk_5C)(v14),
                      (Actor *)sub_569E60(*(TargetData **)(v22 + 0x28)).form == a2) )
                {
                  if ( sub_5E6B40(data) )
                  {
                    data->vtbl->Unk_C3(data);
                  }
                  else
                  {
                    v23 = sub_5E0380(data);
                    if ( sub_5660A0(v23) )
                    {
                      sub_5EAE70(data, (int)a2, (int)v14, v40);
                    }
                    else
                    {
                      SetCurrentPackage = v14->SetCurrentPackage;
                      v14->editorPackage = 0;
                      SetCurrentPackage(v14, 0);
                    }
                  }
                }
                v25 = ((int (__thiscall *)(Actor *))a2->vtbl->super.super.Unk_48)(a2);
                sub_5E69E0(data, v25);
                if ( v41 < 1 )
                  ((void (__thiscall *)(LowProcess *, Actor *))v14->Unk_12D)(v14, a2);
              }
              v14->Unk_CA(v14, (TESObjectREFR *)a2);
              ExtraData = BaseExtraList_GetExtraData(&data->members.super.super.baseExtraList, kExtraData_Package);
              if ( ExtraData )
              {
                if ( (Actor *)ExtraData[1].members.next == a2 )
                  ExtraData[1].members.next = 0;
              }
              if ( data->members.unk07C == a2 )
                data->members.unk07C = 0;
              if ( sub_5E6CD0((TESObjectREFR *)data, 0) )
              {
                v27 = sub_5E0380(data);
                if ( v27 )
                {
                  if ( v27->members.type == 0x10 && (Actor *)v27[1].members.location == a2 )
                    v27[1].members.location = 0;
                }
                sub_5EFF30(data, (int)a2, (int)data, (int)a2);
              }
              if ( data->vtbl->IsInCombat(data, 1) )
              {
                v28 = (float *)data->vtbl->GetCombatController(data);
                v29 = v28;
                if ( v28 )
                {
                  sub_6162D0(v28, (TESObjectREFR *)a2);
                  sub_615010(v29, a2);
                }
              }
              sub_424D00(&data->members.super.super.baseExtraList, (int)a2);
              if ( (Actor *)v14->GetUnk02C(v14) == a2 )
                v14->SetUnk02C(v14, 0);
              if ( (Actor *)sub_5EAE10((TESObjectREFR *)data) == a2 )
                sub_5E03C0(data, 0);
              if ( (Actor *)data->vtbl->GetMountedHorse(data) == a2 )
                ((void (__thiscall *)(Actor *, _DWORD))data->vtbl->Unk_E1)(data, 0);
              if ( data->members.super.process )
              {
                if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
                {
                  if ( (MagicTarget *)((int (__thiscall *)(LowProcess *))data->members.super.process->Unk_AB)(data->members.super.process) == &a2->members.magicTarget )
                    ((void (__thiscall *)(LowProcess *, _DWORD))data->members.super.process->Unk_AC)(
                      data->members.super.process,
                      0);
                  if ( !data->members.super.process->GetProcessLevel(data->members.super.process) )
                  {
                    v30 = data->members.super.process;
                    if ( (Actor *)v30[4].curPackedDate == a2 )
                      v30[4].curPackedDate = 0;
                  }
                }
              }
              if ( data->members.super.process->GetCurrentPackage(data->members.super.process) )
              {
                if ( data->members.super.process->GetCurrentPackage(data->members.super.process)->members.location )
                {
                  v31 = data->members.super.process->GetCurrentPackage(data->members.super.process);
                  if ( (Actor *)sub_5697E0(&v31->members.location->locationType) == a2 )
                  {
                    v32 = sub_5E0380(data);
                    TESPackage_LocationData_SetReference(&v32->members.location->locationType, 0);
                  }
                }
              }
              v33 = data->members.super.process;
              if ( v33 )
              {
                editorPackage = v33->editorPackage;
                if ( editorPackage )
                {
                  location = editorPackage->members.location;
                  if ( location )
                  {
                    if ( (Actor *)sub_5697E0(location) == a2 )
                      TESPackage_LocationData_SetReference(
                        &data->members.super.process->editorPackage->members.location->locationType,
                        0);
                  }
                }
              }
              if ( (Actor *)v14->GetFurniture(v14) == a2 )
              {
                v36 = (Unk128 *)((int (__thiscall *)(LowProcess *))v14->GetUnk128)(v14);
                sub_6FAEE0(v36, 0.0);
                *(_BYTE *)(((int (__thiscall *)(LowProcess *))v14->GetUnk128)(v14) + 0xE) = 0;
                v37 = (float *)((int (__thiscall *)(LowProcess *))v14->GetUnk128)(v14);
                *v37 = Vector3_InitValue_;
                v37[1] = *(&Vector3_InitValue_ + 1);
                v37[2] = dword_B3F9B0;
                p_Unk_F9 = &v14->Unk_F9;
                v39 = ((int (__thiscall *)(LowProcess *))data->members.super.process->GetUnk128)(data->members.super.process);
                ((void (__thiscall *)(LowProcess *, _DWORD, int, int))*p_Unk_F9)(v14, 0, 0x7F, v39);
              }
            }
          }
        }
LABEL_103:
        v3 = this;
        v4 = v41;
        next = (ActorList *)next->head.node.next;
        if ( !next )
          break;
        v9 = next;
      }
    }
    v41 = ++v4;
  }
  while ( v4 < 5 );
  BSSimpleList_Remove((int *)&v3->highActors, (int)a2);
}
