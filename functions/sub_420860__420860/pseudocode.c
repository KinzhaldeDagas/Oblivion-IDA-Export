// Creates/updates ExtraTravelHorse type 0x58; null removes the travel-horse link.
BSExtraData *__thiscall ExtraDataList_SetTravelHorse(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x42088c*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x58u); /*0x4208fa*/
  result = BaseExtraList_GetExtraData(this, kExtraData_TravelHorse); /*0x42088e*/
  if ( result ) /*0x420895*/
  {
    result[1].vtbl = a2; /*0x420897*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4208b0*/
    if ( v4 ) /*0x4208c6*/
      v5 = (BSExtraData *)sub_42A6A0(v4); /*0x4208ca*/
    else
      v5 = 0; /*0x4208d1*/
    v5[1].vtbl = a2; /*0x4208de*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x4208e1*/
  }
  return result; /*0x42089a*/
}
