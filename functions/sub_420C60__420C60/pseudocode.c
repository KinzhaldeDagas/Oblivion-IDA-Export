BSExtraData *__thiscall sub_420C60(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  float *v4; // eax
  float *v5; // eax

  if ( 0.0 == *(float *)&a2 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x4Cu);
  result = BaseExtraList_GetExtraData(this, kExtraData_NorthRotation);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (float *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = ExtraNorthRotation_Create(v4);
    else
      v5 = 0;
    v5[3] = *(float *)&a2;
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v5);
  }
  return result;
}
