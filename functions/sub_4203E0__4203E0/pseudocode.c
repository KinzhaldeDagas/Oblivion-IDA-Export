BSExtraData *__thiscall sub_4203E0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  _BYTE *v5; // eax
  BSExtraData *v6; // eax

  if ( !a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x41u);
  result = BaseExtraList_GetExtraData(this, kExtraData_ItemDropper);
  v4 = result;
  if ( !result )
  {
    v5 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v5 )
      v6 = (BSExtraData *)sub_42A840(v5);
    else
      v6 = 0;
    v4 = v6;
    result = (BSExtraData *)BaseExtraList_AddExtra(this, v6);
  }
  v4[1].vtbl = a2;
  return result;
}
