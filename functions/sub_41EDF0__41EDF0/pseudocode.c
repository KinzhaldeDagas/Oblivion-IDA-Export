// ExtraTimeLeft singleton setter always creates/updates the supplied float32 bit pattern; no zero or NaN removal sentinel.
BSExtraData *__thiscall ExtraDataList_SetTimeLeft(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_TimeLeft); /*0x41ee16*/
  if ( result ) /*0x41ee1d*/
  {
    result[1].vtbl = a2; /*0x41ee23*/
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u); /*0x41ee3b*/
    if ( v4 ) /*0x41ee51*/
      v5 = ExtraTimeLeft_ctor(v4, *(float *)&a2); /*0x41ee5d*/
    else
      v5 = 0; /*0x41ee64*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x41ee71*/
  }
  return result; /*0x41ee26*/
}
