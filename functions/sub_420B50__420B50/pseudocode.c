// Returns the owned SeenData pointer from ExtraSeenData (type 0x09), or null.
BSExtraDataVtbl *__thiscall sub_420B50(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SeenData); /*0x420b52*/
  if ( ExtraData ) /*0x420b59*/
    return ExtraData[1].vtbl; /*0x420b5b*/
  else
    return 0; /*0x420b5f*/
}
