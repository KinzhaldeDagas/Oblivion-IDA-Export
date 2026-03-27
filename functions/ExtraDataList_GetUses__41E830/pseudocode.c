char __thiscall ExtraDataList_GetUses(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Uses);
  if ( ExtraData )
    return (char)ExtraData[1].vtbl;
  else
    return 0;
}
