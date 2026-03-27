void __thiscall sub_64DF40(MiddleHighProcess *This, TESObjectREFR *a6, TESObjectCELL *a1)
{
  TESPackage *(*GetCurrentPackage)(void); // edx
  TESPackage *v5; // eax
  TESPackage *v6; // ebx
  int type; // eax
  TargetData *target; // edi
  ObjectType v9; // eax
  MiddleHighProcess_vtbl *v10; // ebx
  ObjectType v11; // eax
  Actor *follow; // ecx
  Actor *v13; // eax
  MiddleHighProcess_vtbl *v14; // edi
  BSExtraDataVtbl *ReferencePointer; // eax
  int *v16; // eax
  TargetData *v17; // ebx
  int TargetType; // ebp
  int *SafeFloatPointer; // ebx
  int *v20; // ebp
  float *v21; // eax
  UInt32 *p_unk03C; // edi
  UInt32 v23; // eax
  bool v24; // zf
  TESObjectREFR *v25; // eax
  TESObjectREFR **unk044; // eax
  BSExtraDataVtbl *Owner; // eax
  void *v28; // eax
  MiddleHighProcess_vtbl *v29; // ebx
  TESObjectREFR *v30; // eax
  Actor *v31; // ecx
  float *v32; // eax
  Actor *v33; // ecx
  float a5; // [esp+Ch] [ebp-28h]
  Atmosphere *v35; // [esp+28h] [ebp-Ch]
  int a2[2]; // [esp+2Ch] [ebp-8h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  GetCurrentPackage = (TESPackage *(*)(void))This->GetCurrentPackage;
  This->follow = 0;
  v5 = GetCurrentPackage();
  v6 = v5;
  if ( v5 )
  {
    type = (char)v5->members.type;
    if ( type > 0 && (type <= 2 || type == 7) && sub_567CA0((TargetData **)v6) )
    {
      sub_568BB0((int)v6, a6);
    }
    else
    {
      target = v6->members.target;
      if ( target )
      {
        if ( TargetData::GetTargetType(target) )
        {
          if ( !This->unk040 && !This->unk03C )
          {
            if ( This->currentPackage || (v6->members.packageFlags & 4) == 0 )
            {
              ((void (__thiscall *)(MiddleHighProcess *, TESObjectREFR *, int))This->Unk_61)(This, a6, 1);
            }
            else
            {
              TESObjectREFR_GetParentCell(a6);
              v16 = (int *)a6->vtbl->GetPos(a6);
              v17 = v6->members.target;
              a2[0] = *v16;
              a2[1] = v16[1];
              retaddr = v16[2];
              TargetType = TargetData::GetTargetType(v17);
              This->unk038 = (UInt32)sub_452A60(v35);
              if ( TargetType == 1 )
              {
                This->unk064 = sub_569E70(v17).objectCode;
                This->unk06C = 0;
              }
              else if ( TargetType == 2 )
              {
                This->unk064 = 0;
                This->unk06C = sub_569E80(v17).objectCode;
              }
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
              v20 = GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
              a5 = *(float *)SafeFloatPointer;
              v21 = a6->vtbl->GetPos(a6);
              sub_446B90(
                a1,
                (float *)a2,
                *(float *)v20,
                v21,
                a5,
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
                (int)a6);
              This->unk06C = 0;
              This->unk064 = 0;
              ((void (__thiscall *)(MiddleHighProcess *, TESObjectREFR *))This->Unk_159)(This, a6);
            }
          }
          p_unk03C = &This->unk03C;
          if ( This->unk040 || *p_unk03C )
          {
            v23 = *p_unk03C;
            This->unk044 = *p_unk03C;
            v24 = *(_DWORD *)(v23 + 0x1C) == 2;
            v25 = *(TESObjectREFR **)v23;
            if ( v24 )
            {
              v24 = !v25->vtbl->IsActor(v25);
              unk044 = (TESObjectREFR **)This->unk044;
              if ( v24 )
              {
                Owner = TESObjectREFR_GetOwner(*unk044);
                v28 = OblivionDynamicCast(
                        Owner,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESNPC `RTTI Type Descriptor',
                        0);
                if ( v28 )
                {
                  v29 = This->__vftable;
                  sub_675220(v28);
                  v29->SetUnk02C(This, v30);
                }
              }
              else
              {
                This->SetUnk02C(This, *unk044);
              }
            }
            else
            {
              This->SetUnk02C(This, v25);
            }
            BSSimpleList_Remove(&This->unk03C, This->unk044);
          }
        }
        else
        {
          v9.form = sub_569E60(target).form;
          if ( v9.form->vtbl->IsDead(v9.form, 1) )
          {
            sub_566870((TargetData **)v6, (TESForm *)This->follow, 1);
            ((void (__thiscall *)(TESObjectREFR *, Actor *, TESObjectCELL *))a6->vtbl[1].Set3D)(a6, This->follow, a1);
            return;
          }
          v10 = This->__vftable;
          v11.form = sub_569E60(target).form;
          ((void (__thiscall *)(MiddleHighProcess *, ObjectType))v10->SetUnk02C)(This, v11);
          follow = This->follow;
          if ( follow )
          {
            if ( (follow->members.super.super.super.flags & 0x20) != 0
              && !follow->vtbl->super.super.IsActor((TESObjectREFR *)follow) )
            {
              v13 = This->follow;
              if ( v13 != (Actor *)0xFFFFFFBC )
              {
                v14 = This->__vftable;
                ReferencePointer = ExtraDataList_GetReferencePointer(&v13->members.super.super.baseExtraList);
                v14->SetUnk02C(This, (TESObjectREFR *)ReferencePointer);
              }
            }
          }
        }
      }
    }
    v31 = This->follow;
    if ( v31 )
    {
      v32 = v31->vtbl->super.super.GetPos((TESObjectREFR *)v31);
      This->positionOfFollowedActor[0] = *v32;
      v33 = This->follow;
      This->positionOfFollowedActor[1] = v32[1];
      This->positionOfFollowedActor[2] = v32[2];
      Actor::SetCompressedFlag(v33, 1);
    }
  }
}
