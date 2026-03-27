BSExtraData *__thiscall sub_4211C0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData);
  if ( ExtraData )
    return ExtraData[1].members.next;
  else
    return 0;
}
