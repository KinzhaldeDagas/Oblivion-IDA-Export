// Returns the reference stored in ExtraMerchantContainer type 0x44.
BSExtraDataVtbl *__thiscall ExtraDataList_GetMerchantContainer(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_MerchantContainer); /*0x420682*/
  if ( ExtraData ) /*0x420689*/
    return ExtraData[1].vtbl; /*0x42068b*/
  else
    return 0; /*0x42068f*/
}
