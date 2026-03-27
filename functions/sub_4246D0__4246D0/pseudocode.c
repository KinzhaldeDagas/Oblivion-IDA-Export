void __thiscall sub_4246D0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
  if ( ExtraData )
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
}
