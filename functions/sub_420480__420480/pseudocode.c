// Returns the embedded reference list in ExtraDroppedItemList type 0x42.
BSExtraData *__thiscall ExtraDataList_GetDroppedItemList(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList); /*0x420485*/
  if ( ExtraData ) /*0x42048c*/
    return ExtraData + 1; /*0x42048e*/
  else
    return 0; /*0x420493*/
}
