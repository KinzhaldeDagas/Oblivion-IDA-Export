BSExtraData *__thiscall sub_420D40(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x4Du);
  result = BaseExtraList_GetExtraData(this, kExtraData_XTarget);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A820(v4);
    else
      v5 = 0;
    v5[1].vtbl = a2;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
