signed int __thiscall sub_41F810(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( ExtraData )
    return LOBYTE(ExtraData[1].vtbl);
  else
    return 1;
}
