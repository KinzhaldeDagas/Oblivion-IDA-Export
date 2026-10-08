BSExtraData *__thiscall sub_41F9B0(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_RegionList); /*0x41f9b2*/
  if ( result ) /*0x41f9b9*/
    return (BSExtraData *)result[1].vtbl; /*0x41f9bc*/
  return result; /*0x41f9bb*/
}
