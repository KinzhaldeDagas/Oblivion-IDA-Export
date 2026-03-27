char __thiscall sub_424D00(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Follower);
  if ( ExtraData )
  {
    BSSimpleList_Remove(&ExtraData[1].vtbl->Destructor, a2);
    LOBYTE(ExtraData) = sub_45A500(SaveLoad_CurrentSavegame);
  }
  return (char)ExtraData;
}
