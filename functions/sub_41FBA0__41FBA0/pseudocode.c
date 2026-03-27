char __thiscall sub_41FBA0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
  if ( ExtraData )
    return BYTE1(ExtraData[2].vtbl);
  else
    return 0;
}
