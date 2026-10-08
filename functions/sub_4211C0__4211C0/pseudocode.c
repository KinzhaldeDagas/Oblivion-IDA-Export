// Returns ExtraSavedMovementData's saved-attached-animation pointer, or null.
BSExtraData *__thiscall ExtraDataList_GetSavedAttachedAnimation(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x4211c2*/
  if ( ExtraData ) /*0x4211c9*/
    return ExtraData[1].members.next; /*0x4211cb*/
  else
    return 0; /*0x4211cf*/
}
