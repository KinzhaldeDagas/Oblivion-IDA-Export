BSExtraData *__thiscall sub_41FB60(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
  if ( ExtraData )
    return ExtraData[1].members.next;
  else
    return 0;
}
