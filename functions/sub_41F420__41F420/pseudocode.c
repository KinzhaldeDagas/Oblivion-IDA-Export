BSExtraData *__thiscall sub_41F420(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_InvestmentGold);
  if ( result )
  {
    result[1].vtbl = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A070(v4, (int)a2);
    else
      v5 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v5);
  }
  return result;
}
