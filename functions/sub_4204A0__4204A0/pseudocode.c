BSExtraData *__thiscall sub_4204A0(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList);
  if ( result )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x42u);
  return result;
}
