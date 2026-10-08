// 3DTheft decode: generated create-follow helper assigns a temporary Follow package to the actor resolved from the procedure target and targets the current owning actor. It confirms dynamic Follow bookkeeping (explicit ExtraFollower link + Actor_AddPackage setCurrent=0 markDynamic=1), but is not the correct package shape for making a spawned thief follow the player.
void __thiscall sub_643E30(int this, Actor *a2, int a3, int a4)
{
  TESPackage *v5; // esi
  Actor *v6; // eax
  Actor *v7; // ebp
  TESPackage *v8; // eax
  unsigned __int8 *p_targetType; // ecx
  TargetData *target; // ebx
  NiAVObject *PointerAtOffset08; // eax
  LowProcess *process; // edi
  TESPackage *CurrentPackage; // eax
  int v14; // [esp-10h] [ebp-34h]
  BSExtraData *v15; // [esp-Ch] [ebp-30h]
  char v16; // [esp-8h] [ebp-2Ch]
  char v17; // [esp-4h] [ebp-28h]

  v5 = 0; /*0x643e5a*/
  v6 = (Actor *)OblivionDynamicCast( /*0x643e69*/
                  *(void **)(this + 0x2C),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v7 = v6; /*0x643e72*/
  if ( v6 != a2 ) /*0x643e79*/
  {
    if ( v6 ) /*0x643e81*/
    {
      if ( v6->members.super.process ) /*0x643e87*/
      {
        if ( !a2->vtbl->GetMountedHorse(a2) ) /*0x643e9a*/
        {
          if ( a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) ) /*0x643eaa*/
            a2->vtbl->AddPackageWakeUp(a2); /*0x643eba*/
        }
        v8 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x643ebe*/
        if ( v8 ) /*0x643ed0*/
          v5 = TESPackage::TESPackage(v8); /*0x643ed9*/
        TESPackage_SetType_(v5, 1); /*0x643ee7*/
        v5->members.packageFlags |= 6u; /*0x643eec*/
        TESPackage_SetLocation(v5, *(char **)(*(_DWORD *)(this + 8) + 0x24));// 3DTheft decode: generated Follow package copies the current procedure/package location before target rewrite. /*0x643ef9*/
        TESPackage_SetTarget(v5, *(unsigned __int8 **)(*(_DWORD *)(this + 8) + 0x28)); /*0x643f07*/
        p_targetType = &v5->members.target->targetType; /*0x643f0c*/
        v5->members.procedureArrayIndex = 6;    // 3DTheft decode: generated Follow package forces procedure row 6 (WAIT, FOLLOW, DONE), not resolver row 7. /*0x643f11*/
        TESPackage_TargetData_SetType(p_targetType, 0);// 3DTheft decode: generated Follow package sets target type to reference after TESPackage_SetTarget copies target data. /*0x643f18*/
        TeSPackage_TargetData_SetTargetREFR(&v5->members.target->targetType, (int)a2);// 3DTheft decode: generated Follow package writes the actor reference through TargetData_SetTargetREFR; count remains whatever the constructor/copy path set. /*0x643f21*/
        target = v5->members.target; /*0x643f2d*/
        PointerAtOffset08 = Shared_GetPointerAtOffset08(*(Atmosphere **)(a3 + 0x28)); /*0x643f30*/
        TESAIForm_SetServiceFlags(target, (int)PointerAtOffset08); /*0x643f38*/
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x80000) != 0 )// 3DTheft decode: generated Follow package copies selected movement flags from the source package after target setup. /*0x643f46*/
          v5->members.packageFlags |= 0x80000u; /*0x643f48*/
        else
          v5->members.packageFlags &= ~0x80000u; /*0x643f51*/
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x40000) != 0 ) /*0x643f60*/
          v5->members.packageFlags |= 0x40000u; /*0x643f62*/
        else
          v5->members.packageFlags &= ~0x40000u; /*0x643f6b*/
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x2000) != 0 ) /*0x643f7b*/
          v5->members.packageFlags |= 0x2000u; /*0x643f7d*/
        else
          v5->members.packageFlags &= ~0x2000u; /*0x643f86*/
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x20000) != 0 ) /*0x643f96*/
          v5->members.packageFlags |= 0x20000u; /*0x643f98*/
        else
          v5->members.packageFlags &= ~0x20000u; /*0x643fa1*/
        if ( (*(_DWORD *)(a3 + 0x1C) & 0x1000) != 0 ) /*0x643fb0*/
          v5->members.packageFlags |= 0x1000u; /*0x643fb2*/
        else
          v5->members.packageFlags &= ~0x1000u; /*0x643fbb*/
        v7->members.super.process->Unk_08(v7->members.super.process); /*0x643fca*/
        if ( Actor::GetCurrentPackage(v7) ) /*0x643fce*/
        {
          process = v7->members.super.process; /*0x643fd7*/
          v17 = process->GetUnk01C(process); /*0x643fea*/
          v16 = process->Unk_2F(process); /*0x643ff7*/
          v15 = (BSExtraData *)process->GetUnk02C(process); /*0x644002*/
          v14 = process->GetCurrentPackProcedure(process); /*0x64400d*/
          CurrentPackage = Actor::GetCurrentPackage(v7); /*0x644010*/
          sub_4268B0(&v7->members.super.super.baseExtraList, CurrentPackage, v14, v15, v16, v17); /*0x644019*/
        }
        sub_424C50(&a2->members.super.super.baseExtraList, (void (__thiscall *)(BSExtraData *))v7); /*0x644026*/
        Actor_AddPackage_(v7, v5, 0, 1); /*0x644032*/
      }
    }
  }
}
