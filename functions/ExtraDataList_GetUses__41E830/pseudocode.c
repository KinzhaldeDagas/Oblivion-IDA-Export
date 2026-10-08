char __thiscall ExtraDataList_GetUses(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Uses); /*0x41e832*/
  if ( ExtraData ) /*0x41e839*/
    return (char)ExtraData[1].vtbl; /*0x41e83b*/
  else
    return 0; /*0x41e83f*/
}
