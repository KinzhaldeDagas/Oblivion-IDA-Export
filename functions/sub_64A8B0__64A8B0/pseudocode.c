char __thiscall sub_64A8B0(HighProcess *this, Actor *a2, int a3)
{
  TESPackage *CurrentPackage; // ebx
  Creature *TravelHorse; // edi
  Actor *v6; // ebp
  TESForm *v7; // eax
  char v8; // bl
  TESWorldSpace *WorldSpace; // ebp
  PathLow *v10; // eax
  PathLow *v11; // eax
  int v12; // eax
  float *v14; // eax
  Creature *v15; // eax
  Creature *v16; // eax
  Actor *v17; // eax
  ActorVtbl *vtbl; // edi
  Creature *v19; // eax
  float v20; // [esp+Ch] [ebp-2Ch]
  float v21; // [esp+2Ch] [ebp-Ch]
  double Distance; // [esp+2Ch] [ebp-Ch]
  char v24; // [esp+3Ch] [ebp+4h]

  if ( Actor_IsCreature(a2) || a2->vtbl->GetMountedHorse(a2) ) /*0x64a8d5*/
    return 0; /*0x64abbe*/
  CurrentPackage = Actor::GetCurrentPackage(a2); /*0x64a8f4*/
  TravelHorse = (Creature *)ExtraDataList::GetTravelHorse(&a2->members.super.super.baseExtraList); /*0x64a8fb*/
  v6 = 0; /*0x64a8fd*/
  if ( TravelHorse ) /*0x64a901*/
  {
    if ( TravelHorse->__vftable->super.super.IsActor((TESObjectREFR *)TravelHorse) ) /*0x64a90d*/
      v6 = (Actor *)TravelHorse; /*0x64a913*/
  }
  v21 = 0.0; /*0x64a919*/
  v24 = 0; /*0x64a91d*/
  if ( !CurrentPackage ) /*0x64a922*/
    return 0; /*0x64a922*/
  if ( (CurrentPackage->members.packageFlags & 0x800000) == 0 ) /*0x64a930*/
  {
    if ( this->pathing ) /*0x64a936*/
      v21 = ((double (__thiscall *)(PathLow *, Actor *))*(_DWORD *)(*(_DWORD *)this->pathing + 0x28))(this->pathing, a2); /*0x64a947*/
    if ( unk_B37528 <= (double)v21 ) /*0x64a95c*/
    {
      if ( v6 ) /*0x64a960*/
        v24 = 1; /*0x64a962*/
    }
  }
  if ( (CurrentPackage->members.packageFlags & 0x800000) != 0 || v24 ) /*0x64a977*/
  {
    if ( TravelHorse /*0x64a9b9*/
      && v6
      && v6->members.super.process
      && !v6->vtbl->super.super.IsDead((TESObjectREFR *)v6, 0)
      && !((int (__thiscall *)(Actor *))v6->vtbl->Unk_E2)(v6) )
    {
      v7 = a2->vtbl->super.super.GetBaseForm(a2); /*0x64a9cd*/
      ExtraDataList::SetOrRemoveExtraOwnership(&TravelHorse->members.super.super.super.baseExtraList, v7); /*0x64a9d3*/
      if ( a2->members.super.process->GetProcessLevel(a2->members.super.process) != 3 /*0x64a9f6*/
        || (v8 = 1, v6->members.super.process->GetProcessLevel(v6->members.super.process) != 3) )
      {
        v8 = 0; /*0x64a9f8*/
      }
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)TravelHorse); /*0x64aa05*/
      if ( WorldSpace == TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2) /*0x64aa33*/
        && !TravelHorse->__vftable->super.super.IsDead((TESObjectREFR *)TravelHorse, 0)
        && (TravelHorse->members.super.super.super.super.flags & kFormFlags_InitiallyDisabled) == 0 )
      {
        Distance = TesObjectREF_GetDistance((TESObjectREFR *)TravelHorse, (TESObjectREFR *)a2, 0); /*0x64aa43*/
        if ( *GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]) >= Distance || v8 ) /*0x64aa60*/
        {
          if ( this->CreatePath(this) ) /*0x64aa74*/
          {
            v10 = this->CreatePath(this); /*0x64aa84*/
            if ( sub_68A180(v10) ) /*0x64aa88*/
            {
              v11 = this->CreatePath(this); /*0x64aa9b*/
              v12 = sub_68A180(v11); /*0x64aa9f*/
              if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x170))(v12) + 4) == 0x18 ) /*0x64aab4*/
                return 0; /*0x64aabf*/
            }
          }
          ((void (__thiscall *)(Actor *, Creature *))a2->vtbl->Unk_E1)(a2, TravelHorse); /*0x64aacd*/
          ((void (__thiscall *)(Creature *, Actor *))TravelHorse->__vftable->Unk_E3)(TravelHorse, a2); /*0x64aada*/
        }
      }
    }
    else
    {
      Shared_GetDwordAtOffset40(a2); /*0x64aae0*/
      a2->vtbl->super.super.GetPos((TESObjectREFR *)a2); /*0x64aaef*/
      v20 = flt_B36778[0x5C]; /*0x64ab08*/
      v14 = a2->vtbl->super.super.GetPos(a2); /*0x64ab0b*/
      sub_446A40( /*0x64ab1f*/
        (TESObjectREFR *)a2,
        flt_B36778[0x5C],
        v14,
        v20,
        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646400,
        (int)a2);
    }
  }
  if ( !a2->vtbl->GetMountedHorse(a2) ) /*0x64ab2e*/
    return 0; /*0x64ab2e*/
  if ( !a2->vtbl->super.super.GetNiNode(a2) ) /*0x64ab3e*/
    return 0; /*0x64ab3e*/
  v15 = a2->vtbl->GetMountedHorse(a2); /*0x64ab4e*/
  if ( !v15->__vftable->super.super.GetNiNode((TESObjectREFR *)v15) ) /*0x64ab5a*/
    return 0; /*0x64abb0*/
  v16 = a2->vtbl->GetMountedHorse(a2); /*0x64ab6a*/
  ((void (__thiscall *)(Creature *, _DWORD))v16->__vftable->Unk_D0)(v16, 0); /*0x64ab78*/
  v17 = (Actor *)a2->vtbl->GetMountedHorse(a2); /*0x64ab84*/
  sub_5F8000(v17); /*0x64ab88*/
  vtbl = a2->vtbl; /*0x64ab8d*/
  v19 = a2->vtbl->GetMountedHorse(a2); /*0x64ab97*/
  ((void (__thiscall *)(Actor *, Creature *))vtbl->Unk_8B)(a2, v19); /*0x64aba2*/
  return 1; /*0x64aabb*/
}
