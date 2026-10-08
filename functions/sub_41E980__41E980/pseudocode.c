// Returns the integer value stored in ExtraInvestmentGold type 0x52, or zero when absent.
BSExtraData *__thiscall ExtraDataList_GetInvestmentGold(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_InvestmentGold); /*0x41e982*/
  if ( result ) /*0x41e989*/
    return (BSExtraData *)result[1].vtbl; /*0x41e98c*/
  return result; /*0x41e98b*/
}
