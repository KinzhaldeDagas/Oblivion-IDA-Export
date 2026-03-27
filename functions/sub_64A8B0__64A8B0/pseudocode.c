char __thiscall sub_64A8B0(HighProcess *this, Actor *a2, int a3)
{
  TESPackage *v4; // ebx
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

  if ( Actor_IsCreature(a2) || a2->vtbl->GetMountedHorse(a2) )
    return 0;
  v4 = sub_5E0380(a2);
  TravelHorse = (Creature *)ExtraDataList::GetTravelHorse(&a2->members.super.super.baseExtraList);
  v6 = 0;
  if ( TravelHorse )
  {
    if ( TravelHorse->__vftable->super.super.IsActor((TESObjectREFR *)TravelHorse) )
      v6 = (Actor *)TravelHorse;
  }
  v21 = 0.0;
  v24 = 0;
  if ( !v4 )
    return 0;
  if ( (v4->members.packageFlags & 0x800000) == 0 )
  {
    if ( this->pathing )
      v21 = ((double (__thiscall *)(PathLow *, Actor *))*(_DWORD *)(*(_DWORD *)this->pathing + 0x28))(this->pathing, a2);
    if ( flt_B37528 <= (double)v21 )
    {
      if ( v6 )
        v24 = 1;
    }
  }
  if ( (v4->members.packageFlags & 0x800000) != 0 || v24 )
  {
    if ( TravelHorse
      && v6
      && v6->members.super.process
      && !v6->vtbl->super.super.IsDead((TESObjectREFR *)v6, 0)
      && !((int (__thiscall *)(Actor *))v6->vtbl->Unk_E2)(v6) )
    {
      v7 = a2->vtbl->super.super.GetBaseForm(a2);
      ExtraDataList::SetOrRemoveExtraOwnership(&TravelHorse->members.super.super.super.baseExtraList, v7);
      if ( a2->members.super.process->GetProcessLevel(a2->members.super.process) != 3
        || (v8 = 1, v6->members.super.process->GetProcessLevel(v6->members.super.process) != 3) )
      {
        v8 = 0;
      }
      WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)TravelHorse);
      if ( WorldSpace == TESObjectREFR_GetWorldSpace((TESObjectREFR *)a2)
        && !TravelHorse->__vftable->super.super.IsDead((TESObjectREFR *)TravelHorse, 0)
        && (TravelHorse->members.super.super.super.super.flags & kFormFlags_InitiallyDisabled) == 0 )
      {
        Distance = TesObjectREF_GetDistance((TESObjectREFR *)TravelHorse, (TESObjectREFR *)a2, 0);
        if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance) >= Distance || v8 )
        {
          if ( this->CreatePath(this) )
          {
            v10 = this->CreatePath(this);
            if ( sub_68A180(v10) )
            {
              v11 = this->CreatePath(this);
              v12 = sub_68A180(v11);
              if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x170))(v12) + 4) == 0x18 )
                return 0;
            }
          }
          ((void (__thiscall *)(Actor *, Creature *))a2->vtbl->Unk_E1)(a2, TravelHorse);
          ((void (__thiscall *)(Creature *, Actor *))TravelHorse->__vftable->Unk_E3)(TravelHorse, a2);
        }
      }
    }
    else
    {
      TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
      a2->vtbl->super.super.GetPos((TESObjectREFR *)a2);
      v20 = fAIAcquireObjectDistance;
      v14 = a2->vtbl->super.super.GetPos(a2);
      sub_446A40(
        (TESObjectREFR *)a2,
        fAIAcquireObjectDistance,
        v14,
        v20,
        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646400,
        (int)a2);
    }
  }
  if ( !a2->vtbl->GetMountedHorse(a2) )
    return 0;
  if ( !a2->vtbl->super.super.GetNiNode(a2) )
    return 0;
  v15 = a2->vtbl->GetMountedHorse(a2);
  if ( !v15->__vftable->super.super.GetNiNode((TESObjectREFR *)v15) )
    return 0;
  v16 = a2->vtbl->GetMountedHorse(a2);
  ((void (__thiscall *)(Creature *, _DWORD))v16->__vftable->Unk_D0)(v16, 0);
  v17 = (Actor *)a2->vtbl->GetMountedHorse(a2);
  sub_5F8000(v17);
  vtbl = a2->vtbl;
  v19 = a2->vtbl->GetMountedHorse(a2);
  ((void (__thiscall *)(Actor *, Creature *))vtbl->Unk_8B)(a2, v19);
  return 1;
}
