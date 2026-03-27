char __thiscall IsOffLimitToThePlayer(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // ebp
  ExtraLock *v3; // ebx
  BSExtraData *Teleport; // eax
  BSExtraData *v5; // edi
  BSExtraDataVtbl *v6; // eax
  BSExtraDataVtbl *Owner; // eax
  char CompareTo; // cl
  bool v9; // zf
  char v10; // al
  TeleportData *v12; // eax
  char v13; // bl
  TESObjectCELL *v14; // eax
  TESObjectCELL *v15; // esi
  int v16; // eax
  char v17; // cl
  bool v18; // zf
  char v19; // al
  char v20; // bl
  TeleportData *v21; // eax
  TESObjectCELL *v22; // eax
  TESObjectCELL *v23; // esi
  int v24; // eax
  char v25; // cl
  bool v26; // zf
  char v27; // al
  char v28; // [esp+Fh] [ebp-1h]

  p_baseExtraList = &this->member.baseExtraList;
  v28 = 0;
  v3 = sub_41E690(&this->member.baseExtraList);
  if ( !v3 )
  {
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(p_baseExtraList);
    v5 = Teleport;
    if ( Teleport )
    {
      if ( sub_42B410(Teleport) )
      {
        v6 = sub_42B410(v5);
        v3 = sub_41E690((ExtraDataList *)&v6[8].CompareTo);
      }
    }
  }
  Owner = TESObjectREFR_GetOwner(this);
  if ( Owner || (Owner = TESObjectREFR_GetOwner(this)) != 0 )
  {
    CompareTo = (char)Owner->CompareTo;
    if ( CompareTo == 6 )
    {
      v9 = ((int)Owner[6].CompareTo & 2) == 0;
    }
    else
    {
      if ( CompareTo != 0x23 )
        goto LABEL_13;
      TESActorBaseData_AllFactionsAreEvil(&Owner[4].CompareTo);
      v9 = v10 == 0;
    }
    if ( !v9 )
      return 0;
  }
LABEL_13:
  if ( this->vtbl->GetBaseForm(this)->member.type != kFormType_Door )
  {
    if ( (this->vtbl->GetBaseForm(this)->member.type != kFormType_NPC
       || !Actor_IsSneaking(TESDataHandler_g_PlayerRef)
       || this->vtbl->IsDead(this, 0))
      && (!TESObjectREFR_GetOwner(this)
       || TESOBjectREFR_IsOwnedBy(this, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1)
       || this->vtbl->IsActor(this) && !sub_4D74D0(this)) )
    {
      return v28;
    }
    return 1;
  }
  if ( !this->vtbl->GetBaseForm(this)
    || TESOBjectREFR_IsOwnedBy(this, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1)
    || !TESObjectREFR_GetOwner(this) )
  {
    v20 = 0;
    v21 = ExtraDataList_GetTeleport(p_baseExtraList);
    if ( !v21 )
      return 0;
    v22 = sub_42B460(&v21->linkedDoor);
    v23 = v22;
    if ( !v22 )
      return 0;
    TESObjectCELL_GetOwner((ExtraDataList *)v22);
    if ( !v24 )
      return 0;
    v25 = *(_BYTE *)(v24 + 4);
    if ( v25 == 6 )
    {
      v26 = (*(_BYTE *)(v24 + 0x34) & 2) == 0;
    }
    else
    {
      if ( v25 != 0x23 )
        return TESObjectCELL_IsInterior(v23)
            && !sub_4C9880((int)v23)
            && !v20
            && !sub_4CAAC0((ExtraDataList *)v23, (Actor *)TESDataHandler_g_PlayerRef);
      TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v24 + 0x24));
      v26 = v27 == 0;
    }
    if ( !v26 )
      v20 = 1;
    return TESObjectCELL_IsInterior(v23)
        && !sub_4C9880((int)v23)
        && !v20
        && !sub_4CAAC0((ExtraDataList *)v23, (Actor *)TESDataHandler_g_PlayerRef);
  }
  if ( sub_4B72C0(this, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0, 0) )
    return 0;
  if ( v3 && sub_428E70(v3) )
    return 1;
  v12 = ExtraDataList_GetTeleport(p_baseExtraList);
  v13 = 0;
  if ( v12 )
  {
    v14 = sub_42B460(&v12->linkedDoor);
    v15 = v14;
    if ( !v14 )
      return 0;
    TESObjectCELL_GetOwner((ExtraDataList *)v14);
    if ( !v16 )
      return 0;
    v17 = *(_BYTE *)(v16 + 4);
    if ( v17 == 6 )
    {
      v18 = (*(_BYTE *)(v16 + 0x34) & 2) == 0;
    }
    else
    {
      if ( v17 != 0x23 )
        return TESObjectCELL_IsInterior(v15) && !sub_4C9880((int)v15) && !v13;
      TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v16 + 0x24));
      v18 = v19 == 0;
    }
    if ( !v18 )
      v13 = 1;
    return TESObjectCELL_IsInterior(v15) && !sub_4C9880((int)v15) && !v13;
  }
  return v28;
}
