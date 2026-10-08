// Creates/updates ExtraLevCreaModifier; null removes type 0x24.
BSExtraData *__thiscall ExtraDataList_SetLevCreaModifier(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x4207ac*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x24u); /*0x42081a*/
  result = BaseExtraList_GetExtraData(this, kExtraData_LevCreaModifier); /*0x4207ae*/
  if ( result ) /*0x4207b5*/
  {
    result[1].vtbl = a2; /*0x4207b7*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4207d0*/
    if ( v4 ) /*0x4207e6*/
      v5 = (BSExtraData *)sub_42A6C0(v4); /*0x4207ea*/
    else
      v5 = 0; /*0x4207f1*/
    v5[1].vtbl = a2; /*0x4207fe*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x420801*/
  }
  return result; /*0x4207ba*/
}
