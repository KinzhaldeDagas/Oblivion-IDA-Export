// Creates/updates ExtraCellWaterType with a TESWaterForm; null removes the water-type extra.
BSExtraData *__thiscall ExtraDataList_SetWaterType(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x42050c*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 5u); /*0x42057a*/
  result = BaseExtraList_GetExtraData(this, kExtraData_CellWaterType); /*0x42050e*/
  if ( result ) /*0x420515*/
  {
    result[1].vtbl = a2; /*0x420517*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x420530*/
    if ( v4 ) /*0x420546*/
      v5 = (BSExtraData *)ExtraCellWaterType_Constructor(v4); /*0x42054a*/
    else
      v5 = 0; /*0x420551*/
    v5[1].vtbl = a2; /*0x42055e*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x420561*/
  }
  return result; /*0x42051a*/
}
