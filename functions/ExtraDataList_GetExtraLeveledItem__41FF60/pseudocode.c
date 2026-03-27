BSExtraDataVtbl *__thiscall ExtraDataList_GetExtraLeveledItem(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return (BSExtraDataVtbl *)0xFFFFFFFF;
}
