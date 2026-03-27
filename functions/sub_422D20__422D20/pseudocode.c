BSExtraData *__thiscall sub_422D20(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_HaggleAmount);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = sub_42AC00(v4, *(float *)&a2);
    else
      v5 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5);
  }
  return result;
}
