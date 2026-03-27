void __thiscall sub_643E30(int this, Actor *a2, int a3, int a4)
{
  TESPackage *v6; // esi
  Actor *v7; // eax
  Actor *v8; // ebp
  TESPackage *v9; // eax
  unsigned __int8 *p_targetType; // ecx
  TargetData *target; // ebx
  NiAVObject *v12; // eax
  LowProcess *process; // edi
  TESPackage *v14; // eax
  int v15; // [esp-10h] [ebp-34h]
  BSExtraData *v16; // [esp-Ch] [ebp-30h]
  char v17; // [esp-8h] [ebp-2Ch]
  char v18; // [esp-4h] [ebp-28h]

  v6 = 0;
  v7 = (Actor *)OblivionDynamicCast(
                  *(void **)(this + 0x2C),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v8 = v7;
  if ( v7 != a2 )
  {
    if ( v7 )
    {
      if ( v7->members.super.process )
      {
        if ( !a2->vtbl->GetMountedHorse(a2) )
        {
          if ( a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) )
            a2->vtbl->AddPackageWakeUp(a2);
        }
        v9 = (TESPackage *)FormHeapAlloc(0x3Cu);
        if ( v9 )
          v6 = TESPackage::TESPackage(v9);
        TESPackage_SetType_(v6, 1);
        v6->members.packageFlags |= 6u;
        TESPackage_SetLocation(v6, *(char **)(*(_DWORD *)(this + 8) + 0x24));
        TESPackage_SetTarget(v6, *(unsigned __int8 **)(*(_DWORD *)(this + 8) + 0x28));
        p_targetType = &v6->members.target->targetType;
        v6->members.procedureArrayIndex = 6;
        TESPackage_TargetData_SetType(p_targetType, 0);
        TeSPackage_TargetData_SetTargetREFR(&v6->members.target->targetType, (int)a2);
        target = v6->members.target;
        v12 = sub_452A60(*(Atmosphere **)(a3 + 0x28));
        TESAIForm_SetServiceFlags(target, (int)v12);
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x80000) != 0 )
          v6->members.packageFlags |= 0x80000u;
        else
          v6->members.packageFlags &= ~0x80000u;
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x40000) != 0 )
          v6->members.packageFlags |= 0x40000u;
        else
          v6->members.packageFlags &= ~0x40000u;
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x2000) != 0 )
          v6->members.packageFlags |= 0x2000u;
        else
          v6->members.packageFlags &= ~0x2000u;
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x20000) != 0 )
          v6->members.packageFlags |= 0x20000u;
        else
          v6->members.packageFlags &= ~0x20000u;
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x1000) != 0 )
          v6->members.packageFlags |= 0x1000u;
        else
          v6->members.packageFlags &= ~0x1000u;
        v8->members.super.process->Unk_08(v8->members.super.process);
        if ( sub_5E0380(v8) )
        {
          process = v8->members.super.process;
          v18 = process->GetUnk01C(process);
          v17 = process->Unk_2F(process);
          v16 = (BSExtraData *)process->GetUnk02C(process);
          v15 = process->GetCurrentPackProcedure(process);
          v14 = sub_5E0380(v8);
          sub_4268B0(&v8->members.super.super.baseExtraList, v14, v15, v16, v17, v18);
        }
        sub_424C50(&a2->members.super.super.baseExtraList, (int)v8);
        Actor_AddPackage_(v8, v6, 0, 1);
      }
    }
  }
}
