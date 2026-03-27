char __thiscall sub_41FB80(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
  if ( ExtraData )
    return (char)ExtraData[2].vtbl;
  else
    return 0;
}
