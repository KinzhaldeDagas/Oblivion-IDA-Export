BSExtraData *__thiscall ExtraDataList_SetHealthValue(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Health);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = ExtraHealth_costr(v4, *(float *)&a2);
    else
      v5 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5);
  }
  return result;
}
