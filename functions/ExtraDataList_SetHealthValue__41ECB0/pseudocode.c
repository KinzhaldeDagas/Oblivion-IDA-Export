BSExtraData *__thiscall ExtraDataList_SetHealthValue(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Health); /*0x41ecd6*/
  if ( result ) /*0x41ecdd*/
  {
    result[1].vtbl = a2; /*0x41ece3*/
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u); /*0x41ecfb*/
    if ( v4 ) /*0x41ed11*/
      v5 = ExtraHealth_costr(v4, *(float *)&a2); /*0x41ed1d*/
    else
      v5 = 0; /*0x41ed24*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x41ed31*/
  }
  return result; /*0x41ece6*/
}
