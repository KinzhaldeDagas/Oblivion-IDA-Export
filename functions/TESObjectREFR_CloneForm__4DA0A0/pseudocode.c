TESChildCELL *__thiscall TESObjectREFR_CloneForm(TESChildCELL *this, int a2, void *cloneMap)
{
  ExtraDataList *v4; // esi
  BSExtraData *ExtraData; // eax
  BSExtraData *v6; // eax
  BSExtraData *v7; // ebp
  BSExtraData *v8; // eax
  BSExtraData *v9; // eax
  BSExtraData *v10; // eax
  BSExtraData *v11; // eax
  BSExtraData *v12; // eax
  BSExtraData *v13; // eax
  BSExtraData *v14; // eax
  BSExtraData *v15; // eax
  TESForm *v16; // eax
  TESChildCELL *v17; // edi
  TESForm *v18; // eax
  TESObjectCELL *v19; // esi
  TESWorldSpace *WorldSpace; // eax
  BSExtraData *v22; // [esp+10h] [ebp-14h]
  BSExtraData *v23; // [esp+14h] [ebp-10h]
  BSExtraData *v24; // [esp+18h] [ebp-Ch]
  BSExtraData *v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+20h] [ebp-4h]

  v4 = (ExtraDataList *)(this + 0x11); /*0x4da0b7*/
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_Teleport); /*0x4da0be*/
  v6 = (BSExtraData *)OblivionDynamicCast( /*0x4da0c4*/
                        ExtraData,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &ExtraTeleport `RTTI Type Descriptor',
                        0);
  v7 = v6; /*0x4da0c9*/
  if ( v6 ) /*0x4da0d0*/
    BaseExtraList_RemoveExtraByPtr(v4, (int)v6, 0); /*0x4da0d7*/
  v8 = BaseExtraList_GetExtraData(v4, kExtraData_EnableStateParent); /*0x4da0ee*/
  v9 = (BSExtraData *)OblivionDynamicCast( /*0x4da0f4*/
                        v8,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &ExtraEnableStateParent `RTTI Type Descriptor',
                        0);
  v22 = v9; /*0x4da0fe*/
  if ( v9 ) /*0x4da102*/
    BaseExtraList_RemoveExtraByPtr(v4, (int)v9, 0); /*0x4da109*/
  v10 = BaseExtraList_GetExtraData(v4, kExtraData_RandomTeleportMarker); /*0x4da120*/
  v11 = (BSExtraData *)OblivionDynamicCast( /*0x4da126*/
                         v10,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                         &ExtraRandomTeleportMarker `RTTI Type Descriptor',
                         0);
  v23 = v11; /*0x4da130*/
  if ( v11 ) /*0x4da134*/
    BaseExtraList_RemoveExtraByPtr(v4, (int)v11, 0); /*0x4da13b*/
  v12 = BaseExtraList_GetExtraData(v4, kExtraData_MerchantContainer); /*0x4da152*/
  v13 = (BSExtraData *)OblivionDynamicCast( /*0x4da158*/
                         v12,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                         &ExtraMerchantContainer `RTTI Type Descriptor',
                         0);
  v24 = v13; /*0x4da162*/
  if ( v13 ) /*0x4da166*/
    BaseExtraList_RemoveExtraByPtr(v4, (int)v13, 0); /*0x4da16d*/
  v14 = BaseExtraList_GetExtraData(v4, kExtraData_TravelHorse); /*0x4da184*/
  v15 = (BSExtraData *)OblivionDynamicCast( /*0x4da18a*/
                         v14,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                         &ExtraTravelHorse `RTTI Type Descriptor',
                         0);
  v25 = v15; /*0x4da194*/
  if ( v15 ) /*0x4da198*/
    BaseExtraList_RemoveExtraByPtr(v4, (int)v15, 0); /*0x4da19f*/
  v26 = *((_DWORD *)this + 0x10); /*0x4da1a9*/
  (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x65))(this, 0); /*0x4da1b7*/
  v16 = TESForm_Clone((TESForm *)this, 0, cloneMap); /*0x4da1d0*/
  v17 = (TESChildCELL *)OblivionDynamicCast( /*0x4da1e0*/
                          v16,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  if ( v7 ) /*0x4da1e2*/
    BaseExtraList_AddExtra(v4, v7); /*0x4da1e7*/
  if ( v22 ) /*0x4da1f2*/
    BaseExtraList_AddExtra(v4, v22); /*0x4da1f7*/
  if ( v23 ) /*0x4da202*/
    BaseExtraList_AddExtra(v4, v23); /*0x4da207*/
  if ( v24 ) /*0x4da212*/
    BaseExtraList_AddExtra(v4, v24); /*0x4da217*/
  if ( v25 ) /*0x4da222*/
    BaseExtraList_AddExtra(v4, v25); /*0x4da227*/
  (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x65))(this, v26); /*0x4da23b*/
  (*((void (__thiscall **)(TESChildCELL *, _DWORD))v17->vtbl + 0x54))(v17, 0); /*0x4da249*/
  v18 = (TESForm *)(*(int (__thiscall **)(TESChildCELL *))v17[6].vtbl)(v17 + 6); /*0x4da253*/
  v17[2].vtbl = (void *)((int)v17[2].vtbl & ~0x400u); /*0x4da255*/
  v19 = (TESObjectCELL *)v18; /*0x4da25c*/
  if ( v18 ) /*0x4da260*/
  {
    if ( TESForm_GetQuestItem(v18) ) /*0x4da264*/
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(v19); /*0x4da26f*/
      TESWorldSpace_RemovePersistentCellReference(WorldSpace, (TESObjectREFR *)v17); /*0x4da277*/
      (*((void (__thiscall **)(TESChildCELL *, int))v17->vtbl + 0x24))(v17, 1); /*0x4da288*/
    }
  }
  return v17; /*0x4da28c*/
}
