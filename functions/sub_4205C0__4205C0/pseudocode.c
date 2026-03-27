BSExtraData *__thiscall sub_4205C0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x43u);
  result = BaseExtraList_GetExtraData(this, kExtraData_RandomTeleportMarker);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A660(v4);
    else
      v5 = 0;
    v5[1].vtbl = a2;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
