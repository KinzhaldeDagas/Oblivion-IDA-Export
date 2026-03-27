void __thiscall sub_424790(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem);
  if ( ExtraData )
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
}
