BSExtraData *__thiscall sub_41F9B0(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_RegionList);
  if ( result )
    return (BSExtraData *)result[1].vtbl;
  return result;
}
