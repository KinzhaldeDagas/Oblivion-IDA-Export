int __thiscall TESObjectREFR_destr(TESChildCELL *this)
{
  int v6; // edi
  char v7; // dl
  BSExtraDataVtbl *v8; // eax
  BSExtraData *i; // edi
  BSExtraDataVtbl *v10; // eax
  BSExtraData *j; // edi
  TESObjectCELL *v12; // ecx
  TESObjectCELL *ChildCell; // eax
  InterfaceManager *Singleton; // eax
  int v15; // edi
  char v17; // [esp+13h] [ebp-15h]
  int v18; // [esp+14h] [ebp-14h]

  this->vtbl = &TESObjectREFR::`vftable'{for `TESObjectREFR'};
  *((_DWORD *)this + 6) = &TESObjectREFR::`vftable'{for `TESChildCell'};
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v7 = *(_BYTE *)(v6 + 0x185);
  *(_BYTE *)(v6 + 0x185) = 0;
  v18 = v6;
  v17 = v7;
  if ( (*(_DWORD *)(this + 2) & 0x4000) == 0 )
  {
    TESOjectREFR_stuffsWithPArentCell(this);
    sub_674F70((int **)&ActorProcessManager_ptr, (int)this);
    sub_60DF00((int)this);
    sub_45A300(SaveLoad_CurrentSavegame, (int)this);
    v8 = sub_420260((ExtraDataList *)(this + 0x11));
    if ( v8 )
      sub_424B10((ExtraDataList *)&v8[8].CompareTo, (int)this);
    for ( i = sub_4203A0((ExtraDataList *)(this + 0x11)); i; i = *(BSExtraData **)&i->members.type )
    {
      if ( !*(_DWORD *)&i->members.type && !i->vtbl )
        break;
      sub_420280((ExtraDataList *)&i->vtbl[8].CompareTo, 0);
    }
    v10 = sub_4203C0((ExtraDataList *)(this + 0x11));
    if ( v10 )
      sub_424C00((ExtraDataList *)&v10[8].CompareTo, (int)this);
    for ( j = sub_420480((ExtraDataList *)(this + 0x11)); j; j = *(BSExtraData **)&j->members.type )
    {
      if ( !*(_DWORD *)&j->members.type && !j->vtbl )
        break;
      sub_4203E0((ExtraDataList *)&j->vtbl[8].CompareTo, 0);
    }
    TESObjectREFR_EnableREF(this);
    sub_4416D0(TES, (int)this);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    {
      if ( (*(_DWORD *)(this + 2) & 0x40000) != 0 )
        sub_679C10(&ActorProcessManager_ptr, (Actor *)this);
      sub_678D90((int *)&ActorProcessManager_ptr, (LONG)this);
    }
    if ( (*(_DWORD *)(this + 2) & 0x400000) != 0 )
      BSSimpleList_Remove(&TESDataHandler_g_PlayerRef->unk760[8], (int)this);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    {
      if ( *((_DWORD *)this + 7) )
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == 0x20 )
          BSSimpleList_Remove(&TES->unk80, (int)this);
      }
    }
    v6 = v18;
  }
  TESForm_SetDeleted((TESForm *)this, 1);
  TESObjectREFR_ClearAllComponents(this);
  v12 = *((TESObjectCELL **)this + 0x10);
  if ( v12 )
    sub_4CECD0(v12, (TESObjectREFR *)this);
  if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)this) )
  {
    if ( TESDataHandler )
    {
      if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
      {
        ChildCell = (TESObjectCELL *)TESObjectREFR_TESChildCell_GetChildCell(this + 6);
        if ( ChildCell )
          sub_4CECD0(ChildCell, (TESObjectREFR *)this);
      }
    }
  }
  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    sub_57D1A0(Singleton, (int)this);
  }
  if ( srcObj == this )
    srcObj = 0;
  if ( (TESChildCELL *)Player_HUDHealthBarTarget_ == this )
    Player_UpdateHUDHealthBarTarget_(0);
  if ( TESDataHandler_g_PlayerRef )
    sub_663FA0((int)this);
  *(_BYTE *)(v6 + 0x185) = v17;
  BaseExtraList_destr((ExtraDataList *)(this + 0x11));
  v15 = *((_DWORD *)this + 0xF);
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
  }
  return TESForm_destr((TESForm *)this);
}
