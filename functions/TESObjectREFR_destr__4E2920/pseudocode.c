// Verified reference destruction lifecycle: TESObjectREFR_destr calls TESForm_SetDeleted(this, true) before removing the reference from its cell and destroying its ExtraDataList.
int __thiscall TESObjectREFR_destr(TESChildCELL *this)
{
  int v2; // edi
  char v3; // dl
  BSExtraDataVtbl *EnableStateParent; // eax
  BSExtraData *i; // edi
  BSExtraDataVtbl *ItemDropper; // eax
  BSExtraData *j; // edi
  TESObjectCELL *v8; // ecx
  TESObjectCELL *ChildCell; // eax
  InterfaceManager *Singleton; // eax
  int v11; // edi
  char v13; // [esp+13h] [ebp-15h]
  int v14; // [esp+14h] [ebp-14h]

  this->vtbl = &TESObjectREFR::`vftable'{for `TESObjectREFR'}; /*0x4e294c*/
  *((_DWORD *)this + 6) = &TESObjectREFR::`vftable'{for `TESChildCell'}; /*0x4e2952*/
  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x4e2965*/
  v3 = *(_BYTE *)(v2 + 0x185); /*0x4e2968*/
  *(_BYTE *)(v2 + 0x185) = 0; /*0x4e296e*/
  v14 = v2; /*0x4e2985*/
  v13 = v3; /*0x4e2989*/
  if ( (*(_DWORD *)(this + 2) & 0x4000) == 0 ) /*0x4e298d*/
  {
    TESOjectREFR_stuffsWithPArentCell(this); /*0x4e2995*/
    ActorProcessManager_RemoveCrimesForTarget((ActorProcessManager *)&qword_B3BB2C[0x75], (TESObjectREFR *)this); /*0x4e29a0*/
    sub_60DF00((int)this); /*0x4e29a6*/
    sub_45A300(g_TESSaveLoadGame, (int)this); /*0x4e29b5*/
    EnableStateParent = ExtraDataList_GetEnableStateParent((ExtraDataList *)(this + 0x11)); /*0x4e29bf*/
    if ( EnableStateParent ) /*0x4e29c6*/
      sub_424B10((ExtraDataList *)&EnableStateParent[8].CompareTo, (int)this); /*0x4e29cc*/
    for ( i = ExtraDataList_GetEnableStateChildren((ExtraDataList *)(this + 0x11)); i; i = *(BSExtraData **)&i->members.type ) /*0x4e29dc*/
    {
      if ( !*(_DWORD *)&i->members.type && !i->vtbl ) /*0x4e29e6*/
        break; /*0x4e29e9*/
      ExtraDataList_SetEnableStateParent((ExtraDataList *)&i->vtbl[8].CompareTo, 0); /*0x4e29f2*/
    }
    ItemDropper = ExtraDataList_GetItemDropper((ExtraDataList *)(this + 0x11)); /*0x4e2a00*/
    if ( ItemDropper ) /*0x4e2a07*/
      sub_424C00((ExtraDataList *)&ItemDropper[8].CompareTo, (int)this); /*0x4e2a0d*/
    for ( j = ExtraDataList_GetDroppedItemList((ExtraDataList *)(this + 0x11)); j; j = *(BSExtraData **)&j->members.type ) /*0x4e2a1d*/
    {
      if ( !*(_DWORD *)&j->members.type && !j->vtbl ) /*0x4e2a26*/
        break; /*0x4e2a29*/
      ExtraDataList_SetItemDropper((ExtraDataList *)&j->vtbl[8].CompareTo, 0); /*0x4e2a32*/
    }
    TESObjectREFR_EnableREF(this); /*0x4e2a3f*/
    sub_4416D0((int **)MEMORY[0xB333A0], (int)this); /*0x4e2a4e*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4e2a59*/
    {
      if ( (*(_DWORD *)(this + 2) & 0x40000) != 0 ) /*0x4e2a69*/
        sub_679C10((ActorProcessManager *)&qword_B3BB2C[0x75], (Actor *)this); /*0x4e2a71*/
      ActorProcessManager_FinishHitEffectsForTarget((ActorProcessManager *)&qword_B3BB2C[0x75], (TESObjectREFR *)this); /*0x4e2a7c*/
    }
    if ( (*(_DWORD *)(this + 2) & 0x400000) != 0 ) /*0x4e2a8a*/
      BSSimpleList_Remove((int *)&reference->unk760.beforeDoorSpaceMap[0x20], (int)this); /*0x4e2a99*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4e2aa3*/
    {
      if ( *((_DWORD *)this + 7) ) /*0x4e2aac*/
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == 0x20 ) /*0x4e2ac2*/
          BSSimpleList_Remove((int *)&MEMORY[0xB333A0]->unk80, (int)this); /*0x4e2ad1*/
      }
    }
    v2 = v14; /*0x4e2ad6*/
  }
  TESForm_SetDeleted((TESForm *)this, 1); /*0x4e2ade*/
  TESObjectREFR_ClearAllComponents(this); /*0x4e2ae5*/
  v8 = *((TESObjectCELL **)this + 0x10); /*0x4e2aea*/
  if ( v8 ) /*0x4e2aef*/
    TESObjectCELL_RemoveReference(v8, (TESObjectREFR *)this); /*0x4e2af2*/
  if ( TESObjectREFR_IsPersistent((TESObjectREFR *)this) ) /*0x4e2af9*/
  {
    if ( g_TESDataHandler ) /*0x4e2b02*/
    {
      if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4e2b0b*/
      {
        ChildCell = TESObjectREFR_TESChildCell_GetChildCell(this + 6); /*0x4e2b17*/
        if ( ChildCell ) /*0x4e2b1e*/
          TESObjectCELL_RemoveReference(ChildCell, (TESObjectREFR *)this); /*0x4e2b23*/
      }
    }
  }
  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x4e2b2c*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x4e2b3d*/
    sub_57D1A0(Singleton, (int)this); /*0x4e2b47*/
  }
  if ( MEMORY[0xB333B4] == this ) /*0x4e2b52*/
    MEMORY[0xB333B4] = 0; /*0x4e2b54*/
  if ( (TESChildCELL *)dword_B3B0B4[0xAC] == this ) /*0x4e2b64*/
    Player_UpdateHUDHealthBarTarget_(0); /*0x4e2b68*/
  if ( reference ) /*0x4e2b70*/
    sub_663FA0((int)this); /*0x4e2b7b*/
  *(_BYTE *)(v2 + 0x185) = v13; /*0x4e2b84*/
  BaseExtraList_destr((ExtraDataList *)(this + 0x11)); /*0x4e2b92*/
  v11 = *((_DWORD *)this + 0xF); /*0x4e2b97*/
  if ( v11 ) /*0x4e2ba1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x4e2ba7*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x4e2bbd*/
  }
  return TESForm_destr((TESForm *)this); /*0x4e2bce*/
}
