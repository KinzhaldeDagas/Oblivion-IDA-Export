// 3DTheft decode 2026-05-17: high-process package target/procedure-state resolver used before Follow execution; clears follow target, resolves current package target, links Follow/Escort actor targets through package target resolver, and caches followed actor position.
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
  TESObjectREFR *ReferencePointer; // eax
  int *v16; // eax
  TargetData *v17; // ebx
  int TargetType; // ebp
  float *SafeFloatPointer; // ebx
  float *v20; // ebp
  float *v21; // eax
  UInt32 *p_unk03C; // edi
  UInt32 v23; // eax
  bool v24; // zf
  TESObjectREFR *v25; // eax
  TESObjectREFR **unk044; // eax
  TESForm *Owner; // eax
  void *v28; // eax
  MiddleHighProcess_vtbl *v29; // ebx
  ActorVtbl *v30; // eax
  Actor *v31; // ecx
  float *v32; // eax
  Actor *v33; // ecx
  float a5; // [esp+Ch] [ebp-28h]
  Atmosphere *v35; // [esp+28h] [ebp-Ch]
  int a2[2]; // [esp+2Ch] [ebp-8h] BYREF
  int retaddr; // [esp+34h] [ebp+0h]

  GetCurrentPackage = (TESPackage *(*)(void))This->GetCurrentPackage; /*0x64df49*/
  This->follow = 0; /*0x64df4f*/
  v5 = GetCurrentPackage(); /*0x64df56*/
  v6 = v5; /*0x64df58*/
  if ( v5 ) /*0x64df5c*/
  {
    type = v5->members.type; /*0x64df62*/
    if ( type > 0 && (type <= 2 || type == 7) && sub_567CA0((TargetData **)v6) ) /*0x64df77*/
    {
      sub_568BB0((int)v6, a6); /*0x64df87*/
    }
    else
    {
      target = v6->members.target; /*0x64df91*/
      if ( target ) /*0x64df9a*/
      {
        if ( TargetData::GetTargetType(target) ) /*0x64dfa2*/
        {
          if ( !This->unk040 && !This->unk03C ) /*0x64e05f*/
          {
            if ( This->currentPackage || (v6->members.packageFlags & 4) == 0 ) /*0x64e07f*/
            {
              ((void (__thiscall *)(MiddleHighProcess *, TESObjectREFR *, int))This->Unk_61)(This, a6, 1); /*0x64e171*/
            }
            else
            {
              Shared_GetDwordAtOffset40(a6); /*0x64e08c*/
              v16 = (int *)a6->vtbl->GetPos(a6); /*0x64e09f*/
              v17 = v6->members.target; /*0x64e0a3*/
              a2[0] = *v16; /*0x64e0a6*/
              a2[1] = v16[1]; /*0x64e0ad*/
              retaddr = v16[2]; /*0x64e0b6*/
              TargetType = TargetData::GetTargetType(v17); /*0x64e0c3*/
              This->unk038 = (UInt32)Shared_GetPointerAtOffset08(v35); /*0x64e0cd*/
              if ( TargetType == 1 ) /*0x64e0d0*/
              {
                This->unk064 = sub_569E70(v17).objectCode; /*0x64e0d9*/
                This->unk06C = 0; /*0x64e0dc*/
              }
              else if ( TargetType == 2 ) /*0x64e0e8*/
              {
                This->unk064 = 0; /*0x64e0ec*/
                This->unk06C = sub_569E80(v17).objectCode; /*0x64e0f8*/
              }
              SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]); /*0x64e10a*/
              v20 = GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]); /*0x64e11c*/
              a5 = *SafeFloatPointer; /*0x64e11e*/
              v21 = a6->vtbl->GetPos(a6); /*0x64e129*/
              sub_446B90( /*0x64e143*/
                a1,
                (float *)a2,
                *v20,
                v21,
                a5,
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646600,
                (int)a6);
              This->unk06C = 0; /*0x64e14a*/
              This->unk064 = 0; /*0x64e14d*/
              ((void (__thiscall *)(MiddleHighProcess *, TESObjectREFR *))This->Unk_159)(This, a6); /*0x64e15b*/
            }
          }
          p_unk03C = &This->unk03C; /*0x64e177*/
          if ( This->unk040 || *p_unk03C ) /*0x64e17c*/
          {
            v23 = *p_unk03C; /*0x64e181*/
            This->unk044 = *p_unk03C; /*0x64e183*/
            v24 = *(_DWORD *)(v23 + 0x1C) == 2; /*0x64e186*/
            v25 = *(TESObjectREFR **)v23; /*0x64e18a*/
            if ( v24 ) /*0x64e18c*/
            {
              v24 = !v25->vtbl->IsActor(v25); /*0x64e19a*/
              unk044 = (TESObjectREFR **)This->unk044; /*0x64e19c*/
              if ( v24 ) /*0x64e1a1*/
              {
                Owner = TESObjectREFR_GetOwner(*unk044); /*0x64e1b4*/
                v28 = OblivionDynamicCast( /*0x64e1ba*/
                        Owner,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESNPC `RTTI Type Descriptor',
                        0);
                if ( v28 ) /*0x64e1c4*/
                {
                  v29 = This->__vftable; /*0x64e1c6*/
                  v30 = sub_675220((int)&qword_B3BB2C[0x75], (int)v28); /*0x64e1ce*/
                  v29->SetUnk02C(This, (TESObjectREFR *)v30); /*0x64e1da*/
                }
              }
              else
              {
                This->SetUnk02C(This, *unk044); /*0x64e1a4*/
              }
            }
            else
            {
              This->SetUnk02C(This, v25); /*0x64e1e7*/
            }
            BSSimpleList_Remove((int *)&This->unk03C, This->unk044); /*0x64e1ef*/
          }
        }
        else
        {
          v9.form = sub_569E60(target).form; /*0x64dfb1*/
          if ( v9.form->vtbl->IsDead(v9.form, 1) ) /*0x64dfc2*/
          {
            sub_566870((TargetData **)v6, (TESForm *)This->follow, 1); /*0x64dfd0*/
            ((void (__thiscall *)(TESObjectREFR *, Actor *, TESObjectCELL *))a6->vtbl[1].Set3D)(a6, This->follow, a1); /*0x64dfee*/
            return; /*0x64dfee*/
          }
          v10 = This->__vftable; /*0x64dff0*/
          v11.form = sub_569E60(target).form; /*0x64dff4*/
          ((void (__thiscall *)(MiddleHighProcess *, ObjectType))v10->SetUnk02C)(This, v11); /*0x64e002*/
          follow = This->follow; /*0x64e004*/
          if ( follow ) /*0x64e009*/
          {
            if ( (follow->members.super.super.super.flags & 0x20) != 0 /*0x64e026*/
              && !follow->vtbl->super.super.IsActor((TESObjectREFR *)follow) )
            {
              v13 = This->follow; /*0x64e030*/
              if ( v13 != (Actor *)0xFFFFFFBC ) /*0x64e038*/
              {
                v14 = This->__vftable; /*0x64e03e*/
                ReferencePointer = ExtraDataList_GetReferencePointer(&v13->members.super.super.baseExtraList); /*0x64e040*/
                v14->SetUnk02C(This, ReferencePointer); /*0x64e04e*/
              }
            }
          }
        }
      }
    }
    v31 = This->follow; /*0x64e1f4*/
    if ( v31 ) /*0x64e1f9*/
    {
      v32 = v31->vtbl->super.super.GetPos((TESObjectREFR *)v31); /*0x64e203*/
      This->positionOfFollowedActor[0] = *v32; /*0x64e207*/
      v33 = This->follow; /*0x64e210*/
      This->positionOfFollowedActor[1] = v32[1]; /*0x64e213*/
      This->positionOfFollowedActor[2] = v32[2]; /*0x64e21e*/
      Actor::SetCompressedFlag(v33, 1); /*0x64e224*/
    }
  }
}
