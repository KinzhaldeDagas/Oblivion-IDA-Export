BSExtraData *__thiscall sub_422D20(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_HaggleAmount); /*0x422d46*/
  if ( result ) /*0x422d4d*/
  {
    result[1].vtbl = a2; /*0x422da3*/
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u); /*0x422d51*/
    if ( v4 ) /*0x422d67*/
      v5 = sub_42AC00(v4, *(float *)&a2); /*0x422d73*/
    else
      v5 = 0; /*0x422d7a*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x422d87*/
  }
  return result; /*0x422d8c*/
}
