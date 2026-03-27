signed __int16 __thiscall ExtraDataList_GetExtraCount(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Count);
  if ( ExtraData )
    return (signed __int16)ExtraData[1].vtbl;
  else
    return 1;
}
