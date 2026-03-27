BSExtraData *__thiscall sub_4206A0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x44u);
  result = BaseExtraList_GetExtraData(this, kExtraData_MerchantContainer);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A680(v4);
    else
      v5 = 0;
    v5[1].vtbl = a2;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
