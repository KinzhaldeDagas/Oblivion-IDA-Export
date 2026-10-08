// Removes ExtraDroppedItemList type 0x42 when present.
BSExtraData *__thiscall ExtraDataList_RemoveDroppedItemList(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList); /*0x4204a5*/
  if ( result ) /*0x4204ac*/
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x42u); /*0x4204b2*/
  return result; /*0x4204b7*/
}
