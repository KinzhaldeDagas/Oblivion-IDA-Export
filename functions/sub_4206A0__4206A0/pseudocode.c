// Creates/updates ExtraMerchantContainer; null removes type 0x44.
BSExtraData *__thiscall ExtraDataList_SetMerchantContainer(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x4206cc*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x44u); /*0x42073a*/
  result = BaseExtraList_GetExtraData(this, kExtraData_MerchantContainer); /*0x4206ce*/
  if ( result ) /*0x4206d5*/
  {
    result[1].vtbl = a2; /*0x4206d7*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4206f0*/
    if ( v4 ) /*0x420706*/
      v5 = (BSExtraData *)sub_42A680(v4); /*0x42070a*/
    else
      v5 = 0; /*0x420711*/
    v5[1].vtbl = a2; /*0x42071e*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x420721*/
  }
  return result; /*0x4206da*/
}
