BSExtraData *__thiscall sub_41E980(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_InvestmentGold);
  if ( result )
    return (BSExtraData *)result[1].vtbl;
  return result;
}
