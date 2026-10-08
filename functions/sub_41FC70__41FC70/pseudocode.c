// Returns the TrespassPackage stored in ExtraTresPassPackage, or null.
BSExtraDataVtbl *__thiscall ExtraDataList_GetTrespassPackage(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage); /*0x41fc72*/
  if ( ExtraData ) /*0x41fc79*/
    return ExtraData[1].vtbl; /*0x41fc7b*/
  else
    return 0; /*0x41fc7f*/
}
