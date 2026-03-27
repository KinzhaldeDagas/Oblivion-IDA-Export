bool __thiscall sub_41F830(ExtraDataList *this, char a2)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( ExtraData )
    LOBYTE(ExtraData) = (unsigned __int8)((int)ExtraData[1].vtbl & a2) != 0;
  else
    return (a2 & 1) != 0;
  return (char)ExtraData;
}
