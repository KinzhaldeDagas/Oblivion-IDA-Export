// Updates or creates ExtraInvestmentGold type 0x52 with the supplied integer amount.
BSExtraData *__thiscall ExtraDataList_SetInvestmentGold(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_InvestmentGold); /*0x41f446*/
  if ( result ) /*0x41f44d*/
  {
    result[1].vtbl = a2; /*0x41f4a0*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x41f451*/
    if ( v4 ) /*0x41f467*/
      v5 = (BSExtraData *)ExtraInvestmentGold_ctor(v4, (int)a2); /*0x41f470*/
    else
      v5 = 0; /*0x41f477*/
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5); /*0x41f484*/
  }
  return result; /*0x41f489*/
}
