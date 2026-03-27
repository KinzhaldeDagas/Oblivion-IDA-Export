void __userpurge sub_60E8D0(Actor *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  TESPackage *v5; // eax
  TESPackage *v6; // edi
  TESObjectCELL *ParentCell; // eax
  double v8; // st7
  LowProcess *process; // ecx
  char *v10; // eax
  _DWORD *v11; // eax
  LowProcess *v12; // edi
  BSExtraData *v13; // eax
  char v14; // [esp-10h] [ebp-2Ch]
  char v15; // [esp-Ch] [ebp-28h]
  float v17; // [esp+8h] [ebp-14h]
  TESPackage *v18; // [esp+Ch] [ebp-10h]
  float v19[3]; // [esp+10h] [ebp-Ch] BYREF
  float v20; // [esp+20h] [ebp+4h]

  v5 = sub_5E0380(a1);
  if ( !OblivionDynamicCast(
          v5,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
          &FleePackage `RTTI Type Descriptor',
          0)
    && !a1->vtbl->IsInCombat(a1, 1)
    && (!sub_5E6B40(a1) || (PlayerCharacter *)sub_5EAE10((TESObjectREFR *)a1) != TESDataHandler_g_PlayerRef)
    && (a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_None
     || a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sitting
     || a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_Sleeping)
    && (!sub_5E0380(a1) || (sub_5E0380(a1)->members.packageFlags & 0x1000) == 0) )
  {
    if ( sub_5E0F30(a1) )
      a1->vtbl->AddPackageWakeUp(a1);
    a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0);
    a1->members.super.process->Unk_126(a1->members.super.process);
    if ( a4 )
    {
      v6 = *(TESPackage **)(a4 + 8);
      v18 = v6;
      a1->members.super.process->Unk_08(a1->members.super.process);
      sub_67C830((int)v6, v19);
      v17 = sub_4D7E30((float *)a1, v19);
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
      if ( ParentCell && TESObjectCELL_IsInterior(ParentCell) )
      {
        GameSetting_GetSafeFloatPointer((int *)&flt_B36B20);
        v8 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36B18);
      }
      else
      {
        v8 = flt_B36B08;
      }
      v20 = v8;
      if ( v20 + v20 > v17 )
      {
        process = a1->members.super.process;
        if ( process )
        {
          if ( process->GetCurrentPackage(process) )
          {
            v10 = (char *)a1->members.super.process->GetCurrentPackage(a1->members.super.process);
            if ( sub_567770(v10) )
              sub_5EAE70(a1, a2, (int)v6, a3);
          }
        }
        v11 = &a1->members.super.process->__vftable;
        if ( v11[2] )
        {
          v12 = a1->members.super.process;
          v15 = (*(int (**)(void))(*v11 + 0x390))();
          v14 = v12->Unk_2F(v12);
          v13 = (BSExtraData *)v12->GetUnk02C(v12);
          sub_4268B0(
            &a1->members.super.super.baseExtraList,
            v12->editorPackage,
            v12->editorPackProcedure,
            v13,
            v14,
            v15);
          v6 = v18;
        }
        Actor_AddPackage_(a1, v6, 0, 0);
      }
      else if ( sub_5E6BA0(a1) )
      {
        sub_5EAE70(a1, a2, (int)v6, a3);
      }
    }
  }
}
