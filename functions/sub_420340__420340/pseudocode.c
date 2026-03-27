char __thiscall sub_420340(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent);
  if ( ExtraData )
    return ExtraData[1].members.type & 1;
  else
    return 0;
}
