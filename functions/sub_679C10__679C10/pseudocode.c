void __thiscall sub_679C10(ActorProcessManager *this, Actor *a2)
{
  ActorProcessManager *v3; // esi
  int v4; // edi
  int ExtraDataFollower; // eax
  PlayerCharacter *v6; // eax
  LowProcess *process; // ecx
  Actor *v8; // eax
  ActorList *v9; // eax
  Actor *ListHead; // eax
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

  v3 = this; /*0x679c22*/
  v4 = 0; /*0x679c2d*/
  if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) ) /*0x679c2b*/
  {
    if ( ExtraDataList_GetFollowerExtra() ) /*0x679c3c*/
    {
      if ( *(_DWORD *)(ExtraDataList_GetFollowerExtra() + 0xC) ) /*0x679c53*/
      {
        ExtraDataFollower = ExtraDataList_GetFollowerExtra(); /*0x679c62*/
        BSSimpleList_Remove(*(int **)(ExtraDataFollower + 0xC), (int)a2); /*0x679c6a*/
      }
    }
    v6 = reference; /*0x679c6f*/
    process = reference->super.super.super.process; /*0x679c74*/
    if ( process ) /*0x679c79*/
    {
      ((void (__thiscall *)(LowProcess *, Actor *))process->Unk_6E)(process, a2); /*0x679c84*/
      ((void (__thiscall *)(LowProcess *, Actor *))reference->super.super.super.process->Unk_2C_1_2)( /*0x679c97*/
        reference->super.super.super.process,
        a2);
      v6 = reference; /*0x679c99*/
    }
    if ( v6->super.super.unk0E4 == a2 ) /*0x679ca4*/
      v6->super.super.unk0E4 = 0; /*0x679ca6*/
  }
  v41 = 0; /*0x679cac*/
  do /*0x67a1cb*/
  {
    if ( v4 ) /*0x679cb2*/
    {
      switch ( v4 ) /*0x679cc8*/
      {
        case 1: /*0x679cc8*/
          ListHead = ActorProcessManager_GetListHead(v3, 1); /*0x679ccd*/
          v9 = (ActorList *)ActorList_ReturnHead((ActorList *)ListHead); /*0x679cd4*/
          break;
        case 2: /*0x679cc8*/
          v11 = ActorProcessManager_GetListHead(v3, 2); /*0x679ce3*/
          v9 = (ActorList *)ActorList_ReturnHead((ActorList *)v11); /*0x679cea*/
          break;
        case 3: /*0x679cc8*/
          v12 = ActorProcessManager_GetListHead(v3, 3); /*0x679cf9*/
          v9 = (ActorList *)ActorList_ReturnHead((ActorList *)v12); /*0x679d00*/
          break;
        default:
          v9 = (ActorList *)&v3->unk50[2]; /*0x679d07*/
          break;
      }
    }
    else
    {
      v8 = ActorProcessManager_GetListHead(v3, 0); /*0x679cb7*/
      v9 = (ActorList *)ActorList_ReturnHead((ActorList *)v8); /*0x679cbe*/
    }
    next = v9; /*0x679d0c*/
    if ( v9 ) /*0x679d10*/
    {
      while ( v9->head.node.next || v9->head.node.data ) /*0x679d24*/
      {
        if ( v9->head.node.data->vtbl->super.super.IsActor((TESObjectREFR *)v9->head.node.data) ) /*0x679d3f*/
        {
          data = next->head.node.data; /*0x679d4d*/
          if ( next->head.node.data ) /*0x679d4d*/
          {
            v14 = data->members.super.process; /*0x679d5d*/
            if ( data->members.unk0E4 == a2 ) /*0x679d60*/
            {
              data->members.unk0E4 = 0; /*0x679d64*/
              if ( v14 ) /*0x679d6e*/
              {
                ((void (__thiscall *)(LowProcess *, _DWORD))v14->Unk_80)(v14, 0); /*0x679d7c*/
                v14->SetUnk278To0(v14); /*0x679d88*/
              }
            }
            if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) ) /*0x679d94*/
            {
              sub_5E21D0(data, a2); /*0x679d9d*/
              if ( !v14 ) /*0x679da4*/
                goto LABEL_103; /*0x679da4*/
              ((void (__thiscall *)(LowProcess *, Actor *))v14->Unk_2C_1_2)(v14, a2); /*0x679db5*/
            }
            if ( v14 ) /*0x679db9*/
            {
              v15 = data->members.super.process->GetCurrentPackage(data->members.super.process); /*0x679dce*/
              v42 = (TESPackage *)sub_5E03A0(data); /*0x679dd7*/
              if ( v15 ) /*0x679ddb*/
              {
                if ( TESPackage_IsRuntimePackage(v15) && v15->members.type != 0xC ) /*0x679dec*/
                {
                  target = v15->members.target; /*0x679dee*/
                  if ( target ) /*0x679df3*/
                  {
                    if ( (Actor *)sub_569E60(target).form == a2 ) /*0x679dfc*/
                      TESPackage_SetTarget(v15, 0); /*0x679e02*/
                  }
                  if ( (Actor *)sub_566D00((char **)v15, (int)data) == a2 ) /*0x679e11*/
                    TESPackage_SetLocation(v15, 0); /*0x679e17*/
                }
              }
              if ( v42 ) /*0x679e21*/
              {
                if ( TESPackage_IsRuntimePackage(v42) && v42->members.type != 0xC ) /*0x679e36*/
                {
                  v17 = v42->members.target; /*0x679e38*/
                  if ( v17 ) /*0x679e3d*/
                  {
                    if ( (Actor *)sub_569E60(v17).form == a2 ) /*0x679e46*/
                      TESPackage_SetTarget(v42, 0); /*0x679e4c*/
                  }
                  if ( (Actor *)sub_566D00((char **)v42, (int)data) == a2 ) /*0x679e5b*/
                    TESPackage_SetLocation(v42, 0); /*0x679e61*/
                }
              }
              if ( v41 < 2 ) /*0x679e6d*/
              {
                ((void (__thiscall *)(LowProcess *, Actor *))v14->Unk_6E)(v14, a2); /*0x679e7e*/
                v18 = data->members.super.process->GetCurrentPackage(data->members.super.process); /*0x679e99*/
                v19 = OblivionDynamicCast( /*0x679e9c*/
                        v18,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                        &SpectatorPackage `RTTI Type Descriptor',
                        0);
                if ( v19 ) /*0x679ea6*/
                {
                  v20 = v19[0xF]; /*0x679ea8*/
                  if ( v20 ) /*0x679ead*/
                  {
                    if ( *(Actor **)(v20 + 4) == a2 ) /*0x679eb2*/
                      *(_DWORD *)(v20 + 4) = 0; /*0x679eb4*/
                  }
                }
                sub_5E2E00(data); /*0x679ebd*/
                if ( v21 == a2 /*0x679efe*/
                  || ((int (__thiscall *)(LowProcess *))v14->Unk_5C)(v14)
                  && *(_DWORD *)(((int (__thiscall *)(LowProcess *))v14->Unk_5C)(v14) + 0x28)
                  && (v22 = ((int (__thiscall *)(LowProcess *))v14->Unk_5C)(v14),
                      (Actor *)sub_569E60(*(TargetData **)(v22 + 0x28)).form == a2) )
                {
                  if ( Actor_IsInDialogueProcedure(data) ) /*0x679f02*/
                  {
                    data->vtbl->CleanupCurrentPackage(data); /*0x679f15*/
                  }
                  else
                  {
                    v23 = Actor::GetCurrentPackage(data); /*0x679f19*/
                    if ( TESPackage_IsRuntimePackage(v23) ) /*0x679f20*/
                    {
                      sub_5EAE70(data, (int)a2, (int)v14, v40); /*0x679f2b*/
                    }
                    else
                    {
                      SetCurrentPackage = v14->SetCurrentPackage; /*0x679f34*/
                      v14->editorPackage = 0; /*0x679f3e*/
                      SetCurrentPackage(v14, 0); /*0x679f45*/
                    }
                  }
                }
                v25 = ((int (__thiscall *)(Actor *))a2->vtbl->super.super.Unk_48)(a2); /*0x679f51*/
                sub_5E69E0(data, v25); /*0x679f56*/
                if ( v41 < 1 ) /*0x679f5e*/
                  ((void (__thiscall *)(LowProcess *, Actor *))v14->Unk_12D)(v14, a2); /*0x679f6b*/
              }
              v14->Unk_CA(v14, (TESObjectREFR *)a2); /*0x679f78*/
              ExtraData = BaseExtraList_GetExtraData(&data->members.super.super.baseExtraList, kExtraData_Package); /*0x679f7f*/
              if ( ExtraData ) /*0x679f88*/
              {
                if ( (Actor *)ExtraData[1].members.next == a2 ) /*0x679f8d*/
                  ExtraData[1].members.next = 0; /*0x679f8f*/
              }
              if ( data->members.unk07C == a2 ) /*0x679f95*/
                data->members.unk07C = 0; /*0x679f97*/
              if ( sub_5E6CD0((TESObjectREFR *)data, 0) ) /*0x679f9d*/
              {
                v27 = Actor::GetCurrentPackage(data); /*0x679fa8*/
                if ( v27 ) /*0x679faf*/
                {
                  if ( v27->members.type == 0x10 && (Actor *)v27[1].members.location == a2 ) /*0x679fba*/
                    v27[1].members.location = 0; /*0x679fbc*/
                }
                sub_5EFF30(data, (int)a2, (int)data, (int)a2); /*0x679fc2*/
              }
              if ( data->vtbl->IsInCombat(data, 1) ) /*0x679fd3*/
              {
                v28 = (float *)data->vtbl->GetCombatController(data); /*0x679fe3*/
                v29 = v28; /*0x679fe5*/
                if ( v28 ) /*0x679fe9*/
                {
                  CombatController_RemoveTarget(v28, (TESObjectREFR *)a2); /*0x679fee*/
                  sub_615010(v29, a2); /*0x679ff6*/
                }
              }
              sub_424D00(&data->members.super.super.baseExtraList, (int)a2); /*0x67a001*/
              if ( (Actor *)v14->GetUnk02C(v14) == a2 ) /*0x67a014*/
                v14->SetUnk02C(v14, 0); /*0x67a021*/
              if ( (Actor *)sub_5EAE10((TESObjectREFR *)data) == a2 ) /*0x67a02c*/
                sub_5E03C0(data, 0); /*0x67a031*/
              if ( (Actor *)data->vtbl->GetMountedHorse(data) == a2 ) /*0x67a044*/
                ((void (__thiscall *)(Actor *, _DWORD))data->vtbl->Unk_E1)(data, 0); /*0x67a051*/
              if ( data->members.super.process ) /*0x67a053*/
              {
                if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) ) /*0x67a062*/
                {
                  if ( (MagicTarget *)((int (__thiscall *)(LowProcess *))data->members.super.process->Unk_AB)(data->members.super.process) == &a2->members.magicTarget ) /*0x67a07a*/
                    ((void (__thiscall *)(LowProcess *, _DWORD))data->members.super.process->Unk_AC)( /*0x67a088*/
                      data->members.super.process,
                      0);
                  if ( !data->members.super.process->GetProcessLevel(data->members.super.process) ) /*0x67a092*/
                  {
                    v30 = data->members.super.process; /*0x67a098*/
                    if ( (Actor *)v30[4].curPackedDate == a2 ) /*0x67a0a1*/
                      v30[4].curPackedDate = 0; /*0x67a0a3*/
                  }
                }
              }
              if ( data->members.super.process->GetCurrentPackage(data->members.super.process) ) /*0x67a0b4*/
              {
                if ( data->members.super.process->GetCurrentPackage(data->members.super.process)->members.location ) /*0x67a0c7*/
                {
                  v31 = data->members.super.process->GetCurrentPackage(data->members.super.process); /*0x67a0d7*/
                  if ( (Actor *)sub_5697E0(&v31->members.location->locationType) == a2 ) /*0x67a0e3*/
                  {
                    v32 = Actor::GetCurrentPackage(data); /*0x67a0e7*/
                    TESPackage_LocationData_SetReference(&v32->members.location->locationType, 0); /*0x67a0f0*/
                  }
                }
              }
              v33 = data->members.super.process; /*0x67a0f5*/
              if ( v33 ) /*0x67a0fa*/
              {
                editorPackage = v33->editorPackage; /*0x67a0fc*/
                if ( editorPackage ) /*0x67a101*/
                {
                  location = editorPackage->members.location; /*0x67a103*/
                  if ( location ) /*0x67a108*/
                  {
                    if ( (Actor *)sub_5697E0(location) == a2 ) /*0x67a113*/
                      TESPackage_LocationData_SetReference( /*0x67a11f*/
                        &data->members.super.process->editorPackage->members.location->locationType,
                        0);
                  }
                }
              }
              if ( (Actor *)v14->GetFurniture(v14) == a2 ) /*0x67a132*/
              {
                v36 = (Unk128 *)((int (__thiscall *)(LowProcess *))v14->GetUnk128)(v14); /*0x67a144*/
                sub_6FAEE0(v36, 0.0); /*0x67a148*/
                *(_BYTE *)(((int (__thiscall *)(LowProcess *))v14->GetUnk128)(v14) + 0xE) = 0; /*0x67a159*/
                v37 = (float *)((int (__thiscall *)(LowProcess *))v14->GetUnk128)(v14); /*0x67a167*/
                *v37 = g_zeroNiPoint3; /*0x67a16f*/
                v37[1] = MEMORY[0xB3F9AC]; /*0x67a177*/
                v37[2] = MEMORY[0xB3F9B0][0]; /*0x67a180*/
                p_Unk_F9 = &v14->Unk_F9; /*0x67a192*/
                v39 = ((int (__thiscall *)(LowProcess *))data->members.super.process->GetUnk128)(data->members.super.process); /*0x67a198*/
                ((void (__thiscall *)(LowProcess *, _DWORD, int, int))*p_Unk_F9)(v14, 0, 0x7F, v39); /*0x67a1a4*/
              }
            }
          }
        }
LABEL_103:
        v3 = this; /*0x67a1a6*/
        v4 = v41; /*0x67a1b3*/
        next = (ActorList *)next->head.node.next; /*0x67a1b7*/
        if ( !next ) /*0x67a1bb*/
          break; /*0x67a1bb*/
        v9 = next; /*0x679d20*/
      }
    }
    v41 = ++v4; /*0x67a1c7*/
  }
  while ( v4 < 5 ); /*0x67a1cb*/
  BSSimpleList_Remove((int *)&v3->highActors, (int)a2); /*0x67a1d5*/
}
