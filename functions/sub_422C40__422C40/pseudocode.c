unsigned __int8 __thiscall sub_422C40(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_QuickKey);
  if ( ExtraData )
    return (unsigned __int8)ExtraData[1].vtbl;
  else
    return 0xFF;
}
