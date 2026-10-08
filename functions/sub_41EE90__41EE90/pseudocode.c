// Updates or creates ExtraCharge type 0x2E with the supplied float.
BSExtraData *__thiscall ExtraDataList_SetCharge(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Charge); /*0x41eeb6*/
  if ( result ) /*0x41eebd*/
  {
    result[1].vtbl = a2; /*0x41eec3*/
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u); /*0x41eedb*/
    if ( v4 ) /*0x41eef1*/
      v5 = ExtraCharge_ctor(v4, *(float *)&a2); /*0x41eefd*/
    else
      v5 = 0; /*0x41ef04*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x41ef11*/
  }
  return result; /*0x41eec6*/
}
