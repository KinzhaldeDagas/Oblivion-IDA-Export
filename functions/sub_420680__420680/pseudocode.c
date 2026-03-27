BSExtraDataVtbl *__thiscall sub_420680(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_MerchantContainer);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
