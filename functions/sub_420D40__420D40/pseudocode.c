// Sets ExtraXTarget; null removes type 0x4D, otherwise updates or creates it.
BSExtraData *__thiscall ExtraDataList_SetXTarget(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( !a2 ) /*0x420d6c*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x4Du); /*0x420dda*/
  result = BaseExtraList_GetExtraData(this, kExtraData_XTarget); /*0x420d6e*/
  if ( result ) /*0x420d75*/
  {
    result[1].vtbl = a2; /*0x420d77*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x420d90*/
    if ( v4 ) /*0x420da6*/
      v5 = (BSExtraData *)ExtraXTarget_ctor(v4); /*0x420daa*/
    else
      v5 = 0; /*0x420db1*/
    v5[1].vtbl = a2; /*0x420dbe*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x420dc1*/
  }
  return result; /*0x420d7a*/
}
