// positive sp value has been detected, the output may be wrong!
void __userpurge def_60F2A6(
        Actor *a1@<edi>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        PlayerCharacter *a12)
{
  int v12; // eax
  PlayerCharacter *v13; // ebp
  TESObjectREFR **v14; // eax
  LowProcess *process; // ecx
  int v16; // edx
  TESClass *BaseClass; // eax
  TESForm *ActorBaseForm; // ebx
  char *v19; // edi
  TESClass *v20; // eax
  TESForm *v21; // ebx
  char *v22; // ebx
  TESPackage *v23; // ebx
  char *v24; // eax
  BSExtraDataVtbl *ExtraPackage; // ebp
  TESObjectREFR *v26; // ebp
  TESClass *v27; // eax
  TESForm *v28; // ebx
  char *v29; // ebx
  char *v30; // eax
  TESClass *v31; // eax
  TESForm *v32; // ebp
  char *v33; // ebp
  TESClass *v34; // eax
  PlayerCharacter *v35; // eax
  PlayerCharacter *v36; // ecx
  TESObjectREFR *v37; // ebp
  TESPackage *v38; // eax
  _DWORD *v39; // eax
  TESPackage *editorPackage; // ebx
  TESPackage *v41; // eax
  TESPackage *v42; // ebp
  _DWORD *v43; // eax
  TESPackage *v44; // ebx
  _DWORD *v45; // eax
  unsigned __int8 *v46; // ebx
  unsigned __int8 *p_targetType; // ecx
  TargetData *target; // ecx
  _DWORD *v49; // ecx
  LowProcess *v50; // ebx
  BSExtraData *v51; // eax
  TESObjectREFR *v52; // edi
  char v53; // [esp-28h] [ebp-50h]
  char v54; // [esp-24h] [ebp-4Ch]
  int v55; // [esp+10h] [ebp-18h]
  float retaddr; // [esp+28h] [ebp+0h]
  float v57; // [esp+2Ch] [ebp+4h]
  float v58; // [esp+2Ch] [ebp+4h]
  float v59; // [esp+38h] [ebp+10h]
  float v60; // [esp+38h] [ebp+10h]
  float v61; // [esp+38h] [ebp+10h]
  float v62; // [esp+38h] [ebp+10h]

  if ( a1->vtbl->GetMountedHorse(a1) )
  {
    if ( !((int (__thiscall *)(LowProcess *))a1->members.super.process->GetSitSleepState)(a1->members.super.process) )
    {
      v12 = (int)a1->vtbl->GetMountedHorse(a1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 0x38C))(v12, 0);
      ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E1)(a1, 0);
    }
  }
  if ( sub_5E6C60(a1) )
  {
    v13 = a12;
    if ( a2 )
    {
      if ( !a12 )
        v13 = *(PlayerCharacter **)(a2 + 0xC);
    }
    v14 = sub_6758E0((int)v13, 0xF, 0);
    process = v13->super.super.super.process;
    if ( v14 )
    {
      v16 = 0;
      do
      {
        if ( *v14 )
          ++v16;
        v14 = (TESObjectREFR **)v14[1];
      }
      while ( v14 );
      v55 = v16;
      process->Unk_8C(process);
    }
    else
    {
      v55 = 0;
      process->Unk_8C(process);
    }
    if ( ((int (__thiscall *)(LowProcess *))v13->super.super.super.process->Unk_110)(v13->super.super.super.process) >= dword_B36A70 )
    {
      if ( a2 )
      {
        if ( sub_5E32D0(*(void **)(a2 + 0xC)) && !*(_BYTE *)(a2 + 0x11) )
        {
          if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64
            || (BaseClass = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(BaseClass)) )
          {
            ActorBaseForm = Actor_GetActorBaseForm(a1, 1);
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) )
              ActorBaseForm = Actor_GetActorBaseForm(a1, 0);
            v19 = (char *)OblivionDynamicCast(
                            ActorBaseForm,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                            &TESNPC `RTTI Type Descriptor',
                            0);
            v59 = sub_606140(a2);
            v60 = sub_5234A0(v19) * v59;
            (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 0xC) + 0x254))(LODWORD(v60));
            *(_BYTE *)(a2 + 0x11) = 1;
          }
        }
      }
      return;
    }
    if ( v13 == TESDataHandler_g_PlayerRef && LOBYTE(TESDataHandler_g_PlayerRef->unk738) )
    {
      if ( a2 )
      {
        if ( sub_5E32D0(*(void **)(a2 + 0xC)) && !*(_BYTE *)(a2 + 0x11) )
        {
          if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64
            || (v20 = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(v20)) )
          {
            v21 = Actor_GetActorBaseForm(a1, 1);
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v21[2].member.refID) )
              v21 = Actor_GetActorBaseForm(a1, 0);
            v22 = (char *)OblivionDynamicCast(
                            v21,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                            &TESNPC `RTTI Type Descriptor',
                            0);
            v61 = sub_606140(a2);
            v62 = sub_5234A0(v22) * v61;
            (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 0xC) + 0x254))(LODWORD(v62));
            *(_BYTE *)(a2 + 0x11) = 1;
            *(_BYTE *)(a2 + 0x2C) = 1;
          }
        }
      }
      ((void (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->members.super.process->Unk_89)(
        a1->members.super.process,
        a1,
        v13,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        1);
      return;
    }
    ((void (__thiscall *)(LowProcess *, int))v13->super.super.super.process->Unk_111)(v13->super.super.super.process, 1);
  }
  if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sleeping )
    a1->vtbl->AddPackageWakeUp(a1);
  v23 = 0;
  v24 = (char *)sub_5E03A0(a1);
  ExtraPackage = (BSExtraDataVtbl *)v24;
  if ( v24 )
  {
    if ( sub_567770(v24) )
      ExtraPackage = ExtraDataList::GetExtraPackage(&a1->members.super.super.baseExtraList);
  }
  if ( (((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->IsInCombat)(a1)
     || a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0)
     || sub_5E6CD0((TESObjectREFR *)a1, 0)
     || ExtraPackage
     && ((int)ExtraPackage[3].CompareTo & 0x400000) != 0
     && a2
     && (v26 = *(TESObjectREFR **)(a2 + 8), v26 != a1->members.super.process->GetUnk02C(a1->members.super.process)))
    && a7 )
  {
    if ( a2 )
    {
      if ( sub_5E32D0(*(void **)(a2 + 0xC)) && !*(_BYTE *)(a2 + 0x11) )
      {
        if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64
          || (v27 = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(v27)) )
        {
          v28 = Actor_GetActorBaseForm(a1, 1);
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v28[2].member.refID) )
            v28 = Actor_GetActorBaseForm(a1, 0);
          v29 = (char *)OblivionDynamicCast(
                          v28,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          v57 = sub_606140(a2);
          v58 = sub_5234A0(v29) * v57;
          (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a2 + 0xC) + 0x254))(LODWORD(v58));
          *(_BYTE *)(a2 + 0x11) = 1;
        }
      }
    }
    if ( !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) && !*(_BYTE *)(a2 + 0x10) )
      ((void (__thiscall *)(LowProcess *, Actor *, _DWORD, int))a1->members.super.process->Unk_8B)(
        a1->members.super.process,
        a1,
        *(_DWORD *)(a2 + 0xC),
        a2);
  }
  else
  {
    ((void (__thiscall *)(LowProcess *))a1->members.super.process->SetCurrentPackage)(a1->members.super.process);
    if ( sub_5E0380(a1) )
    {
      if ( sub_5E0380(a1)->members.type == 0xF )
      {
        v23 = sub_5E0380(a1);
      }
      else
      {
        v30 = (char *)sub_5E0380(a1);
        if ( sub_567770(v30) )
          sub_5EAE70(a1, 0, (int)a1, 0);
      }
    }
    if ( a2 )
    {
      if ( sub_5E32D0(*(void **)(a2 + 0xC)) && !*(_BYTE *)(a2 + 0x11) )
      {
        if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64
          || (v31 = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(v31)) )
        {
          v32 = Actor_GetActorBaseForm(a1, 1);
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v32[2].member.refID) )
            v32 = Actor_GetActorBaseForm(a1, 0);
          v33 = (char *)OblivionDynamicCast(
                          v32,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          retaddr = sub_606140(a2);
          retaddr = sub_5234A0(v33) * retaddr;
          a5 = retaddr;
          (*(void (__cdecl **)(float))(**(_DWORD **)(a2 + 0xC) + 0x254))(COERCE_FLOAT(LODWORD(retaddr)));
          *(_BYTE *)(a2 + 0x11) = 1;
        }
      }
      v34 = (TESClass *)Actor_GetBaseClass(a1);
      if ( TESClass::IsGuardClass(v34) )
      {
        v35 = *(PlayerCharacter **)(a2 + 0xC);
        *(_BYTE *)(a2 + 0x2C) = 1;
        if ( v35 == TESDataHandler_g_PlayerRef && PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) )
        {
          sub_65D670((int)TESDataHandler_g_PlayerRef, (int)a1, a3, a4, a5, 1);
          ((void (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->members.super.process->Unk_89)(
            a1->members.super.process,
            a1,
            TESDataHandler_g_PlayerRef,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            1);
          return;
        }
        if ( sub_5E32D0(*(void **)(a2 + 0xC)) )
        {
          v36 = *(PlayerCharacter **)(a2 + 0xC);
          if ( v36 != TESDataHandler_g_PlayerRef
            && !v36->vtbl->super.IsInCombat((Actor *)v36, 1)
            && TESObjectREFR_IsPersistent_(*(TESObjectREFR **)(a2 + 0xC)) )
          {
            v37 = *(TESObjectREFR **)(a2 + 0xC);
            if ( !sub_5E6CD0(v37, 0) )
              ((void (__thiscall *)(TESObjectREFR *, Actor *, _DWORD, int, _DWORD, _DWORD))v37->vtbl[1].GetBaseForm)(
                v37,
                a1,
                0,
                1,
                0,
                0);
            v38 = sub_5E0380((Actor *)v37);
            v39 = OblivionDynamicCast(
                    v38,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                    &FleePackage `RTTI Type Descriptor',
                    0);
            if ( v39 )
              sub_626C90(v39, (int)a1);
          }
        }
      }
    }
    if ( v23 )
    {
      if ( a2 )
      {
        v52 = *(TESObjectREFR **)(a2 + 0xC);
        if ( sub_569E60(v23->members.target).form == v52 && !sub_606AD0(v23, a2) )
          sub_606B00(v23, a2);
      }
    }
    else
    {
      editorPackage = a1->members.super.process->editorPackage;
      v41 = (TESPackage *)FormHeapAlloc(0x40u);
      if ( v41 )
        v42 = sub_6068D0(v41, a2);
      else
        v42 = 0;
      TESPackage_SetType_(v42, 0xF);
      if ( editorPackage )
      {
        if ( (editorPackage->members.packageFlags & 0x800000) != 0 )
          v42->members.packageFlags |= (unsigned int)&loc_800000;
        else
          v42->members.packageFlags &= ~0x800000u;
        if ( (editorPackage->members.packageFlags & 0x100000) != 0 )
          v42->members.packageFlags |= 0x100000u;
        else
          v42->members.packageFlags &= ~0x100000u;
        if ( (editorPackage->members.packageFlags & 0x200000) != 0 )
          v42->members.packageFlags |= 0x200000u;
        else
          v42->members.packageFlags &= ~0x200000u;
      }
      v42->members.packageFlags |= 6u;
      v43 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v43 )
        v44 = (TESPackage *)TESPackage_LocationData_constr(v43);
      else
        v44 = 0;
      TESPackage_LocationData_SetType(v44, 0);
      if ( a2 )
        TESPackage_LocationData_SetReference(v44, *(_DWORD *)(a2 + 0xC));
      else
        TESPackage_LocationData_SetReference(v44, v55);
      TESPackage_SetLocation(v42, (char *)v44);
      if ( v44 )
      {
        TESPackage_LocationData_destr(v44);
        FormHeapFree((unsigned int)v44);
      }
      v45 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v45 )
        v46 = (unsigned __int8 *)TESPackage_TargetData_constr(v45);
      else
        v46 = 0;
      TESPackage_SetTarget(v42, v46);
      if ( v46 )
      {
        TESTexture::ClearComponentReferences(v46);
        FormHeapFree((unsigned int)v46);
      }
      p_targetType = &v42->members.target->targetType;
      v42->members.procedureArrayIndex = 0xB;
      TESPackage_TargetData_SetType(p_targetType, 0);
      target = v42->members.target;
      if ( a2 )
        TeSPackage_TargetData_SetTargetREFR(target, *(_DWORD *)(a2 + 0xC));
      else
        TeSPackage_TargetData_SetTargetREFR(target, v55);
      a1->members.super.process->Unk_08(a1->members.super.process);
      v49 = &a1->members.super.process->__vftable;
      if ( v49[2] )
      {
        v50 = a1->members.super.process;
        v54 = (*(int (**)(void))(*v49 + 0x390))();
        v53 = v50->Unk_2F(v50);
        v51 = (BSExtraData *)v50->GetUnk02C(v50);
        sub_4268B0(&a1->members.super.super.baseExtraList, v50->editorPackage, v50->editorPackProcedure, v51, v53, v54);
      }
      Actor_AddPackage_(a1, v42, 0, 1);
      if ( a2 )
        sub_605F00((_DWORD *)a2, (int)a1);
      a1->members.super.process->SetCurrentPackProcedure(a1->members.super.process, kProcedure_TRAVEL);
    }
  }
}
