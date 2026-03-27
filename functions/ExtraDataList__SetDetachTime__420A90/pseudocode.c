BSExtraData *__thiscall ExtraDataList__SetDetachTime(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x10u);
  result = BaseExtraList_GetExtraData(this, kExtraData_DetachTime);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)ExtraDetachTime_constr(v4);
    else
      v5 = 0;
    v5[1].vtbl = a2;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
