BSExtraData *__thiscall sub_420B70(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *vtbl; // ecx
  ExtraSeenData *v6; // eax
  BSExtraData *v7; // eax

  if ( !a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 9u);
  result = BaseExtraList_GetExtraData(this, kExtraData_SeenData);
  v4 = result;
  if ( result )
  {
    vtbl = result[1].vtbl;
    if ( vtbl )
      result = (BSExtraData *)(*(int (__thiscall **)(BSExtraDataVtbl *, int))vtbl->Destructor)(vtbl, 1);
    v4[1].vtbl = a2;
  }
  else
  {
    v6 = (ExtraSeenData *)FormHeapAlloc(0x10u);
    if ( v6 )
      v7 = (BSExtraData *)ExtraSeenData::ExtraSeenData(v6);
    else
      v7 = 0;
    v7[1].vtbl = a2;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v7);
  }
  return result;
}
