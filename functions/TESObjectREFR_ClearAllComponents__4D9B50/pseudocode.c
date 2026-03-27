void __thiscall TESObjectREFR_ClearAllComponents(TESChildCELL *this)
{
  ExtraDataList *v2; // esi
  BSExtraDataVtbl *v3; // edi
  _DWORD *ShadowSceneNode; // eax
  void (__thiscall *v5)(BSExtraData *); // ebx
  BSExtraData *v6; // edi
  BSExtraDataVtbl *v7; // ebx
  BSExtraData *ExtraData; // eax
  int Destructor; // [esp-4h] [ebp-14h]

  v2 = (ExtraDataList *)(this + 0x11);
  v3 = sub_41E650((ExtraDataList *)(this + 0x11));
  if ( v3 )
  {
    if ( v3->Destructor )
    {
      Destructor = (int)v3->Destructor;
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C7DC0(ShadowSceneNode, Destructor);
      v5 = v3->Destructor;
      if ( v3->Destructor )
      {
        if ( !InterlockedDecrement((volatile LONG *)v5 + 1) )
        {
          if ( v5 )
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))v5)(v5, 1);
        }
        v3->Destructor = 0;
      }
    }
    sub_41F5B0(v2);
  }
  v6 = 0;
  v7 = sub_41FF80(v2);
  if ( (SaveLoad_CurrentSavegame->flags & 4) != 0 )
  {
    ExtraData = BaseExtraList_GetExtraData(v2, kExtraData_EnableStateChildren);
    v6 = ExtraData;
    if ( ExtraData )
      BaseExtraList_RemoveExtraByPtr(v2, (int)ExtraData, 0);
  }
  BaseExtraList_Clear(v2, 1);
  if ( v6 )
    BaseExtraList_AddExtra(v2, v6);
  if ( v7 )
    sub_4247B0(v2, v7);
  if ( (SaveLoad_CurrentSavegame->flags & 4) == 0 )
    (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0);
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
