void __userpurge sub_60E8D0(Actor *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  TESPackage *CurrentPackage; // eax
  TESPackage *v6; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  double v8; // st7
  LowProcess *process; // ecx
  TESPackage *v10; // eax
  LowProcess *v11; // eax
  LowProcess *v12; // edi
  BSExtraData *v13; // eax
  char v14; // [esp-10h] [ebp-2Ch]
  char v15; // [esp-Ch] [ebp-28h]
  float DistanceToPoint; // [esp+8h] [ebp-14h]
  TESPackage *v18; // [esp+Ch] [ebp-10h]
  float pointXYZ[3]; // [esp+10h] [ebp-Ch] BYREF
  float v20; // [esp+20h] [ebp+4h]

  CurrentPackage = Actor::GetCurrentPackage(a1); /*0x60e8e4*/
  if ( !OblivionDynamicCast( /*0x60e97e*/
          CurrentPackage,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
          &FleePackage `RTTI Type Descriptor',
          0)
    && !a1->vtbl->IsInCombat(a1, 1)
    && (!Actor_IsInDialogueProcedure(a1) || (PlayerCharacter *)sub_5EAE10((TESObjectREFR *)a1) != reference)
    && (a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_None
     || a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sitting
     || a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sleeping)
    && (!Actor::GetCurrentPackage(a1) || (Actor::GetCurrentPackage(a1)->members.packageFlags & 0x1000) == 0) )
  {
    if ( Actor::IsSleeping(a1) ) /*0x60e986*/
      a1->vtbl->AddPackageWakeUp(a1); /*0x60e999*/
    a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0); /*0x60e9a8*/
    a1->members.super.process->Unk_126(a1->members.super.process); /*0x60e9b5*/
    if ( a4 ) /*0x60e9bd*/
    {
      v6 = *(TESPackage **)(a4 + 8); /*0x60e9c9*/
      v18 = v6; /*0x60e9cf*/
      a1->members.super.process->Unk_08(a1->members.super.process); /*0x60e9d3*/
      sub_67C830((int)v6, pointXYZ); /*0x60e9dc*/
      DistanceToPoint = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)a1, pointXYZ); /*0x60e9ed*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x60e9f3*/
      if ( DwordAtOffset40 && TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x60e9fe*/
      {
        GameSetting_GetSafeFloatPointer(&unk_B36B20); /*0x60ea0c*/
        v8 = *GameSetting_GetSafeFloatPointer(unk_B36B18); /*0x60ea1b*/
      }
      else
      {
        v8 = unk_B36B08; /*0x60ea1f*/
      }
      v20 = v8; /*0x60ea25*/
      if ( v20 + v20 > DistanceToPoint ) /*0x60ea3a*/
      {
        process = a1->members.super.process; /*0x60ea5a*/
        if ( process ) /*0x60ea5f*/
        {
          if ( process->GetCurrentPackage(process) ) /*0x60ea69*/
          {
            v10 = a1->members.super.process->GetCurrentPackage(a1->members.super.process); /*0x60ea7a*/
            if ( TESPackage::IsTemporaryOverrideType(v10) ) /*0x60ea7e*/
              sub_5EAE70(a1, a2, (int)v6, a3); /*0x60ea89*/
          }
        }
        v11 = a1->members.super.process; /*0x60ea8e*/
        if ( v11->editorPackage ) /*0x60ea91*/
        {
          v12 = a1->members.super.process; /*0x60eaa3*/
          v15 = ((int (*)(void))v11->GetUnk01C)(); /*0x60eaaf*/
          v14 = v12->Unk_2F(v12); /*0x60eabc*/
          v13 = (BSExtraData *)v12->GetUnk02C(v12); /*0x60eac3*/
          sub_4268B0( /*0x60ead1*/
            &a1->members.super.super.baseExtraList,
            v12->editorPackage,
            v12->editorPackProcedure,
            v13,
            v14,
            v15);
          v6 = v18; /*0x60ead6*/
        }
        Actor_AddPackage_(a1, v6, 0, 0); /*0x60eae3*/
      }
      else if ( sub_5E6BA0(a1) ) /*0x60ea3e*/
      {
        sub_5EAE70(a1, a2, (int)v6, a3); /*0x60ea4d*/
      }
    }
  }
}
