BSExtraData *__thiscall sub_420480(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList);
  if ( ExtraData )
    return ExtraData + 1;
  else
    return 0;
}
