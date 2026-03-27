unsigned __int8 __thiscall sub_41E990(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Seed);
  if ( ExtraData )
    return (unsigned __int8)ExtraData[1].vtbl;
  else
    return 0xFF;
}
