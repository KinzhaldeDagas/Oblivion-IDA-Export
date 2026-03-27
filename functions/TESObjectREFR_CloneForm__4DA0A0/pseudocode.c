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

  v4 = (ExtraDataList *)(this + 0x11);
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x11), kExtraData_Teleport);
  v6 = (BSExtraData *)OblivionDynamicCast(
                        ExtraData,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &ExtraTeleport `RTTI Type Descriptor',
                        0);
  v7 = v6;
  if ( v6 )
    BaseExtraList_RemoveExtraByPtr(v4, (int)v6, 0);
  v8 = BaseExtraList_GetExtraData(v4, kExtraData_EnableStateParent);
  v9 = (BSExtraData *)OblivionDynamicCast(
                        v8,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &ExtraEnableStateParent `RTTI Type Descriptor',
                        0);
  v22 = v9;
  if ( v9 )
    BaseExtraList_RemoveExtraByPtr(v4, (int)v9, 0);
  v10 = BaseExtraList_GetExtraData(v4, kExtraData_RandomTeleportMarker);
  v11 = (BSExtraData *)OblivionDynamicCast(
                         v10,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                         &ExtraRandomTeleportMarker `RTTI Type Descriptor',
                         0);
  v23 = v11;
  if ( v11 )
    BaseExtraList_RemoveExtraByPtr(v4, (int)v11, 0);
  v12 = BaseExtraList_GetExtraData(v4, kExtraData_MerchantContainer);
  v13 = (BSExtraData *)OblivionDynamicCast(
                         v12,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                         &ExtraMerchantContainer `RTTI Type Descriptor',
                         0);
  v24 = v13;
  if ( v13 )
    BaseExtraList_RemoveExtraByPtr(v4, (int)v13, 0);
  v14 = BaseExtraList_GetExtraData(v4, kExtraData_TravelHorse);
  v15 = (BSExtraData *)OblivionDynamicCast(
                         v14,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                         &ExtraTravelHorse `RTTI Type Descriptor',
                         0);
  v25 = v15;
  if ( v15 )
    BaseExtraList_RemoveExtraByPtr(v4, (int)v15, 0);
  v26 = *((_DWORD *)this + 0x10);
  (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x65))(this, 0);
  v16 = TESForm_Clone((TESForm *)this, 0, cloneMap);
  v17 = (TESChildCELL *)OblivionDynamicCast(
                          v16,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  if ( v7 )
    BaseExtraList_AddExtra(v4, v7);
  if ( v22 )
    BaseExtraList_AddExtra(v4, v22);
  if ( v23 )
    BaseExtraList_AddExtra(v4, v23);
  if ( v24 )
    BaseExtraList_AddExtra(v4, v24);
  if ( v25 )
    BaseExtraList_AddExtra(v4, v25);
  (*((void (__thiscall **)(TESChildCELL *, int))this->vtbl + 0x65))(this, v26);
  (*((void (__thiscall **)(TESChildCELL *, _DWORD))v17->vtbl + 0x54))(v17, 0);
  v18 = (TESForm *)(*(int (__thiscall **)(TESChildCELL *))v17[6].vtbl)(v17 + 6);
  v17[2].vtbl = (void *)((int)v17[2].vtbl & ~0x400u);
  v19 = (TESObjectCELL *)v18;
  if ( v18 )
  {
    if ( TESForm_GetQuestItem(v18) )
    {
      WorldSpace = TESObjectCELL_GetWorldSpace(v19);
      sub_4F03D0(WorldSpace, (int)v17);
      (*((void (__thiscall **)(TESChildCELL *, int))v17->vtbl + 0x24))(v17, 1);
    }
  }
  return v17;
}
