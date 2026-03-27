unsigned int __thiscall sub_41E7F0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Rank);
  if ( ExtraData )
    return (unsigned int)ExtraData[1].vtbl;
  else
    return 0xFFFFFFFF;
}
