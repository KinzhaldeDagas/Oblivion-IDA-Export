// positive sp value has been detected, the output may be wrong!
void __userpurge def_60F2A6(
        Actor *a1@<edi>,
        Crime *a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        TESObjectREFR *a12)
{
  Creature *v12; // eax
  TESObjectREFR *criminal; // ebp
  Actor **v14; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v16; // edx
  TESClass *BaseClass; // eax
  TESForm *ActorBaseForm; // ebx
  char *v19; // edi
  TESClass *v20; // eax
  TESForm *v21; // ebx
  char *v22; // ebx
  TESPackage *CurrentPackage; // ebx
  TESPackage *v24; // eax
  BSExtraDataVtbl *ExtraPackage; // ebp
  TESObjectREFR *v26; // ebp
  TESClass *v27; // eax
  TESForm *v28; // ebx
  char *v29; // ebx
  TESPackage *v30; // eax
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
  LowProcess *process; // ecx
  LowProcess *v50; // ebx
  BSExtraData *v51; // eax
  TESObjectREFR *v52; // edi
  char v53; // [esp-28h] [ebp-50h]
  char v54; // [esp-24h] [ebp-4Ch]
  int v55; // [esp+10h] [ebp-18h]
  float retaddr; // [esp+28h] [ebp+0h]
  float v57; // [esp+2Ch] [ebp+4h]
  float v58; // [esp+2Ch] [ebp+4h]
  float GoldValue; // [esp+38h] [ebp+10h]
  float v60; // [esp+38h] [ebp+10h]
  float v61; // [esp+38h] [ebp+10h]
  float v62; // [esp+38h] [ebp+10h]

  if ( ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetMountedHorse)( /*0x60f358*/
         a1,
         a5,
         a4,
         a3) )
  {
    if ( !((int (__thiscall *)(LowProcess *))a1->members.super.process->GetSitSleepState)(a1->members.super.process) ) /*0x60f369*/
    {
      v12 = a1->vtbl->GetMountedHorse(a1); /*0x60f379*/
      ((void (__thiscall *)(Creature *, _DWORD))v12->__vftable->Unk_E3)(v12, 0); /*0x60f387*/
      ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E1)(a1, 0); /*0x60f395*/
    }
  }
  if ( Actor_IsGuardClass(a1) ) /*0x60f399*/
  {
    criminal = a12; /*0x60f3a8*/
    if ( a2 ) /*0x60f3ac*/
    {
      if ( !a12 ) /*0x60f3b0*/
        criminal = (TESObjectREFR *)a2->criminal; /*0x60f3b2*/
    }
    v14 = sub_6758E0((ActorProcessManager *)&qword_B3BB2C[0x75], criminal, 0xF, 0); /*0x60f3c3*/
    vtbl = criminal[1].vtbl; /*0x60f3ca*/
    if ( v14 ) /*0x60f3cd*/
    {
      v16 = 0; /*0x60f3dc*/
      do /*0x60f3ed*/
      {
        if ( *v14 ) /*0x60f3e0*/
          ++v16; /*0x60f3e5*/
        v14 = (Actor **)v14[1]; /*0x60f3e8*/
      }
      while ( v14 ); /*0x60f3ed*/
      v55 = v16; /*0x60f3f1*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x8D))(vtbl); /*0x60f3f8*/
    }
    else
    {
      v55 = 0; /*0x60f3d1*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x8D))(vtbl); /*0x60f3d8*/
    }
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))criminal[1].vtbl->super.super.InitializeComponent + 0x111))(criminal[1].vtbl) >= (int)stru_B36A70.value ) /*0x60f40d*/
    {
      if ( a2 ) /*0x60f415*/
      {
        if ( Actor::HasNPCBaseForm(a2->criminal) && !a2->flag11 ) /*0x60f42b*/
        {
          if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64 /*0x60f451*/
            || (BaseClass = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(BaseClass)) )
          {
            ActorBaseForm = Actor_GetActorBaseForm(a1, 1); /*0x60f467*/
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) ) /*0x60f46c*/
              ActorBaseForm = Actor_GetActorBaseForm(a1, 0); /*0x60f47e*/
            v19 = (char *)OblivionDynamicCast( /*0x60f499*/
                            ActorBaseForm,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                            &TESNPC `RTTI Type Descriptor',
                            0);
            GoldValue = Crime_GetGoldValue(a2); /*0x60f4a0*/
            v60 = sub_5234A0(v19) * GoldValue; /*0x60f4ba*/
            ((void (__cdecl *)(_DWORD))a2->criminal->vtbl->Unk_95)(LODWORD(v60)); /*0x60f4c6*/
            a2->flag11 = 1; /*0x60f4c8*/
          }
        }
      }
      return; /*0x60f4cc*/
    }
    if ( criminal == (TESObjectREFR *)reference && LOBYTE(reference->unk738) ) /*0x60f4de*/
    {
      if ( a2 ) /*0x60f4ed*/
      {
        if ( Actor::HasNPCBaseForm(a2->criminal) && !a2->flag11 ) /*0x60f503*/
        {
          if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64 /*0x60f529*/
            || (v20 = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(v20)) )
          {
            v21 = Actor_GetActorBaseForm(a1, 1); /*0x60f53b*/
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v21[2].member.refID) ) /*0x60f540*/
              v21 = Actor_GetActorBaseForm(a1, 0); /*0x60f552*/
            v22 = (char *)OblivionDynamicCast( /*0x60f56d*/
                            v21,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                            &TESNPC `RTTI Type Descriptor',
                            0);
            v61 = Crime_GetGoldValue(a2); /*0x60f574*/
            v62 = sub_5234A0(v22) * v61; /*0x60f58e*/
            ((void (__cdecl *)(_DWORD))a2->criminal->vtbl->Unk_95)(LODWORD(v62)); /*0x60f59a*/
            a2->flag11 = 1; /*0x60f59c*/
            a2->flag2C = 1; /*0x60f5a0*/
          }
        }
      }
      ((void (__thiscall *)(LowProcess *, Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->members.super.process->Unk_89)( /*0x60f5c1*/
        a1->members.super.process,
        a1,
        criminal,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        1);
      return; /*0x60f5c3*/
    }
    (*((void (__thiscall **)(TESObjectREFRVtbl *, int))criminal[1].vtbl->super.super.InitializeComponent + 0x112))( /*0x60f5d8*/
      criminal[1].vtbl,
      1);
  }
  if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sleeping ) /*0x60f5e9*/
    a1->vtbl->AddPackageWakeUp(a1); /*0x60f5f5*/
  CurrentPackage = 0; /*0x60f5f9*/
  v24 = (TESPackage *)sub_5E03A0(a1); /*0x60f5fb*/
  ExtraPackage = (BSExtraDataVtbl *)v24; /*0x60f600*/
  if ( v24 ) /*0x60f604*/
  {
    if ( TESPackage::IsTemporaryOverrideType(v24) ) /*0x60f608*/
      ExtraPackage = ExtraDataList::GetExtraPackage(&a1->members.super.super.baseExtraList); /*0x60f619*/
  }
  if ( (((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->IsInCombat)(a1) /*0x60f686*/
     || a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0)
     || sub_5E6CD0((TESObjectREFR *)a1, 0)
     || ExtraPackage
     && ((int)ExtraPackage[3].CompareTo & 0x400000) != 0
     && a2
     && (v26 = a2->target, v26 != a1->members.super.process->GetUnk02C(a1->members.super.process)))
    && a7 )
  {
    if ( a2 ) /*0x60f68e*/
    {
      if ( Actor::HasNPCBaseForm(a2->criminal) && !a2->flag11 ) /*0x60f6a4*/
      {
        if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64 /*0x60f6c9*/
          || (v27 = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(v27)) )
        {
          v28 = Actor_GetActorBaseForm(a1, 1); /*0x60f6db*/
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v28[2].member.refID) ) /*0x60f6e0*/
            v28 = Actor_GetActorBaseForm(a1, 0); /*0x60f6f2*/
          v29 = (char *)OblivionDynamicCast( /*0x60f70d*/
                          v28,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          v57 = Crime_GetGoldValue(a2); /*0x60f714*/
          v58 = sub_5234A0(v29) * v57; /*0x60f72e*/
          ((void (__cdecl *)(_DWORD))a2->criminal->vtbl->Unk_95)(LODWORD(v58)); /*0x60f73a*/
          a2->flag11 = 1; /*0x60f73c*/
        }
      }
    }
    if ( !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) && !a2->flag10 ) /*0x60f756*/
      ((void (__thiscall *)(LowProcess *, Actor *, Actor *, Crime *))a1->members.super.process->Unk_8B)( /*0x60f770*/
        a1->members.super.process,
        a1,
        a2->criminal,
        a2);
  }
  else
  {
    ((void (__thiscall *)(LowProcess *))a1->members.super.process->SetCurrentPackage)(a1->members.super.process); /*0x60f784*/
    if ( Actor::GetCurrentPackage(a1) ) /*0x60f788*/
    {
      if ( Actor::GetCurrentPackage(a1)->members.type == kPackageType_Alarm ) /*0x60f79e*/
      {
        CurrentPackage = Actor::GetCurrentPackage(a1); /*0x60f7a5*/
      }
      else
      {
        v30 = Actor::GetCurrentPackage(a1); /*0x60f7a9*/
        if ( TESPackage::IsTemporaryOverrideType(v30) ) /*0x60f7b0*/
          sub_5EAE70(a1, 0, (int)a1, 0); /*0x60f7bb*/
      }
    }
    if ( a2 ) /*0x60f7c2*/
    {
      if ( Actor::HasNPCBaseForm(a2->criminal) && !a2->flag11 ) /*0x60f7d8*/
      {
        if ( a1->vtbl->GetActorValue(a1, kActorVal_Responsibility) >= 0x64 /*0x60f7fe*/
          || (v31 = (TESClass *)Actor_GetBaseClass(a1), TESClass::IsGuardClass(v31)) )
        {
          v32 = Actor_GetActorBaseForm(a1, 1); /*0x60f810*/
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v32[2].member.refID) ) /*0x60f815*/
            v32 = Actor_GetActorBaseForm(a1, 0); /*0x60f827*/
          v33 = (char *)OblivionDynamicCast( /*0x60f842*/
                          v32,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          retaddr = Crime_GetGoldValue(a2); /*0x60f849*/
          retaddr = sub_5234A0(v33) * retaddr; /*0x60f863*/
          a5 = retaddr; /*0x60f867*/
          ((void (__cdecl *)(float))a2->criminal->vtbl->Unk_95)(COERCE_FLOAT(LODWORD(retaddr))); /*0x60f86f*/
          a2->flag11 = 1; /*0x60f871*/
        }
      }
      v34 = (TESClass *)Actor_GetBaseClass(a1); /*0x60f877*/
      if ( TESClass::IsGuardClass(v34) ) /*0x60f87e*/
      {
        v35 = (PlayerCharacter *)a2->criminal; /*0x60f88b*/
        a2->flag2C = 1; /*0x60f88e*/
        if ( v35 == reference && PlayerCharacter::IsJailed(reference) ) /*0x60f89c*/
        {
          sub_65D670((int)reference, (int)a1, a3, a4, a5, 1); /*0x60f8ad*/
          ((void (__thiscall *)(LowProcess *, Actor *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->members.super.process->Unk_89)( /*0x60f8d5*/
            a1->members.super.process,
            a1,
            reference,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            1);
          return; /*0x60f8d7*/
        }
        if ( Actor::HasNPCBaseForm(a2->criminal) ) /*0x60f8df*/
        {
          v36 = (PlayerCharacter *)a2->criminal; /*0x60f8e8*/
          if ( v36 != reference /*0x60f906*/
            && !v36->vtbl->super.IsInCombat((Actor *)v36, 1)
            && TESObjectREFR_IsPersistent((TESObjectREFR *)a2->criminal) )
          {
            v37 = (TESObjectREFR *)a2->criminal; /*0x60f90f*/
            if ( !sub_5E6CD0(v37, 0) ) /*0x60f916*/
              ((void (__thiscall *)(TESObjectREFR *, Actor *, _DWORD, int, _DWORD, _DWORD))v37->vtbl[1].GetBaseForm)( /*0x60f933*/
                v37,
                a1,
                0,
                1,
                0,
                0);
            v38 = Actor::GetCurrentPackage((Actor *)v37); /*0x60f945*/
            v39 = OblivionDynamicCast( /*0x60f94b*/
                    v38,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                    &FleePackage `RTTI Type Descriptor',
                    0);
            if ( v39 ) /*0x60f955*/
              sub_626C90(v39, (int)a1); /*0x60f95a*/
          }
        }
      }
    }
    if ( CurrentPackage ) /*0x60f961*/
    {
      if ( a2 ) /*0x60fb61*/
      {
        v52 = (TESObjectREFR *)a2->criminal; /*0x60fb66*/
        if ( sub_569E60(CurrentPackage->members.target).form == v52 && !sub_606AD0(CurrentPackage, (int)a2) ) /*0x60fb75*/
          sub_606B00(CurrentPackage, (int)a2); /*0x60fb81*/
      }
    }
    else
    {
      editorPackage = a1->members.super.process->editorPackage; /*0x60f96a*/
      v41 = (TESPackage *)FormHeapAlloc(0x40u); /*0x60f96f*/
      if ( v41 ) /*0x60f985*/
        v42 = sub_6068D0(v41, (int)a2); /*0x60f98f*/
      else
        v42 = 0; /*0x60f993*/
      TESPackage_SetType_(v42, 0xF); /*0x60f9a1*/
      if ( editorPackage ) /*0x60f9a8*/
      {
        if ( (editorPackage->members.packageFlags & 0x800000) != 0 ) /*0x60f9b3*/
          v42->members.packageFlags |= (unsigned int)&loc_800000; /*0x60f9b5*/
        else
          v42->members.packageFlags &= ~0x800000u; /*0x60f9be*/
        if ( (editorPackage->members.packageFlags & 0x100000) != 0 ) /*0x60f9ce*/
          v42->members.packageFlags |= 0x100000u; /*0x60f9d0*/
        else
          v42->members.packageFlags &= ~0x100000u; /*0x60f9d9*/
        if ( (editorPackage->members.packageFlags & 0x200000) != 0 ) /*0x60f9e8*/
          v42->members.packageFlags |= 0x200000u; /*0x60f9ea*/
        else
          v42->members.packageFlags &= ~0x200000u; /*0x60f9f3*/
      }
      v42->members.packageFlags |= 6u; /*0x60f9fa*/
      v43 = (_DWORD *)FormHeapAlloc(0xCu); /*0x60fa00*/
      if ( v43 ) /*0x60fa16*/
        v44 = (TESPackage *)TESPackage_LocationData_constr(v43); /*0x60fa1f*/
      else
        v44 = 0; /*0x60fa23*/
      TESPackage_LocationData_SetType(v44, 0); /*0x60fa31*/
      if ( a2 ) /*0x60fa38*/
        TESPackage_LocationData_SetReference(v44, (int)a2->criminal); /*0x60fa3e*/
      else
        TESPackage_LocationData_SetReference(v44, v55); /*0x60fa47*/
      TESPackage_SetLocation(v42, (char *)v44); /*0x60fa4f*/
      if ( v44 ) /*0x60fa56*/
      {
        TESPackage_LocationData_destr(v44); /*0x60fa5a*/
        FormHeapFree((unsigned int)v44); /*0x60fa60*/
      }
      v45 = (_DWORD *)FormHeapAlloc(0xCu); /*0x60fa6a*/
      if ( v45 ) /*0x60fa80*/
        v46 = (unsigned __int8 *)TESPackage_TargetData_constr(v45); /*0x60fa89*/
      else
        v46 = 0; /*0x60fa8d*/
      TESPackage_SetTarget(v42, v46); /*0x60fa9a*/
      if ( v46 ) /*0x60faa1*/
      {
        Shared_NoOpVirtual_60D0A0(v46); /*0x60faa5*/
        FormHeapFree((unsigned int)v46); /*0x60faab*/
      }
      p_targetType = &v42->members.target->targetType; /*0x60fab3*/
      v42->members.procedureArrayIndex = 0xB; /*0x60fab8*/
      TESPackage_TargetData_SetType(p_targetType, 0); /*0x60fabf*/
      target = v42->members.target; /*0x60fac6*/
      if ( a2 ) /*0x60fac9*/
        TeSPackage_TargetData_SetTargetREFR(target, (int)a2->criminal); /*0x60facf*/
      else
        TeSPackage_TargetData_SetTargetREFR(target, v55); /*0x60fad6*/
      a1->members.super.process->Unk_08(a1->members.super.process); /*0x60fae3*/
      process = a1->members.super.process; /*0x60fae5*/
      if ( process->editorPackage ) /*0x60fae8*/
      {
        v50 = a1->members.super.process; /*0x60fb02*/
        v54 = ((int (*)(void))process->GetUnk01C)(); /*0x60fb0a*/
        v53 = v50->Unk_2F(v50); /*0x60fb17*/
        v51 = (BSExtraData *)v50->GetUnk02C(v50); /*0x60fb1e*/
        sub_4268B0(&a1->members.super.super.baseExtraList, v50->editorPackage, v50->editorPackProcedure, v51, v53, v54); /*0x60fb2e*/
      }
      Actor_AddPackage_(a1, v42, 0, 1); /*0x60fb3a*/
      if ( a2 ) /*0x60fb41*/
        Crime_AddWitness(a2, a1); /*0x60fb46*/
      a1->members.super.process->SetCurrentPackProcedure(a1->members.super.process, kProcedure_TRAVEL); /*0x60fb5b*/
    }
  }
}
