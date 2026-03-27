int __thiscall sub_41FB40(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
  if ( ExtraData )
    return *(_DWORD *)&ExtraData[1].members.type;
  else
    return 0;
}
